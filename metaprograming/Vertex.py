from metaprograming.RalWriter import RalClassWriter
from metaprograming.RalEnums import Edm4hepCollection
from metaprograming.CodeSnipets import momentum_property_from_DataClass, momentum_property_from_edm4hepClass, vertex_property_from_DataClass, vertex_property_from_edm4hepClass, obj_member

def write_vertex_code(header_dir: str, src_dir: str):

    writer = RalClassWriter(header_dir, src_dir)
    writer.add_edm_class("Vertex")

    writer.add_include("cmath")
    writer.add_include("iostream")
    writer.add_include("edm4hep/VertexCollection.h")
    writer.add_include("ral/LogicalOperators.h")

    writer.add_namespace("k4::ral")
    writer.add_namespace("Vertex")

    writer.add_getter("Type", "int", Edm4hepCollection.RVEC, "type",
                      obj_member("item", "type", "result"))
    writer.add_getter("Chi2", "float", Edm4hepCollection.RVEC, "chi^2",
                      obj_member("item", "chi2", "result"))
    writer.add_getter("Ndf", "int", Edm4hepCollection.RVEC, "degrees of freedom",
                      obj_member("item", "ndf", "result"))
    writer.add_getter("AlgorithmType", "int", Edm4hepCollection.RVEC, "algorithm type",
                      obj_member("item", "algorithmType", "result"))
    writer.add_getter("R", "float", Edm4hepCollection.RVEC, "distance to origin",
                      vertex_property_from_DataClass("item", "position",  "r", "result"))
    writer.add_getter("X", "float", Edm4hepCollection.RVEC, "x coordinate",
                      vertex_property_from_DataClass("item", "position",  "x", "result"))
    writer.add_getter("Y", "float", Edm4hepCollection.RVEC, "y coordinate",
                      vertex_property_from_DataClass("item", "position",  "y", "result"))
    writer.add_getter("Z", "float", Edm4hepCollection.RVEC, "z coordinate",
                      vertex_property_from_DataClass("item", "position",  "z", "result"))
    writer.add_getter("Type", "int", Edm4hepCollection.COLLECTION, "type",
                      obj_member("item", "getType()", "result"))
    writer.add_getter("Chi2", "float", Edm4hepCollection.COLLECTION, "chi^2",
                      obj_member("item", "getChi2()", "result"))
    writer.add_getter("Ndf", "int", Edm4hepCollection.COLLECTION, "degrees of freedom",
                      obj_member("item", "getNdf()", "result"))
    writer.add_getter("AlgorithmType", "int", Edm4hepCollection.COLLECTION, "algorithm type",
                      obj_member("item", "getAlgorithmType()", "result"))
    writer.add_getter("R", "float", Edm4hepCollection.COLLECTION, "distance to origin",
                      vertex_property_from_edm4hepClass("item", "position",  "r", "result"))
    writer.add_getter("X", "float", Edm4hepCollection.COLLECTION, "x coordinate",
                      vertex_property_from_edm4hepClass("item", "position",  "x", "result"))
    writer.add_getter("Y", "float", Edm4hepCollection.COLLECTION, "y coordinate",
                      vertex_property_from_edm4hepClass("item", "position",  "y", "result"))
    writer.add_getter("Z", "float", Edm4hepCollection.COLLECTION, "z coordinate",
                      vertex_property_from_edm4hepClass("item", "position",  "z", "result"))

    writer.add_printer("Type", "int", Edm4hepCollection.RVEC, "type")
    writer.add_printer("Chi2", "float", Edm4hepCollection.RVEC, "chi^2")
    writer.add_printer("Ndf", "int", Edm4hepCollection.RVEC, "degrees of freedom")
    writer.add_printer("AlgorithmType", "int", Edm4hepCollection.RVEC, "algorithm type")
    writer.add_printer("R", "float", Edm4hepCollection.RVEC, "distance to origin")
    writer.add_printer("X", "float", Edm4hepCollection.RVEC, "x coordinate")
    writer.add_printer("Y", "float", Edm4hepCollection.RVEC, "y coordinate")
    writer.add_printer("Z", "float", Edm4hepCollection.RVEC, "z coordinate")
    writer.add_printer("Type", "int", Edm4hepCollection.COLLECTION, "type")
    writer.add_printer("Chi2", "float", Edm4hepCollection.COLLECTION, "chi^2")
    writer.add_printer("Ndf", "int", Edm4hepCollection.COLLECTION, "degrees of freedom")
    writer.add_printer("AlgorithmType", "int", Edm4hepCollection.COLLECTION, "algorithm type")
    writer.add_printer("R", "float", Edm4hepCollection.COLLECTION, "distance to origin")
    writer.add_printer("X", "float", Edm4hepCollection.COLLECTION, "x coordinate")
    writer.add_printer("Y", "float", Edm4hepCollection.COLLECTION, "y coordinate")
    writer.add_printer("Z", "float", Edm4hepCollection.COLLECTION, "z coordinate")

    writer.add_mask("Type", "int", Edm4hepCollection.RVEC, "type")
    writer.add_mask("Chi2", "float", Edm4hepCollection.RVEC, "chi^2")
    writer.add_mask("Ndf", "int", Edm4hepCollection.RVEC, "degrees of freedom")
    writer.add_mask("AlgorithmType", "int", Edm4hepCollection.RVEC, "algorithm type")
    writer.add_mask("R", "float", Edm4hepCollection.RVEC, "distance to origin")
    writer.add_mask("X", "float", Edm4hepCollection.RVEC, "x coordinate")
    writer.add_mask("Y", "float", Edm4hepCollection.RVEC, "y coordinate")
    writer.add_mask("Z", "float", Edm4hepCollection.RVEC, "z coordinate")
    writer.add_mask("Type", "int", Edm4hepCollection.COLLECTION, "type")
    writer.add_mask("Chi2", "float", Edm4hepCollection.COLLECTION, "chi^2")
    writer.add_mask("Ndf", "int", Edm4hepCollection.COLLECTION, "degrees of freedom")
    writer.add_mask("AlgorithmType", "int", Edm4hepCollection.COLLECTION, "algorithm type")
    writer.add_mask("R", "float", Edm4hepCollection.COLLECTION, "distance to origin")
    writer.add_mask("X", "float", Edm4hepCollection.COLLECTION, "x coordinate")
    writer.add_mask("Y", "float", Edm4hepCollection.COLLECTION, "y coordinate")
    writer.add_mask("Z", "float", Edm4hepCollection.COLLECTION, "z coordinate")

    writer.add_selector("Type", "int", Edm4hepCollection.RVEC, "type")
    writer.add_selector("Chi2", "float", Edm4hepCollection.RVEC, "chi^2")
    writer.add_selector("Ndf", "int", Edm4hepCollection.RVEC, "degrees of freedom")
    writer.add_selector("AlgorithmType", "int", Edm4hepCollection.RVEC, "algorithm type")
    writer.add_selector("R", "float", Edm4hepCollection.RVEC, "distance to origin")
    writer.add_selector("X", "float", Edm4hepCollection.RVEC, "x coordinate")
    writer.add_selector("Y", "float", Edm4hepCollection.RVEC, "y coordinate")
    writer.add_selector("Z", "float", Edm4hepCollection.RVEC, "z coordinate")
    writer.add_selector("Type", "int", Edm4hepCollection.COLLECTION, "type")
    writer.add_selector("Chi2", "float", Edm4hepCollection.COLLECTION, "chi^2")
    writer.add_selector("Ndf", "int", Edm4hepCollection.COLLECTION, "degrees of freedom")
    writer.add_selector("AlgorithmType", "int", Edm4hepCollection.COLLECTION, "algorithm type")
    writer.add_selector("R", "float", Edm4hepCollection.COLLECTION, "distance to origin")
    writer.add_selector("X", "float", Edm4hepCollection.COLLECTION, "x coordinate")
    writer.add_selector("Y", "float", Edm4hepCollection.COLLECTION, "y coordinate")
    writer.add_selector("Z", "float", Edm4hepCollection.COLLECTION, "z coordinate")

    writer.add_sorter("Type", "int", Edm4hepCollection.RVEC, "type",
                      obj_member("x", "type", "a") +
                      obj_member("y", "type", "b"))
    writer.add_sorter("Chi2", "float", Edm4hepCollection.RVEC, "chi^2",
                      obj_member("x", "chi2", "a") +
                      obj_member("y", "chi2", "b"))
    writer.add_sorter("Ndf", "int", Edm4hepCollection.RVEC, "degrees of freedom",
                      obj_member("x", "ndf", "a") +
                      obj_member("y", "ndf", "b"))
    writer.add_sorter("AlgorithmType", "int", Edm4hepCollection.RVEC, "algorithm type",
                      obj_member("x", "algorithmType", "a") +
                      obj_member("y", "algorithmType", "b"))
    writer.add_sorter("R", "float", Edm4hepCollection.RVEC, "distance to origin",
                      vertex_property_from_DataClass("x", "position",  "r", "a") +
                      vertex_property_from_DataClass("y", "position",  "r", "b"))
    writer.add_sorter("X", "float", Edm4hepCollection.RVEC, "b",
                      vertex_property_from_DataClass("x", "position",  "x", "a") +
                      vertex_property_from_DataClass("y", "position",  "x", "b"))
    writer.add_sorter("Y", "float", Edm4hepCollection.RVEC, "b",
                      vertex_property_from_DataClass("x", "position",  "y", "a") +
                      vertex_property_from_DataClass("y", "position",  "y", "b"))
    writer.add_sorter("Z", "float", Edm4hepCollection.RVEC, "z coordinate",
                      vertex_property_from_DataClass("x", "position",  "z", "a") +
                      vertex_property_from_DataClass("y", "position",  "z", "b"))
    writer.add_sorter("Type", "int", Edm4hepCollection.COLLECTION, "type",
                      obj_member("x", "getType()", "a") +
                      obj_member("y", "getType()", "b"))
    writer.add_sorter("Chi2", "float", Edm4hepCollection.COLLECTION, "chi^2",
                      obj_member("x", "getChi2()", "a") +
                      obj_member("y", "getChi2()", "b"))
    writer.add_sorter("Ndf", "int", Edm4hepCollection.COLLECTION, "degrees of freedom",
                      obj_member("x", "getNdf()", "a") +
                      obj_member("y", "getNdf()", "b"))
    writer.add_sorter("AlgorithmType", "int", Edm4hepCollection.COLLECTION, "algorithm type",
                      obj_member("x", "getAlgorithmType()", "a") +
                      obj_member("y", "getAlgorithmType()", "b"))
    writer.add_sorter("R", "float", Edm4hepCollection.COLLECTION, "distance to origin",
                      vertex_property_from_edm4hepClass("x", "position",  "r", "a") +
                      vertex_property_from_edm4hepClass("y", "position",  "r", "b"))
    writer.add_sorter("X", "float", Edm4hepCollection.COLLECTION, "x coordinate",
                      vertex_property_from_edm4hepClass("x", "position",  "x", "a") +
                      vertex_property_from_edm4hepClass("y", "position",  "x", "b"))
    writer.add_sorter("Y", "float", Edm4hepCollection.COLLECTION, "y coordinate",
                      vertex_property_from_edm4hepClass("x", "position",  "y", "a") +
                      vertex_property_from_edm4hepClass("y", "position",  "y", "b"))
    writer.add_sorter("Z", "float", Edm4hepCollection.COLLECTION, "z coordinate",
                      vertex_property_from_edm4hepClass("x", "position",  "z", "a") +
                      vertex_property_from_edm4hepClass("y", "position",  "z", "b"))

    writer.write("Vertex.h", "Vertex.cc")

if __name__ == "__main__":
    write_vertex_code("include/ral", "src")
