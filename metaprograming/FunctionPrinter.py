from metaprograming.FunctionSignature import FunctionSignature
from metaprograming.FunctionParameter import FunctionParameter
from metaprograming.RalEnums import Edm4hepCollection
from metaprograming.CodeSnipets import rvec

class FunctionPrinter(FunctionSignature):
    def __init__(self, name: str, out_t: str, edm_t: str, 
                 col_t: Edm4hepCollection, doc_property: str) -> None:
        func_name = f"print_{name}"
        vec_t = rvec(out_t)
        doc = f"Print {doc_property} from each item in a collection of {edm_t}."
        params = []
        code = ""

        match col_t:
            case Edm4hepCollection.RVEC:
                params = [ 
                    FunctionParameter("collection", rvec(f"edm4hep::{edm_t}Data"),
                                      f"Collection of {edm_t} to look in")
                ]
                code = (
                    f"{vec_t} vec = get_{name}(collection);\n"
                    f'std::cout << "{doc_property.capitalize()}: ";\n'
                    f"for(const {out_t} &item : vec)\u007b\n"
                    f'std::cout << item << " ";\n'
                    f"\u007d\n"
                    f'std::cout << std::endl;\n'
                    f"return 0;\n")
            case Edm4hepCollection.COLLECTION:
                raise NotImplementedError()

        super().__init__(func_name, "int", params, doc, code)
