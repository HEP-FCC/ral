from metaprograming.RalWriter import RalClassWriter
from metaprograming.RalEnums import Edm4hepCollection
from metaprograming.CodeSnipets import momentum_property_from_DataClass, momentum_property_from_edm4hepClass, vertex_property_from_DataClass, vertex_property_from_edm4hepClass, obj_member

def write_cluster_code(header_dir: str, src_dir: str):

    writer = RalClassWriter(header_dir, src_dir)
    writer.add_edm_class("Cluster")

    writer.add_include("cmath")
    writer.add_include("iostream")
    writer.add_include("edm4hep/TrackCollection.h")
    writer.add_include("ral/LogicalOperators.h")

    writer.add_namespace("k4::ral")
    writer.add_namespace("Cluster")

    writer.add_getter("Type", "int", Edm4hepCollection.RVEC, "type",
                      obj_member("item", "type", "result"))
    writer.add_getter("Energy", "float", Edm4hepCollection.RVEC, "energy",
                      obj_member("item", "energy", "result"))
    writer.add_getter("ITheta", "int", Edm4hepCollection.RVEC, "intrinsic theta angle",
                      obj_member("item", "iTheta", "result"))
    writer.add_getter("Phi", "int", Edm4hepCollection.RVEC, "intrinsic phi angle",
                      obj_member("item", "phi", "result"))
    writer.add_getter("R", "float", Edm4hepCollection.RVEC, "distance to origin",
                      vertex_property_from_DataClass("item", "position",  "r", "result"))
    writer.add_getter("X", "float", Edm4hepCollection.RVEC, "x coordinate",
                      vertex_property_from_DataClass("item", "position",  "x", "result"))
    writer.add_getter("Y", "float", Edm4hepCollection.RVEC, "y coordinate",
                      vertex_property_from_DataClass("item", "position",  "y", "result"))
    writer.add_getter("Z", "float", Edm4hepCollection.RVEC, "z coordinate",
                      vertex_property_from_DataClass("item", "position",  "z", "result"))
    writer.add_getter("Type", "int", Edm4hepCollection.COLLECTION, "type",
                      obj_member("item", "type", "result"))
    writer.add_getter("Energy", "float", Edm4hepCollection.COLLECTION, "energy",
                      obj_member("item", "energy", "result"))
    writer.add_getter("ITheta", "int", Edm4hepCollection.COLLECTION, "intrinsic theta angle",
                      obj_member("item", "iTheta", "result"))
    writer.add_getter("Phi", "int", Edm4hepCollection.COLLECTION, "intrinsic phi angle",
                      obj_member("item", "phi", "result"))
    writer.add_getter("R", "float", Edm4hepCollection.COLLECTION, "distance to origin",
                      vertex_property_from_edm4hepClass("item", "position",  "r", "result"))
    writer.add_getter("X", "float", Edm4hepCollection.COLLECTION, "x coordinate",
                      vertex_property_from_edm4hepClass("item", "position",  "x", "result"))
    writer.add_getter("Y", "float", Edm4hepCollection.COLLECTION, "y coordinate",
                      vertex_property_from_edm4hepClass("item", "position",  "y", "result"))
    writer.add_getter("Z", "float", Edm4hepCollection.COLLECTION, "z coordinate",
                      vertex_property_from_edm4hepClass("item", "position",  "z", "result"))

    writer.add_printer("Type", "int", Edm4hepCollection.RVEC, "type")
    writer.add_printer("Energy", "float", Edm4hepCollection.RVEC, "energy")
    writer.add_printer("ITheta", "int", Edm4hepCollection.RVEC, "intrinsic theta angle")
    writer.add_printer("Phi", "int", Edm4hepCollection.RVEC, "intrinsic phi angle")
    writer.add_printer("R", "float", Edm4hepCollection.RVEC, "distance to origin")
    writer.add_printer("X", "float", Edm4hepCollection.RVEC, "x coordinate")
    writer.add_printer("Y", "float", Edm4hepCollection.RVEC, "y coordinate")
    writer.add_printer("Z", "float", Edm4hepCollection.RVEC, "z coordinate")
    writer.add_printer("Type", "int", Edm4hepCollection.COLLECTION, "type")
    writer.add_printer("Energy", "float", Edm4hepCollection.COLLECTION, "energy")
    writer.add_printer("ITheta", "int", Edm4hepCollection.COLLECTION, "intrinsic theta angle")
    writer.add_printer("Phi", "int", Edm4hepCollection.COLLECTION, "intrinsic phi angle")
    writer.add_printer("R", "float", Edm4hepCollection.COLLECTION, "distance to origin")
    writer.add_printer("X", "float", Edm4hepCollection.COLLECTION, "x coordinate")
    writer.add_printer("Y", "float", Edm4hepCollection.COLLECTION, "y coordinate")
    writer.add_printer("Z", "float", Edm4hepCollection.COLLECTION, "z coordinate")

    writer.add_mask("Type", "int", Edm4hepCollection.RVEC, "type")
    writer.add_mask("Energy", "float", Edm4hepCollection.RVEC, "energy")
    writer.add_mask("ITheta", "int", Edm4hepCollection.RVEC, "intrinsic theta angle")
    writer.add_mask("Phi", "int", Edm4hepCollection.RVEC, "intrinsic phi angle")
    writer.add_mask("R", "float", Edm4hepCollection.RVEC, "distance to origin")
    writer.add_mask("X", "float", Edm4hepCollection.RVEC, "x coordinate")
    writer.add_mask("Y", "float", Edm4hepCollection.RVEC, "y coordinate")
    writer.add_mask("Z", "float", Edm4hepCollection.RVEC, "z coordinate")
    writer.add_mask("Type", "int", Edm4hepCollection.COLLECTION, "type")
    writer.add_mask("Energy", "float", Edm4hepCollection.COLLECTION, "energy")
    writer.add_mask("ITheta", "int", Edm4hepCollection.COLLECTION, "intrinsic theta angle")
    writer.add_mask("Phi", "int", Edm4hepCollection.COLLECTION, "intrinsic phi angle")
    writer.add_mask("R", "float", Edm4hepCollection.COLLECTION, "distance to origin")
    writer.add_mask("X", "float", Edm4hepCollection.COLLECTION, "x coordinate")
    writer.add_mask("Y", "float", Edm4hepCollection.COLLECTION, "y coordinate")
    writer.add_mask("Z", "float", Edm4hepCollection.COLLECTION, "z coordinate")

    writer.add_selector("Type", "int", Edm4hepCollection.RVEC, "type")
    writer.add_selector("Energy", "float", Edm4hepCollection.RVEC, "energy")
    writer.add_selector("ITheta", "int", Edm4hepCollection.RVEC, "intrinsic theta angle")
    writer.add_selector("Phi", "int", Edm4hepCollection.RVEC, "intrinsic phi angle")
    writer.add_selector("R", "float", Edm4hepCollection.RVEC, "distance to origin")
    writer.add_selector("X", "float", Edm4hepCollection.RVEC, "x coordinate")
    writer.add_selector("Y", "float", Edm4hepCollection.RVEC, "y coordinate")
    writer.add_selector("Z", "float", Edm4hepCollection.RVEC, "z coordinate")
    writer.add_selector("Type", "int", Edm4hepCollection.COLLECTION, "type")
    writer.add_selector("Energy", "float", Edm4hepCollection.COLLECTION, "energy")
    writer.add_selector("ITheta", "int", Edm4hepCollection.COLLECTION, "intrinsic theta angle")
    writer.add_selector("Phi", "int", Edm4hepCollection.COLLECTION, "intrinsic phi angle")
    writer.add_selector("R", "float", Edm4hepCollection.COLLECTION, "distance to origin")
    writer.add_selector("X", "float", Edm4hepCollection.COLLECTION, "x coordinate")
    writer.add_selector("Y", "float", Edm4hepCollection.COLLECTION, "y coordinate")
    writer.add_selector("Z", "float", Edm4hepCollection.COLLECTION, "z coordinate")

    writer.add_sorter("Type", "int", Edm4hepCollection.RVEC, "type",
                      obj_member("x", "type", "a") +
                      obj_member("y", "type", "b"))
    writer.add_sorter("Energy", "float", Edm4hepCollection.RVEC, "energy",
                      obj_member("x", "energy", "a") +
                      obj_member("y", "energy", "b"))
    writer.add_sorter("ITheta", "int", Edm4hepCollection.RVEC, "intrinsic theta angle",
                      obj_member("x", "iTheta", "a") +
                      obj_member("y", "iTheta", "b"))
    writer.add_sorter("Phi", "int", Edm4hepCollection.RVEC, "intrinsic phi angle",
                      obj_member("x", "phi", "a") +
                      obj_member("y", "phi", "b"))
    writer.add_sorter("R", "float", Edm4hepCollection.RVEC, "distance to origin",
                      vertex_property_from_DataClass("x", "position",  "r", "a") +
                      vertex_property_from_DataClass("y", "position",  "r", "b"))
    writer.add_sorter("X", "float", Edm4hepCollection.RVEC, "x coordinate",
                      vertex_property_from_DataClass("x", "position",  "x", "a") +
                      vertex_property_from_DataClass("y", "position",  "x", "b"))
    writer.add_sorter("Y", "float", Edm4hepCollection.RVEC, "y coordinate",
                      vertex_property_from_DataClass("x", "position",  "y", "a") +
                      vertex_property_from_DataClass("y", "position",  "y", "b"))
    writer.add_sorter("Z", "float", Edm4hepCollection.RVEC, "z coordinate",
                      vertex_property_from_DataClass("x", "position",  "z", "a") +
                      vertex_property_from_DataClass("y", "position",  "z", "b"))
    writer.add_sorter("Type", "int", Edm4hepCollection.COLLECTION, "type",
                      obj_member("x", "type", "a") +
                      obj_member("y", "type", "b"))
    writer.add_sorter("Energy", "float", Edm4hepCollection.COLLECTION, "energy",
                      obj_member("x", "energy", "a") +
                      obj_member("y", "energy", "b"))
    writer.add_sorter("ITheta", "int", Edm4hepCollection.COLLECTION, "intrinsic theta angle",
                      obj_member("x", "iTheta", "a") +
                      obj_member("y", "iTheta", "b"))
    writer.add_sorter("Phi", "int", Edm4hepCollection.COLLECTION, "intrinsic phi angle",
                      obj_member("x", "phi", "a") +
                      obj_member("y", "phi", "b"))
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

    writer.add_collection_request("Clusters", "Cluster", Edm4hepCollection.RVEC, "clusters")
    writer.add_collection_request("Hits", "CalorimeterHit", Edm4hepCollection.RVEC, "hits")
    writer.add_collection_request("Clusters", "Cluster", Edm4hepCollection.COLLECTION, "clusters")
    writer.add_collection_request("Hits", "CalorimeterHit", Edm4hepCollection.COLLECTION, "hits")

    writer.write("Cluster.h", "Cluster.cc")

if __name__ == "__main__":
    write_cluster_code("include/ral", "src")
