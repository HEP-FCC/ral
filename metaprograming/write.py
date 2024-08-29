from typing import TextIO, Self
from dataclasses import dataclass, field
from enum import Enum, auto
from pathlib import Path

def add_includes(file: TextIO, includes: list[str]) -> None:
    for inc in includes:
        file.write(f"#include <{inc}>\n")

def rvec(t: str) -> str:
    return f"ROOT::VecOps::RVec<{t}>"

def momentum_property(inst_name: str, p_m_name: str, prop_name: str, var_name:str) -> str:
    return (f"float px = {inst_name}.{p_m_name}.x;\n"
            f"float py = {inst_name}.{p_m_name}.y;\n"
            f"float pz = {inst_name}.{p_m_name}.z;\n"
            f"float m = {inst_name}.mass;\n"
            f"ROOT::Math::PxPyPzMVector p(px,py,pz,m);\n"
            f"{var_name} = p.{prop_name}();\n")

class CppTypes(Enum):
    INT = auto()
    FLOAT = auto()
    DOUBLE = auto()
    VEC2D = auto()
    VEC3D = auto()
    MOMENTUM = auto()
    POSITION = auto()

class Edm4hepCollection(Enum):
    RVEC = auto()
    COLLECTION = auto()

@dataclass
class RalClassMember:
    name: str
    t: CppTypes

@dataclass
class RalClass:
    name: str
    members: list[RalClassMember] = field(default_factory=list)

    def add_member(self, name:str, t: CppTypes) -> Self:
        m = RalClassMember(name, t)
        self.members.append(m)
        return self

@dataclass
class FunctionParameter:
    name: str
    t: str
    doc: str

@dataclass
class FunctionSignature:
    name: str
    out_t: str
    parameters: list[FunctionParameter]
    doc: str
    code: str = ""

    def get_docstring(self) -> str:
        param_docs = "".join([f" * @param {p.name} {p.doc}\n" for p in self.parameters])
        docstring = ((f"/**\n"
                      f" * {self.doc}\n"
                      f" *\n") +
                     param_docs +
                     (" *\n"
                      " */\n"))
        return docstring

    def get_signature(self) -> str:
        parameters = ", ".join([f"{p.t} {p.name}" for p in self.parameters])
        return f"{self.out_t} {self.name}({parameters})"

    def get_header(self) -> str:
        return self.get_docstring() + self.get_signature() + ";\n"

    def get_source(self) -> str:
        return self.get_signature() + "{\n"+ self.code + "\n}\n"

class FunctionGetter(FunctionSignature):
    def __init__(self, name: str, out_t: str, edm_t: str, 
                 col_t: Edm4hepCollection, doc_property: str, 
                 get_code:str) -> None:
        name = f"get_{name}"
        vec_t = rvec(out_t)
        doc = f"Get {doc_property} from each item in a collection of {edm_t}."
        params = []
        code = ""

        match col_t:
            case Edm4hepCollection.RVEC:
                params = [ 
                    FunctionParameter("collection", rvec(f"edm4hep::{edm_t}Data"),
                                      f"Collection of {edm_t} to look in")
                ]
                code = (
                    f"{vec_t} vec;\n"
                    f"vec.reserve(collection.size());\n"
                    f"for(const edm4hep::{edm_t}Data x : collection)\u007b\n"
                    f"{out_t} restult;") + get_code + (
                    f"vec.emplace_back(result);\n"
                    f"  \u007d\n"
                    f"  return result;\n")
            case Edm4hepCollection.COLLECTION:
                raise NotImplementedError()

        super().__init__(name, vec_t, params, doc, code)

class RalClassWriter:

    def __init__(self, include_dir: str | Path, src_dir: str | Path) -> None:
        self.include_dir = include_dir if isinstance(include_dir,Path) else Path(include_dir)
        self.src_dir = src_dir if isinstance(src_dir,Path) else Path(src_dir)
        self.edm_class = ""
        self.includes = []
        self.namespaces = []
        self.functions = []
        self.__initialize = False
    
    def add_edm_class(self, edm_class: str) -> None:
        self.edm_class = edm_class

    def add_include(self, include: str) -> None:
        self.includes.append(include)

    def add_namespace(self, namespace: str) -> None:
        self.namespaces.append(namespace)

    def add_function(self, func: FunctionSignature) -> None:
        self.functions.append(func)

    def add_getter(self, name: str, out_t: str, col_t: Edm4hepCollection, 
                   doc_property: str, get_code: str) -> None:
        getter = FunctionGetter(name, out_t, self.edm_class, col_t, doc_property, 
                                get_code)
        self.functions.append(getter)

    def initialize(self) -> None:
        self.__initialize = self.edm_class != "" and len(self.functions) > 0
        if not self.__initialize:
            raise RuntimeError("Failed initialization")
 
    def write(self, h_file: str, src_file: str) -> None:
        with open(self.include_dir / h_file, "w") as header, open(self.src_dir / src_file, "w") as source:
            h_code = [f"#include <{i}>\n" for i in self.includes]
            h_code.extend([f"namespace {n}\u007b\n" for n in self.namespaces])
            h_code.extend([f.get_header() for f in self.functions])
            h_code.extend(["\u007d\n" for _ in self.namespaces])
            header.write("".join(h_code))

            s_code = [f"#include <ral/{h_file}>"]
            s_code.extend([f"namespace {n}\u007b\n" for n in self.namespaces])
            s_code.extend([f.get_source() for f in self.functions])
            s_code.extend(["\u007d\n" for _ in self.namespaces])
            source.write("".join(s_code))

if __name__ == "__main__":
    writer = RalClassWriter("/tmp", "/tmp")
    writer.add_edm_class("ReconstructedParticle")
    writer.add_include("cmath")
    writer.add_include("Math/Vector3D.h")
    writer.add_include("Math/Vector4D.h")
    writer.add_include("edm4hep/ReconstructedParticleData.h")
    writer.add_include("ral/LogicalOperators.h")
    writer.add_namespace("k4::ral")
    writer.add_namespace("ReconstructedParticle")
    writer.add_getter("p", "float", Edm4hepCollection.RVEC, "momentum",
                      momentum_property("x", "momentum", "result", "P"))
    writer.write("h.h", "src.cpp")





