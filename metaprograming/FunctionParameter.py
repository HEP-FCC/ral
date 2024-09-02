from dataclasses import dataclass

@dataclass
class FunctionParameter:
    name: str
    t: str
    doc: str
    default: str = ""
