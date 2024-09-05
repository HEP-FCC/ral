from metaprograming.RalWriter import RalClassWriter
from metaprograming.RalEnums import Edm4hepCollection
from metaprograming.CodeSnipets import momentum_property_from_DataClass, momentum_property_from_edm4hepClass, vertex_property_from_DataClass, vertex_property_from_edm4hepClass, obj_member

def write_trackerhit3d_code(header_dir: str, src_dir: str):

    writer = RalClassWriter(header_dir, src_dir)
    writer.add_edm_class("TrackerHit3D")

    writer.add_include("cmath")
    writer.add_include("iostream")
    writer.add_include("edm4hep/TrackerHit3DCollection.h")
    writer.add_include("ral/LogicalOperators.h")

    writer.add_namespace("k4::ral")
    writer.add_namespace("TrackerHit3D")

    writer.add_getter("Type", "int", Edm4hepCollection.RVEC, "type",
                      obj_member("item", "type", "result"))
    writer.add_getter("Quality", "int", Edm4hepCollection.RVEC, "quality",
                      obj_member("item", "quality", "result"))
    writer.add_getter("CellID", "unsigned long long", Edm4hepCollection.RVEC, "detector cell ID",
                      obj_member("item", "cellID", "result"))
    writer.add_getter("EDep", "float", Edm4hepCollection.RVEC, "eDep",
                      obj_member("item", "eDep", "result"))
    writer.add_getter("Time", "float", Edm4hepCollection.RVEC, "time of the hit",
                      obj_member("item", "time", "result"))
    writer.add_getter("Type", "int", Edm4hepCollection.COLLECTION, "type",
                      obj_member("item", "getType()", "result"))
    writer.add_getter("Quality", "int", Edm4hepCollection.COLLECTION, "quality",
                      obj_member("item", "getQuality()", "result"))
    writer.add_getter("CellID", "unsigned long long", Edm4hepCollection.COLLECTION, "detector cell ID",
                      obj_member("item", "getCellID()", "result"))
    writer.add_getter("EDep", "float", Edm4hepCollection.COLLECTION, "eDep",
                      obj_member("item", "getEDep()", "result"))
    writer.add_getter("Time", "float", Edm4hepCollection.COLLECTION, "time of the hit",
                      obj_member("item", "getTime()", "result"))

    writer.add_printer("Type", "int", Edm4hepCollection.RVEC, "type")
    writer.add_printer("Quality", "int", Edm4hepCollection.RVEC, "type")
    writer.add_printer("CellID", "unsigned long long", Edm4hepCollection.RVEC, "detector cell ID")
    writer.add_printer("EDep", "float", Edm4hepCollection.RVEC, "eDep")
    writer.add_printer("Time", "float", Edm4hepCollection.RVEC, "time of the hit")
    writer.add_printer("Type", "int", Edm4hepCollection.COLLECTION, "type")
    writer.add_printer("Quality", "int", Edm4hepCollection.COLLECTION, "type")
    writer.add_printer("CellID", "unsigned long long", Edm4hepCollection.COLLECTION, "detector cell ID")
    writer.add_printer("EDep", "float", Edm4hepCollection.COLLECTION, "eDep")
    writer.add_printer("Time", "float", Edm4hepCollection.COLLECTION, "time of the hit")

    writer.add_mask("Type", "int", Edm4hepCollection.RVEC, "type")
    writer.add_mask("Quality", "int", Edm4hepCollection.RVEC, "type")
    writer.add_mask("CellID", "unsigned long long", Edm4hepCollection.RVEC, "detector cell ID")
    writer.add_mask("EDep", "float", Edm4hepCollection.RVEC, "eDep")
    writer.add_mask("Time", "float", Edm4hepCollection.RVEC, "time of the hit")
    writer.add_mask("Type", "int", Edm4hepCollection.COLLECTION, "type")
    writer.add_mask("Quality", "int", Edm4hepCollection.COLLECTION, "type")
    writer.add_mask("CellID", "unsigned long long", Edm4hepCollection.COLLECTION, "detector cell ID")
    writer.add_mask("EDep", "float", Edm4hepCollection.COLLECTION, "eDep")
    writer.add_mask("Time", "float", Edm4hepCollection.COLLECTION, "time of the hit")

    writer.add_selector("Type", "int", Edm4hepCollection.RVEC, "type")
    writer.add_selector("Quality", "int", Edm4hepCollection.RVEC, "type")
    writer.add_selector("CellID", "unsigned long long", Edm4hepCollection.RVEC, "detector cell ID")
    writer.add_selector("EDep", "float", Edm4hepCollection.RVEC, "eDep")
    writer.add_selector("Time", "float", Edm4hepCollection.RVEC, "time of the hit")
    writer.add_selector("Type", "int", Edm4hepCollection.COLLECTION, "type")
    writer.add_selector("Quality", "int", Edm4hepCollection.COLLECTION, "type")
    writer.add_selector("CellID", "unsigned long long", Edm4hepCollection.COLLECTION, "detector cell ID")
    writer.add_selector("EDep", "float", Edm4hepCollection.COLLECTION, "eDep")
    writer.add_selector("Time", "float", Edm4hepCollection.COLLECTION, "time of the hit")

    writer.add_sorter("Type", "int", Edm4hepCollection.RVEC, "type",
                      obj_member("x", "type", "a") +
                      obj_member("y", "type", "b"))
    writer.add_sorter("Quality", "int", Edm4hepCollection.RVEC, "quality",
                      obj_member("x", "quality", "a") +
                      obj_member("y", "quality", "b"))
    writer.add_sorter("CellID", "unsigned long long", Edm4hepCollection.RVEC, "detector cell ID",
                      obj_member("x", "cellID", "a") +
                      obj_member("y", "cellID", "b"))
    writer.add_sorter("EDep", "float", Edm4hepCollection.RVEC, "eDep",
                      obj_member("x", "eDep", "a") +
                      obj_member("y", "eDep", "b"))
    writer.add_sorter("Time", "float", Edm4hepCollection.RVEC, "time of the hit",
                      obj_member("x", "time", "a") +
                      obj_member("y", "time", "b"))
    writer.add_sorter("Type", "int", Edm4hepCollection.COLLECTION, "type",
                      obj_member("x", "getType()", "a") +
                      obj_member("y", "getType()", "b"))
    writer.add_sorter("Quality", "int", Edm4hepCollection.COLLECTION, "quality",
                      obj_member("x", "getQuality()", "a") +
                      obj_member("y", "getQuality()", "b"))
    writer.add_sorter("CellID", "unsigned long long", Edm4hepCollection.COLLECTION, "detector cell ID",
                      obj_member("x", "getCellID()", "a") +
                      obj_member("y", "getCellID()", "b"))
    writer.add_sorter("EDep", "float", Edm4hepCollection.COLLECTION, "eDep",
                      obj_member("x", "getEDep()", "a") +
                      obj_member("y", "getEDep()", "b"))
    writer.add_sorter("Time", "float", Edm4hepCollection.COLLECTION, "time of the hit",
                      obj_member("x", "getTime()", "a") +
                      obj_member("y", "getTime()", "b"))

    writer.write("TrackerHit3D.h", "TrackerHit3D.cc")

if __name__ == "__main__":
    write_trackerhit3d_code("include/ral", "src")
