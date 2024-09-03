from pathlib import Path
from metaprograming.FunctionSignature import FunctionSignature 
from metaprograming.RalEnums import Edm4hepCollection 
from metaprograming.FunctionGetter import FunctionGetter
from metaprograming.FunctionPrinter import FunctionPrinter
from metaprograming.FunctionMask import FunctionMask
from metaprograming.FunctionSelector import FunctionSelector
from metaprograming.FunctionSorter import FunctionSorter

class RalClassWriter:

    def __init__(self, include_dir: str | Path, src_dir: str | Path) -> None:
        self.include_dir = include_dir if isinstance(include_dir,Path) else Path(include_dir)
        self.src_dir = src_dir if isinstance(src_dir,Path) else Path(src_dir)
        self.edm_class = ""
        self.includes = []
        self.namespaces = []
        self.functions = []
    
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

    def add_printer(self, name: str, out_t: str, col_t: Edm4hepCollection, 
                   doc_property: str) -> None:
        printer = FunctionPrinter(name, out_t, self.edm_class, col_t, doc_property)
        self.functions.append(printer)

    def add_mask(self, name: str, val_t: str, col_t: Edm4hepCollection, 
                 doc_property: str) -> None:
        mask = FunctionMask(name, val_t, self.edm_class, col_t, doc_property)
        self.functions.append(mask)

    def add_selector(self, name: str, val_t: str, col_t: Edm4hepCollection, 
                 doc_property: str) -> None:
        sel = FunctionSelector(name, val_t, self.edm_class, col_t, doc_property)
        self.functions.append(sel)

    def add_sorter(self, name: str, val_t: str, col_t: Edm4hepCollection, 
                   doc_property: str, get_code: str) -> None:
        sorter = FunctionSorter(name, val_t, self.edm_class, col_t, doc_property, 
                                get_code)
        self.functions.append(sorter)

    def write(self, h_file: str, src_file: str) -> None:
        with open(self.include_dir / h_file, "w") as header, open(self.src_dir / src_file, "w") as source:
            h_code = [f"#include <{i}>\n" for i in self.includes]
            h_code.extend([f"namespace {n}\u007b\n" for n in self.namespaces])
            h_code.extend([f.get_header() for f in self.functions])
            h_code.extend(["\u007d\n" for _ in self.namespaces])
            header.write("".join(h_code))

            s_code = [f"#include <ral/{h_file}>\n"]
            s_code.extend([f"namespace {n}\u007b\n" for n in self.namespaces])
            s_code.extend([f.get_source() for f in self.functions])
            s_code.extend(["\u007d\n" for _ in self.namespaces])
            source.write("".join(s_code))

