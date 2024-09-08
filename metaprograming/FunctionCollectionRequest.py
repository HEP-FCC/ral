from metaprograming.FunctionSignature import FunctionSignature
from metaprograming.FunctionParameter import FunctionParameter
from metaprograming.RalEnums import Edm4hepCollection
from metaprograming.CodeSnipets import rvec

class FunctionCollectionRequest(FunctionSignature):
    def __init__(self, name: str, in_edm_t: str, out_edm_t: str, 
                 col_t: Edm4hepCollection, m_index:str) -> None:
        func_name = f"get{name}"
        vec_t = ""
        doc = f"Get the collection of {out_edm_t} related to a {in_edm_t}."
        params = []
        code = ""

        match col_t:
            case Edm4hepCollection.RVEC:
                vec_t = rvec(f"edm4hep::{out_edm_t}Data")
                params = [ 
                    FunctionParameter("item", f"edm4hep::{in_edm_t}Data &",
                                      f"{in_edm_t} from which to look for the related collection."),
                    FunctionParameter("relatedCollection", rvec(f"edm4hep::{out_edm_t}Data") + "&",
                                      f"Complete collection of {out_edm_t} to filter")
                ]
                code = (
                    f"{vec_t} vec;\n"
                    f"size_t len = item.{m_index}_end - item.{m_index}_begin;\n"
                    f"vec.reserve(len);\n"
                    f"for(int i = item.{m_index}_begin; i < item.{m_index}_end; i++)\u007b\n"
                    f"vec.emplace_back(relatedCollection[i]);\n"
                    f"\u007d\n"
                    f"return vec;\n")
            case Edm4hepCollection.COLLECTION:
                vec_t = f"edm4hep::{out_edm_t}Collection"
                params = [ 
                    FunctionParameter("item", f"const edm4hep::{in_edm_t} &",
                                      f"{in_edm_t} to look in for related collection")
                ]
                code = (
                    f"{vec_t} vec;\n"
                    f"vec.setSubsetCollection();\n"
                    f"for(auto it = item.{m_index}_begin(); it != item.{m_index}_end(); it++)\u007b\n"
                    f"vec.push_back(*it);\n"
                    f"\u007d\n"
                    f"return vec;\n")

        super().__init__(func_name, vec_t, params, doc, code)
