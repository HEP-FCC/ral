from metaprograming.FunctionSignature import FunctionSignature
from metaprograming.FunctionParameter import FunctionParameter
from metaprograming.RalEnums import Edm4hepCollection
from metaprograming.CodeSnipets import rvec

class FunctionGetter(FunctionSignature):
    def __init__(self, name: str, out_t: str, edm_t: str, 
                 col_t: Edm4hepCollection, doc_property: str, 
                 get_code:str) -> None:
        func_name = f"get{name}"
        vec_t = rvec(out_t)
        doc = f"Get {doc_property} from each item in a collection of {edm_t}."
        params = []
        code = ""

        match col_t:
            case Edm4hepCollection.RVEC:
                params = [ 
                    FunctionParameter("collection", rvec(f"edm4hep::{edm_t}Data") + "&",
                                      f"Collection of {edm_t} to look in")
                ]
                code = (
                    f"{vec_t} vec;\n"
                    f"vec.reserve(collection.size());\n"
                    f"for(const edm4hep::{edm_t}Data &item : collection)\u007b\n"
                    f"{out_t} result;\n") + get_code + (
                    f"vec.emplace_back(result);\n"
                    f"\u007d\n"
                    f"return vec;\n")
            case Edm4hepCollection.COLLECTION:
                params = [ 
                    FunctionParameter("collection", f"const edm4hep::{edm_t}Collection &",
                                      f"Collection of {edm_t} to look in")
                ]
                code = (
                    f"{vec_t} vec;\n"
                    f"vec.reserve(collection.size());\n"
                    f"for(const edm4hep::{edm_t} &item : collection)\u007b\n"
                    f"{out_t} result;\n") + get_code + (
                    f"vec.push_back(result);\n"
                    f"\u007d\n"
                    f"return vec;\n")

        super().__init__(func_name, vec_t, params, doc, code)
