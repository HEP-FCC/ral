from metaprograming.FunctionSignature import FunctionSignature
from metaprograming.FunctionParameter import FunctionParameter
from metaprograming.RalEnums import Edm4hepCollection
from metaprograming.CodeSnipets import rvec

class FunctionSorter(FunctionSignature):
    def __init__(self, name: str, val_t: str, edm_t: str, col_t: Edm4hepCollection, 
                 doc_property: str, get_code: str) -> None:
        func_name = f"sort{name}"
        vec_t = ""
        doc = f"Sort a collection of {edm_t} based on the value of {doc_property}."
        params = []
        code = ""
        match col_t:
            case Edm4hepCollection.RVEC:
                vec_t = rvec(f"edm4hep::{edm_t}Data")
                params = [ 
                    FunctionParameter("collection", rvec(f"edm4hep::{edm_t}Data") + "&",
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
                vec_t = f"edm4hep::{edm_t}Collection"
                params = [ 
                    FunctionParameter("collection", f"edm4hep::{edm_t}Collection &",
                                      f"Collection of {edm_t} to be sorted"),
                    FunctionParameter("reverse", "bool",
                                      f"Change the order of sorting.", "false")
                ]
                code = (
                    f"auto lambda = [reverse](edm4hep::{edm_t} x, edm4hep::{edm_t} y)\u007b\n"
                    f"{val_t} a, b;\n") + get_code + (
                    f"bool result = a < b;\n"
                    f"return reverse ? !result : result;\n"
                    f"\u007d;\n"
                    f"std::vector<edm4hep::{edm_t}> vec;\n"
                    f"for(const edm4hep::{edm_t} &item : collection)\u007b\n"
                    f"vec.emplace_back(item);\n"
                    f"\u007d;\n"
                    f"std::sort(vec.begin(), vec.end(), lambda);\n"
                    f"edm4hep::{edm_t}Collection newCollection;\n"
                    f"newCollection.setSubsetCollection();\n"
                    f"for(const edm4hep::{edm_t} &item : vec)\u007b\n"
                    f"newCollection.push_back(item);\n"
                    f"\u007d;\n"
                    f"return newCollection;\n")

        super().__init__(func_name, vec_t, params, doc, code)
