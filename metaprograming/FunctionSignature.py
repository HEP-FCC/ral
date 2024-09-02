from dataclasses import dataclass
from metaprograming.FunctionParameter import FunctionParameter

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

    def get_signature(self, print_defaults: bool = False) -> str:
        if print_defaults:
            parameters = ", ".join([f"{p.t} {p.name}" if p.default == "" else f"{p.t} {p.name} = {p.default}" for p in self.parameters])
        else:
            parameters = ", ".join([f"{p.t} {p.name}" for p in self.parameters])
        return f"{self.out_t} {self.name}({parameters})"

    def get_header(self) -> str:
        return self.get_docstring() + self.get_signature(True) + ";\n"

    def get_source(self) -> str:
        return self.get_signature() + "{\n"+ self.code + "\n}\n"
