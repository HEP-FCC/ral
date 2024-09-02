from metaprograming.FunctionSignature import FunctionSignature
from metaprograming.FunctionParameter import FunctionParameter
from metaprograming.RalEnums import Edm4hepCollection
from metaprograming.CodeSnipets import rvec

class FunctionSorter(FunctionSignature):
    def __init__(self, name: str, val_t: str, edm_t: str, col_t: Edm4hepCollection, 
                 doc_property: str, get_code: str) -> None:
        func_name = f"sort_{name}"
        vec_t = rvec(f"edm4hep::{edm_t}Data")
        doc = f"Sort a collection of {edm_t} based on the value of {doc_property}."
        params = []
        code = ""
        match col_t:
            case Edm4hepCollection.RVEC:
                params = [ 
                    FunctionParameter("collection", rvec(f"edm4hep::{edm_t}Data"),
                                      f"Collection of {edm_t} to be sorted"),
                    FunctionParameter("reverse", "bool",
                                      f"Change the order of sorting.", "false")
                ]
                code = (
                    f"auto lambda = [reverse](edm4hep::{edm_t}Data x, edm4hep::{edm_t}Data y)\u007b\n"
                    f"{val_t} a, b;\n") + get_code + (
                    f"bool result = a < b;\n"
                    f"return reverse ? !result : result;\n"
                    f"\u007d;\n"
                            f"return ROOT::VecOps::Sort(collection, lambda);\n")
            case Edm4hepCollection.COLLECTION:
                raise NotImplementedError()

        super().__init__(func_name, vec_t, params, doc, code)
