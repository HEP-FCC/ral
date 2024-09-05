from metaprograming.RalWriter import RalClassWriter
from metaprograming.RalEnums import Edm4hepCollection
from metaprograming.CodeSnipets import momentum_property_from_DataClass, momentum_property_from_edm4hepClass, vertex_property_from_DataClass, vertex_property_from_edm4hepClass, obj_member

def write_calorimeterhit_code(header_dir: str, src_dir: str):

    writer = RalClassWriter(header_dir, src_dir)
    writer.add_edm_class("CalorimeterHit")

    writer.add_include("cmath")
    writer.add_include("iostream")
    writer.add_include("Math/Vector3D.h")
    writer.add_include("edm4hep/CalorimeterHitCollection.h")
    writer.add_include("ral/LogicalOperators.h")

    writer.add_namespace("k4::ral")
    writer.add_namespace("CalorimeterHit")

    writer.add_getter("Type", "int", Edm4hepCollection.RVEC, "type",
                      obj_member("item", "type", "result"))
    writer.add_getter("CellID", "unsigned long long", Edm4hepCollection.RVEC, "detector cell ID",
                      obj_member("item", "cellID", "result"))
    writer.add_getter("Energy", "float", Edm4hepCollection.RVEC, "energy",
                      obj_member("item", "energy", "result"))
    writer.add_getter("Time", "float", Edm4hepCollection.RVEC, "time of the hit",
                      obj_member("item", "time", "result"))
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
    writer.add_getter("CellID", "unsigned long long", Edm4hepCollection.COLLECTION, "detector cell ID",
                      obj_member("item", "getCellID()", "result"))
    writer.add_getter("Energy", "float", Edm4hepCollection.COLLECTION, "energy",
                      obj_member("item", "getEnergy()", "result"))
    writer.add_getter("Time", "float", Edm4hepCollection.COLLECTION, "time of the hit",
                      obj_member("item", "getTime()", "result"))
    writer.add_getter("R", "float", Edm4hepCollection.COLLECTION, "distance to origin",
                      vertex_property_from_edm4hepClass("item", "getPosition",  "r", "result"))
    writer.add_getter("X", "float", Edm4hepCollection.COLLECTION, "x coordinate",
                      vertex_property_from_edm4hepClass("item", "getPosition",  "x", "result"))
    writer.add_getter("Y", "float", Edm4hepCollection.COLLECTION, "y coordinate",
                      vertex_property_from_edm4hepClass("item", "getPosition",  "y", "result"))
    writer.add_getter("Z", "float", Edm4hepCollection.COLLECTION, "z coordinate",
                      vertex_property_from_edm4hepClass("item", "getPosition",  "z", "result"))

    writer.add_printer("Type", "int", Edm4hepCollection.RVEC, "type")
    writer.add_printer("CellID", "unsigned long long", Edm4hepCollection.RVEC, "detector cell ID")
    writer.add_printer("Energy", "float", Edm4hepCollection.RVEC, "energy")
    writer.add_printer("Time", "float", Edm4hepCollection.RVEC, "time of the hit")
    writer.add_printer("R", "float", Edm4hepCollection.RVEC, "distance to origin")
    writer.add_printer("X", "float", Edm4hepCollection.RVEC, "x coordinate")
    writer.add_printer("Y", "float", Edm4hepCollection.RVEC, "y coordinate")
    writer.add_printer("Z", "float", Edm4hepCollection.RVEC, "z coordinate")
    writer.add_printer("Type", "int", Edm4hepCollection.COLLECTION, "type")
    writer.add_printer("CellID", "unsigned long long", Edm4hepCollection.COLLECTION, "detector cell ID")
    writer.add_printer("Energy", "float", Edm4hepCollection.COLLECTION, "energy")
    writer.add_printer("Time", "float", Edm4hepCollection.COLLECTION, "time of the hit")
    writer.add_printer("R", "float", Edm4hepCollection.COLLECTION, "distance to origin")
    writer.add_printer("X", "float", Edm4hepCollection.COLLECTION, "x coordinate")
    writer.add_printer("Y", "float", Edm4hepCollection.COLLECTION, "y coordinate")
    writer.add_printer("Z", "float", Edm4hepCollection.COLLECTION, "z coordinate")

    writer.add_mask("Type", "int", Edm4hepCollection.RVEC, "type")
    writer.add_mask("CellID", "unsigned long long", Edm4hepCollection.RVEC, "detector cell ID")
    writer.add_mask("Energy", "float", Edm4hepCollection.RVEC, "energy")
    writer.add_mask("Time", "float", Edm4hepCollection.RVEC, "time of the hit")
    writer.add_mask("R", "float", Edm4hepCollection.RVEC, "distance to origin")
    writer.add_mask("X", "float", Edm4hepCollection.RVEC, "x coordinate")
    writer.add_mask("Y", "float", Edm4hepCollection.RVEC, "y coordinate")
    writer.add_mask("Z", "float", Edm4hepCollection.RVEC, "z coordinate")
    writer.add_mask("Type", "int", Edm4hepCollection.COLLECTION, "type")
    writer.add_mask("CellID", "unsigned long long", Edm4hepCollection.COLLECTION, "detector cell ID")
    writer.add_mask("Energy", "float", Edm4hepCollection.COLLECTION, "energy")
    writer.add_mask("Time", "float", Edm4hepCollection.COLLECTION, "time of the hit")
    writer.add_mask("R", "float", Edm4hepCollection.COLLECTION, "distance to origin")
    writer.add_mask("X", "float", Edm4hepCollection.COLLECTION, "x coordinate")
    writer.add_mask("Y", "float", Edm4hepCollection.COLLECTION, "y coordinate")
    writer.add_mask("Z", "float", Edm4hepCollection.COLLECTION, "z coordinate")

    writer.add_selector("Type", "int", Edm4hepCollection.RVEC, "type")
    writer.add_selector("CellID", "unsigned long long", Edm4hepCollection.RVEC, "detector cell ID")
    writer.add_selector("Energy", "float", Edm4hepCollection.RVEC, "energy")
    writer.add_selector("Time", "float", Edm4hepCollection.RVEC, "time of the hit")
    writer.add_selector("R", "float", Edm4hepCollection.RVEC, "distance to origin")
    writer.add_selector("X", "float", Edm4hepCollection.RVEC, "x coordinate")
    writer.add_selector("Y", "float", Edm4hepCollection.RVEC, "y coordinate")
    writer.add_selector("Z", "float", Edm4hepCollection.RVEC, "z coordinate")
    writer.add_selector("Type", "int", Edm4hepCollection.COLLECTION, "type")
    writer.add_selector("CellID", "unsigned long long", Edm4hepCollection.COLLECTION, "detector cell ID")
    writer.add_selector("Energy", "float", Edm4hepCollection.COLLECTION, "energy")
    writer.add_selector("Time", "float", Edm4hepCollection.COLLECTION, "time of the hit")
    writer.add_selector("R", "float", Edm4hepCollection.COLLECTION, "distance to origin")
    writer.add_selector("X", "float", Edm4hepCollection.COLLECTION, "x coordinate")
    writer.add_selector("Y", "float", Edm4hepCollection.COLLECTION, "y coordinate")
    writer.add_selector("Z", "float", Edm4hepCollection.COLLECTION, "z coordinate")

    writer.add_sorter("Type", "int", Edm4hepCollection.RVEC, "type",
                      obj_member("x", "type", "a") +
                      obj_member("y", "type", "b"))
    writer.add_sorter("CellID", "unsigned long long", Edm4hepCollection.RVEC, "detector cell ID",
                      obj_member("x", "cellID", "a") +
                      obj_member("y", "cellID", "b"))
    writer.add_sorter("Energy", "float", Edm4hepCollection.RVEC, "energy",
                      obj_member("x", "energy", "a") +
                      obj_member("y", "energy", "b"))
    writer.add_sorter("Time", "float", Edm4hepCollection.RVEC, "time of the hit",
                      obj_member("x", "time", "a") +
                      obj_member("y", "time", "b"))
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
                      obj_member("x", "getType()", "a") +
                      obj_member("y", "getType()", "b"))
    writer.add_sorter("CellID", "unsigned long long", Edm4hepCollection.COLLECTION, "detector cell ID",
                      obj_member("x", "getCellID()", "a") +
                      obj_member("y", "getCellID()", "b"))
    writer.add_sorter("Energy", "float", Edm4hepCollection.COLLECTION, "energy",
                      obj_member("x", "getEnergy()", "a") +
                      obj_member("y", "getEnergy()", "b"))
    writer.add_sorter("Time", "float", Edm4hepCollection.COLLECTION, "time of the hit",
                      obj_member("x", "getTime()", "a") +
                      obj_member("y", "getTime()", "b"))
    writer.add_sorter("R", "float", Edm4hepCollection.COLLECTION, "distance to origin",
                      vertex_property_from_edm4hepClass("x", "getPosition",  "r", "a") +
                      vertex_property_from_edm4hepClass("y", "getPosition",  "r", "b"))
    writer.add_sorter("X", "float", Edm4hepCollection.COLLECTION, "x coordinate",
                      vertex_property_from_edm4hepClass("x", "getPosition",  "x", "a") +
                      vertex_property_from_edm4hepClass("y", "getPosition",  "x", "b"))
    writer.add_sorter("Y", "float", Edm4hepCollection.COLLECTION, "y coordinate",
                      vertex_property_from_edm4hepClass("x", "getPosition",  "y", "a") +
                      vertex_property_from_edm4hepClass("y", "getPosition",  "y", "b"))
    writer.add_sorter("Z", "float", Edm4hepCollection.COLLECTION, "z coordinate",
                      vertex_property_from_edm4hepClass("x", "getPosition",  "z", "a") +
                      vertex_property_from_edm4hepClass("y", "getPosition",  "z", "b"))

    writer.write("CalorimeterHit.h", "CalorimeterHit.cc")

if __name__ == "__main__":
    write_calorimeterhit_code("include/ral", "src")
