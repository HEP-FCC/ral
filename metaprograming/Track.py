from metaprograming.RalWriter import RalClassWriter
from metaprograming.RalEnums import Edm4hepCollection
from metaprograming.CodeSnipets import momentum_property_from_DataClass, momentum_property_from_edm4hepClass, vertex_property_from_DataClass, vertex_property_from_edm4hepClass, obj_member

def write_track_code(header_dir: str, src_dir: str):

    writer = RalClassWriter(header_dir, src_dir)
    writer.add_edm_class("Track")

    writer.add_include("cmath")
    writer.add_include("iostream")
    writer.add_include("edm4hep/TrackCollection.h")
    writer.add_include("ral/LogicalOperators.h")

    writer.add_namespace("k4::ral")
    writer.add_namespace("Track")

    writer.add_getter("Type", "int", Edm4hepCollection.RVEC, "type",
                      obj_member("item", "type", "result"))
    writer.add_getter("Chi2", "float", Edm4hepCollection.RVEC, "chi^2",
                      obj_member("item", "chi2", "result"))
    writer.add_getter("ndf", "int", Edm4hepCollection.RVEC, "degrees of freedom",
                      obj_member("item", "ndf", "result"))
    writer.add_getter("Nholes", "int", Edm4hepCollection.RVEC, "number of holes",
                      obj_member("item", "Nholes", "result"))
    writer.add_getter("Type", "int", Edm4hepCollection.COLLECTION, "type",
                      obj_member("item", "getType()", "result"))
    writer.add_getter("Chi2", "float", Edm4hepCollection.COLLECTION, "chi^2",
                      obj_member("item", "getChi2()", "result"))
    writer.add_getter("ndf", "int", Edm4hepCollection.COLLECTION, "degrees of freedom",
                      obj_member("item", "getNdf()", "result"))
    writer.add_getter("Nholes", "int", Edm4hepCollection.COLLECTION, "number of holes",
                      obj_member("item", "getNholes()", "result"))

    writer.add_printer("Type", "int", Edm4hepCollection.RVEC, "type")
    writer.add_printer("Chi2", "float", Edm4hepCollection.RVEC, "chi^2")
    writer.add_printer("ndf", "int", Edm4hepCollection.RVEC, "degrees of freedom")
    writer.add_printer("Nholes", "int", Edm4hepCollection.RVEC, "number of holes")
    writer.add_printer("Type", "int", Edm4hepCollection.COLLECTION, "type")
    writer.add_printer("Chi2", "float", Edm4hepCollection.COLLECTION, "chi^2")
    writer.add_printer("ndf", "int", Edm4hepCollection.COLLECTION, "degrees of freedom")
    writer.add_printer("Nholes", "int", Edm4hepCollection.COLLECTION, "number of holes")

    writer.add_mask("Type", "int", Edm4hepCollection.RVEC, "type")
    writer.add_mask("Chi2", "float", Edm4hepCollection.RVEC, "chi^2")
    writer.add_mask("ndf", "int", Edm4hepCollection.RVEC, "degrees of freedom")
    writer.add_mask("Nholes", "int", Edm4hepCollection.RVEC, "number of holes")
    writer.add_mask("Type", "int", Edm4hepCollection.COLLECTION, "type")
    writer.add_mask("Chi2", "float", Edm4hepCollection.COLLECTION, "chi^2")
    writer.add_mask("ndf", "int", Edm4hepCollection.COLLECTION, "degrees of freedom")
    writer.add_mask("Nholes", "int", Edm4hepCollection.COLLECTION, "number of holes")

    writer.add_selector("Type", "int", Edm4hepCollection.RVEC, "type")
    writer.add_selector("Chi2", "float", Edm4hepCollection.RVEC, "chi^2")
    writer.add_selector("ndf", "int", Edm4hepCollection.RVEC, "degrees of freedom")
    writer.add_selector("Nholes", "int", Edm4hepCollection.RVEC, "number of holes")
    writer.add_selector("Type", "int", Edm4hepCollection.COLLECTION, "type")
    writer.add_selector("Chi2", "float", Edm4hepCollection.COLLECTION, "chi^2")
    writer.add_selector("ndf", "int", Edm4hepCollection.COLLECTION, "degrees of freedom")
    writer.add_selector("Nholes", "int", Edm4hepCollection.COLLECTION, "number of holes")

    writer.add_sorter("Type", "int", Edm4hepCollection.RVEC, "type",
                      obj_member("x", "type", "a") +
                      obj_member("y", "type", "b"))
    writer.add_sorter("Chi2", "float", Edm4hepCollection.RVEC, "chi^2",
                      obj_member("x", "chi2", "a") +
                      obj_member("y", "chi2", "b"))
    writer.add_sorter("ndf", "int", Edm4hepCollection.RVEC, "degrees of freedom",
                      obj_member("x", "ndf", "a") +
                      obj_member("y", "ndf", "b"))
    writer.add_sorter("Nholes", "int", Edm4hepCollection.RVEC, "number of holes",
                      obj_member("x", "Nholes", "a") +
                      obj_member("y", "Nholes", "b"))
    writer.add_sorter("Type", "int", Edm4hepCollection.COLLECTION, "type",
                      obj_member("x", "getType()", "a") +
                      obj_member("y", "getType()", "b"))
    writer.add_sorter("Chi2", "float", Edm4hepCollection.COLLECTION, "chi^2",
                      obj_member("x", "getChi2()", "a") +
                      obj_member("y", "getChi2()", "b"))
    writer.add_sorter("ndf", "int", Edm4hepCollection.COLLECTION, "degrees of freedom",
                      obj_member("x", "getNdf()", "a") +
                      obj_member("y", "getNdf()", "b"))
    writer.add_sorter("Nholes", "int", Edm4hepCollection.COLLECTION, "number of holes",
                      obj_member("x", "getNholes()", "a") +
                      obj_member("y", "getNholes()", "b"))

    writer.write("Track.h", "Track.cc")

if __name__ == "__main__":
    write_track_code("include/ral", "src")
