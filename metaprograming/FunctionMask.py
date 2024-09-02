from metaprograming.FunctionSignature import FunctionSignature
from metaprograming.FunctionParameter import FunctionParameter
from metaprograming.RalEnums import Edm4hepCollection
from metaprograming.CodeSnipets import rvec

class FunctionMask(FunctionSignature):
    def __init__(self, name: str, val_t: str, edm_t: str, 
                 col_t: Edm4hepCollection, doc_property: str) -> None:
        func_name = f"mask_{name}"
        vec_t = rvec("bool")
        doc = f"Create boolean mask based on the value of {doc_property} from each item in a collection of {edm_t}."
        params = []
        code = ""
        match col_t:
            case Edm4hepCollection.RVEC:
                params = [ 
                    FunctionParameter("op", "LogicalOperators::ComparisonOperator",
                                      f"Logical operation applied to create the mask."),
                    FunctionParameter("val", val_t,
                                      f"Value to compare with."),
                    FunctionParameter("collection", rvec(f"edm4hep::{edm_t}Data"),
                                      f"Collection of {edm_t} to look in")
                ]
                code = (
                    f"{vec_t} vec;\n"
                    f"vec.reserve(collection.size());\n"
                    f"{rvec(val_t)} vals = get_{name}(collection);\n"
                    f"for(const {val_t} &item : vals)\u007b\n"
                    f"switch (op)\u007b\n"
                    f"case LogicalOperators::ComparisonOperator::LESS:\n"
                    f"vec.emplace_back(item < val);\n"
                    f"break;\n"
                    f"case LogicalOperators::ComparisonOperator::LESSEQ:\n"
                    f"vec.emplace_back(item <= val);\n"
                    f"break;\n"
                    f"case LogicalOperators::ComparisonOperator::EQ:\n"
                    f"vec.emplace_back(item == val);\n"
                    f"break;\n"
                    f"case LogicalOperators::ComparisonOperator::GREATEREQ:\n"
                    f"vec.emplace_back(item >= val);\n"
                    f"break;\n"
                    f"case LogicalOperators::ComparisonOperator::GREATER:\n"
                    f"vec.emplace_back(item > val);\n"
                    f"break;\n"
                    f"\u007d\n"
                    f"\u007d\n"
                    f"return vec;\n")
            case Edm4hepCollection.COLLECTION:
                raise NotImplementedError()

        super().__init__(func_name, vec_t, params, doc, code)
