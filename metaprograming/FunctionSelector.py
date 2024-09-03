from metaprograming.FunctionSignature import FunctionSignature
from metaprograming.FunctionParameter import FunctionParameter
from metaprograming.RalEnums import Edm4hepCollection
from metaprograming.CodeSnipets import rvec

class FunctionSelector(FunctionSignature):
    def __init__(self, name: str, val_t: str, edm_t: str, 
                 col_t: Edm4hepCollection, doc_property: str) -> None:
        func_name = f"sel{name}"
        vec_t = rvec(f"edm4hep::{edm_t}Data")
        doc = f"Select a subgroup of {edm_t} based on the value of {doc_property}."
        params = []
        code = (
            f"auto mask = mask{name}(op, val, collection);\n"
            f"return LogicalOperators::filter(mask, collection);\n")
        match col_t:
            case Edm4hepCollection.RVEC:
                vec_t = rvec(f"edm4hep::{edm_t}Data")
                params = [ 
                    FunctionParameter("op", "LogicalOperators::ComparisonOperator",
                                      f"Logical operation applied to create the mask."),
                    FunctionParameter("val", val_t,
                                      f"Value to compare with."),
                    FunctionParameter("collection", rvec(f"edm4hep::{edm_t}Data"),
                                      f"Collection of {edm_t} to look in")
                ]
            case Edm4hepCollection.COLLECTION:
                vec_t = f"edm4hep::{edm_t}Collection"
                params = [ 
                    FunctionParameter("op", "LogicalOperators::ComparisonOperator",
                                      f"Logical operation applied to create the mask."),
                    FunctionParameter("val", val_t,
                                      f"Value to compare with."),
                    FunctionParameter("collection", f"const edm4hep::{edm_t}Collection &",
                                      f"Collection of {edm_t} to look in")
                ]

        super().__init__(func_name, vec_t, params, doc, code)
