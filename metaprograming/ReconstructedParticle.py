from metaprograming.RalWriter import RalClassWriter
from metaprograming.RalEnums import Edm4hepCollection
from metaprograming.CodeSnipets import momentum_property_from_DataClass, momentum_property_from_edm4hepClass, vertex_property_from_DataClass, vertex_property_from_edm4hepClass, obj_member

def write_recoparticle_code(header_dir: str, src_dir: str):

    writer = RalClassWriter(header_dir, src_dir)
    writer.add_edm_class("ReconstructedParticle")

    writer.add_include("cmath")
    writer.add_include("iostream")
    writer.add_include("Math/Vector3D.h")
    writer.add_include("Math/Vector4D.h")
    writer.add_include("edm4hep/ReconstructedParticleCollection.h")
    writer.add_include("edm4hep/TrackCollection.h")
    writer.add_include("edm4hep/ClusterCollection.h")
    writer.add_include("ral/LogicalOperators.h")

    writer.add_namespace("k4::ral")
    writer.add_namespace("ReconstructedParticle")

    writer.add_getter("P", "float", Edm4hepCollection.RVEC, "momentum",
                      momentum_property_from_DataClass("item", "momentum",  "P", "result"))
    writer.add_getter("Pt", "float", Edm4hepCollection.RVEC, "transverse momentum",
                      momentum_property_from_DataClass("item", "momentum",  "pt", "result"))
    writer.add_getter("Px", "float", Edm4hepCollection.RVEC, "x momentum",
                      momentum_property_from_DataClass("item", "momentum",  "px", "result"))
    writer.add_getter("Py", "float", Edm4hepCollection.RVEC, "y momentum",
                      momentum_property_from_DataClass("item", "momentum",  "py", "result"))
    writer.add_getter("Pz", "float", Edm4hepCollection.RVEC, "z momentum",
                      momentum_property_from_DataClass("item", "momentum",  "pz", "result"))
    writer.add_getter("Eta", "float", Edm4hepCollection.RVEC, "pseudorapidity",
                      momentum_property_from_DataClass("item", "momentum",  "eta", "result"))
    writer.add_getter("Rapidity", "float", Edm4hepCollection.RVEC, "rapidity",
                      momentum_property_from_DataClass("item", "momentum",  "Rapidity", "result"))
    writer.add_getter("Theta", "float", Edm4hepCollection.RVEC, "polar angle",
                      momentum_property_from_DataClass("item", "momentum",  "theta", "result"))
    writer.add_getter("Phi", "float", Edm4hepCollection.RVEC, "azimutal angle",
                      momentum_property_from_DataClass("item", "momentum",  "phi", "result"))
    writer.add_getter("R", "float", Edm4hepCollection.RVEC, "distance to origin",
                      vertex_property_from_DataClass("item", "referencePoint",  "r", "result"))
    writer.add_getter("X", "float", Edm4hepCollection.RVEC, "x coordinate",
                      vertex_property_from_DataClass("item", "referencePoint",  "x", "result"))
    writer.add_getter("Y", "float", Edm4hepCollection.RVEC, "y coordinate",
                      vertex_property_from_DataClass("item", "referencePoint",  "y", "result"))
    writer.add_getter("Z", "float", Edm4hepCollection.RVEC, "z coordinate",
                      vertex_property_from_DataClass("item", "referencePoint",  "z", "result"))
    writer.add_getter("E", "float", Edm4hepCollection.RVEC, "energy",
                      obj_member("item", "energy", "result"))
    writer.add_getter("M", "float", Edm4hepCollection.RVEC, "mass",
                      obj_member("item", "mass", "result"))
    writer.add_getter("Q", "float", Edm4hepCollection.RVEC, "charge",
                      obj_member("item", "charge", "result"))
    writer.add_getter("Absq", "float", Edm4hepCollection.RVEC, "absolute charge",
                      obj_member("item", "charge", "result", "std::abs"))
    writer.add_getter("Pdg", "int", Edm4hepCollection.RVEC, "pdg",
                      obj_member("item", "PDG", "result"))
    writer.add_getter("Abspdg", "int", Edm4hepCollection.RVEC, "absolute pdg",
                      obj_member("item", "PDG", "result", "std::abs"))
    writer.add_getter("P", "float", Edm4hepCollection.COLLECTION, "momentum",
                      momentum_property_from_edm4hepClass("item", "getMomentum", "getMass",  "P", "result"))
    writer.add_getter("Pt", "float", Edm4hepCollection.COLLECTION, "transverse momentum",
                      momentum_property_from_edm4hepClass("item", "getMomentum", "getMass",  "pt", "result"))
    writer.add_getter("Px", "float", Edm4hepCollection.COLLECTION, "x momentum",
                      momentum_property_from_edm4hepClass("item", "getMomentum", "getMass",  "px", "result"))
    writer.add_getter("Py", "float", Edm4hepCollection.COLLECTION, "y momentum",
                      momentum_property_from_edm4hepClass("item", "getMomentum", "getMass",  "py", "result"))
    writer.add_getter("Pz", "float", Edm4hepCollection.COLLECTION, "z momentum",
                      momentum_property_from_edm4hepClass("item", "getMomentum", "getMass",  "pz", "result"))
    writer.add_getter("Eta", "float", Edm4hepCollection.COLLECTION, "pseudorapidity",
                      momentum_property_from_edm4hepClass("item", "getMomentum", "getMass",  "eta", "result"))
    writer.add_getter("Rapidity", "float", Edm4hepCollection.COLLECTION, "rapidity",
                      momentum_property_from_edm4hepClass("item", "getMomentum", "getMass",  "Rapidity", "result"))
    writer.add_getter("Theta", "float", Edm4hepCollection.COLLECTION, "polar angle",
                      momentum_property_from_edm4hepClass("item", "getMomentum", "getMass",  "theta", "result"))
    writer.add_getter("Phi", "float", Edm4hepCollection.COLLECTION, "azimutal angle",
                      momentum_property_from_edm4hepClass("item", "getMomentum", "getMass",  "phi", "result"))
    writer.add_getter("R", "float", Edm4hepCollection.COLLECTION, "distance to origin",
                      vertex_property_from_edm4hepClass("item", "getReferencePoint",  "r", "result"))
    writer.add_getter("X", "float", Edm4hepCollection.COLLECTION, "x coordinate",
                      vertex_property_from_edm4hepClass("item", "getReferencePoint",  "x", "result"))
    writer.add_getter("Y", "float", Edm4hepCollection.COLLECTION, "y coordinate",
                      vertex_property_from_edm4hepClass("item", "getReferencePoint",  "y", "result"))
    writer.add_getter("Z", "float", Edm4hepCollection.COLLECTION, "z coordinate",
                      vertex_property_from_edm4hepClass("item", "getReferencePoint",  "z", "result"))
    writer.add_getter("E", "float", Edm4hepCollection.COLLECTION, "energy",
                      momentum_property_from_edm4hepClass("item", "getMomentum", "getMass",  "e", "result"))
    writer.add_getter("M", "float", Edm4hepCollection.COLLECTION, "mass",
                      obj_member("item", "getMass()", "result"))
    writer.add_getter("Q", "float", Edm4hepCollection.COLLECTION, "charge",
                      obj_member("item", "getCharge()", "result"))
    writer.add_getter("Absq", "float", Edm4hepCollection.COLLECTION, "absolute charge",
                      obj_member("item", "getCharge()", "result", "std::abs"))
    writer.add_getter("Pdg", "int", Edm4hepCollection.COLLECTION, "pdg",
                      obj_member("item", "getPDG()", "result"))
    writer.add_getter("Abspdg", "int", Edm4hepCollection.COLLECTION, "absolute pdg",
                      obj_member("item", "getPDG()", "result", "std::abs"))

    writer.add_printer("P", "float", Edm4hepCollection.RVEC, "momentum")
    writer.add_printer("Pt", "float", Edm4hepCollection.RVEC, "transverse momentum")
    writer.add_printer("Px", "float", Edm4hepCollection.RVEC, "x momentum")
    writer.add_printer("Py", "float", Edm4hepCollection.RVEC, "y momentum")
    writer.add_printer("Pz", "float", Edm4hepCollection.RVEC, "z momentum")
    writer.add_printer("Eta", "float", Edm4hepCollection.RVEC, "pseudorapidity")
    writer.add_printer("Rapidity", "float", Edm4hepCollection.RVEC, "rapidity")
    writer.add_printer("Theta", "float", Edm4hepCollection.RVEC, "polar angle")
    writer.add_printer("Phi", "float", Edm4hepCollection.RVEC, "azimutal angle")
    writer.add_printer("R", "float", Edm4hepCollection.RVEC, "distance to origin")
    writer.add_printer("X", "float", Edm4hepCollection.RVEC, "x coordinate")
    writer.add_printer("Y", "float", Edm4hepCollection.RVEC, "y coordinate")
    writer.add_printer("Z", "float", Edm4hepCollection.RVEC, "z coordinate")
    writer.add_printer("E", "float", Edm4hepCollection.RVEC, "energy")
    writer.add_printer("M", "float", Edm4hepCollection.RVEC, "mass")
    writer.add_printer("Q", "float", Edm4hepCollection.RVEC, "charge")
    writer.add_printer("Absq", "float", Edm4hepCollection.RVEC, "absolute charge")
    writer.add_printer("Pdg", "int", Edm4hepCollection.RVEC, "pdg")
    writer.add_printer("Abspdg", "int", Edm4hepCollection.RVEC, "absolute pdg")
    writer.add_printer("P", "float", Edm4hepCollection.COLLECTION, "momentum")
    writer.add_printer("Pt", "float", Edm4hepCollection.COLLECTION, "transverse momentum")
    writer.add_printer("Px", "float", Edm4hepCollection.COLLECTION, "x momentum")
    writer.add_printer("Py", "float", Edm4hepCollection.COLLECTION, "y momentum")
    writer.add_printer("Pz", "float", Edm4hepCollection.COLLECTION, "z momentum")
    writer.add_printer("Eta", "float", Edm4hepCollection.COLLECTION, "pseudorapidity")
    writer.add_printer("Rapidity", "float", Edm4hepCollection.COLLECTION, "rapidity")
    writer.add_printer("Theta", "float", Edm4hepCollection.COLLECTION, "polar angle")
    writer.add_printer("Phi", "float", Edm4hepCollection.COLLECTION, "azimutal angle")
    writer.add_printer("R", "float", Edm4hepCollection.COLLECTION, "distance to origin")
    writer.add_printer("X", "float", Edm4hepCollection.COLLECTION, "x coordinate")
    writer.add_printer("Y", "float", Edm4hepCollection.COLLECTION, "y coordinate")
    writer.add_printer("Z", "float", Edm4hepCollection.COLLECTION, "z coordinate")
    writer.add_printer("E", "float", Edm4hepCollection.COLLECTION, "energy")
    writer.add_printer("M", "float", Edm4hepCollection.COLLECTION, "mass")
    writer.add_printer("Q", "float", Edm4hepCollection.COLLECTION, "charge")
    writer.add_printer("Absq", "float", Edm4hepCollection.COLLECTION, "absolute charge")
    writer.add_printer("Pdg", "int", Edm4hepCollection.COLLECTION, "pdg")
    writer.add_printer("Abspdg", "int", Edm4hepCollection.COLLECTION, "absolute pdg")

    writer.add_mask("P", "float", Edm4hepCollection.RVEC, "momentum")
    writer.add_mask("Pt", "float", Edm4hepCollection.RVEC, "transverse momentum")
    writer.add_mask("Px", "float", Edm4hepCollection.RVEC, "x momentum")
    writer.add_mask("Py", "float", Edm4hepCollection.RVEC, "y momentum")
    writer.add_mask("Pz", "float", Edm4hepCollection.RVEC, "z momentum")
    writer.add_mask("Eta", "float", Edm4hepCollection.RVEC, "pseudorapidity")
    writer.add_mask("Rapidity", "float", Edm4hepCollection.RVEC, "rapidity")
    writer.add_mask("Theta", "float", Edm4hepCollection.RVEC, "polar angle")
    writer.add_mask("Phi", "float", Edm4hepCollection.RVEC, "azimutal angle")
    writer.add_mask("R", "float", Edm4hepCollection.RVEC, "distance to origin")
    writer.add_mask("X", "float", Edm4hepCollection.RVEC, "x coordinate")
    writer.add_mask("Y", "float", Edm4hepCollection.RVEC, "y coordinate")
    writer.add_mask("Z", "float", Edm4hepCollection.RVEC, "z coordinate")
    writer.add_mask("E", "float", Edm4hepCollection.RVEC, "energy")
    writer.add_mask("M", "float", Edm4hepCollection.RVEC, "mass")
    writer.add_mask("Q", "float", Edm4hepCollection.RVEC, "charge")
    writer.add_mask("Absq", "float", Edm4hepCollection.RVEC, "absolute charge")
    writer.add_mask("Pdg", "int", Edm4hepCollection.RVEC, "pdg")
    writer.add_mask("Abspdg", "int", Edm4hepCollection.RVEC, "absolute pdg")
    writer.add_mask("P", "float", Edm4hepCollection.COLLECTION, "momentum")
    writer.add_mask("Pt", "float", Edm4hepCollection.COLLECTION, "transverse momentum")
    writer.add_mask("Px", "float", Edm4hepCollection.COLLECTION, "x momentum")
    writer.add_mask("Py", "float", Edm4hepCollection.COLLECTION, "y momentum")
    writer.add_mask("Pz", "float", Edm4hepCollection.COLLECTION, "z momentum")
    writer.add_mask("Eta", "float", Edm4hepCollection.COLLECTION, "pseudorapidity")
    writer.add_mask("Rapidity", "float", Edm4hepCollection.COLLECTION, "rapidity")
    writer.add_mask("Theta", "float", Edm4hepCollection.COLLECTION, "polar angle")
    writer.add_mask("Phi", "float", Edm4hepCollection.COLLECTION, "azimutal angle")
    writer.add_mask("R", "float", Edm4hepCollection.COLLECTION, "distance to origin")
    writer.add_mask("X", "float", Edm4hepCollection.COLLECTION, "x coordinate")
    writer.add_mask("Y", "float", Edm4hepCollection.COLLECTION, "y coordinate")
    writer.add_mask("Z", "float", Edm4hepCollection.COLLECTION, "z coordinate")
    writer.add_mask("E", "float", Edm4hepCollection.COLLECTION, "energy")
    writer.add_mask("M", "float", Edm4hepCollection.COLLECTION, "mass")
    writer.add_mask("Q", "float", Edm4hepCollection.COLLECTION, "charge")
    writer.add_mask("Absq", "float", Edm4hepCollection.COLLECTION, "absolute charge")
    writer.add_mask("Pdg", "int", Edm4hepCollection.COLLECTION, "pdg")
    writer.add_mask("Abspdg", "int", Edm4hepCollection.COLLECTION, "absolute pdg")

    writer.add_selector("P", "float", Edm4hepCollection.RVEC, "momentum")
    writer.add_selector("Pt", "float", Edm4hepCollection.RVEC, "transverse momentum")
    writer.add_selector("Px", "float", Edm4hepCollection.RVEC, "x momentum")
    writer.add_selector("Py", "float", Edm4hepCollection.RVEC, "y momentum")
    writer.add_selector("Pz", "float", Edm4hepCollection.RVEC, "z momentum")
    writer.add_selector("Eta", "float", Edm4hepCollection.RVEC, "pseudorapidity")
    writer.add_selector("Rapidity", "float", Edm4hepCollection.RVEC, "rapidity")
    writer.add_selector("Theta", "float", Edm4hepCollection.RVEC, "polar angle")
    writer.add_selector("Phi", "float", Edm4hepCollection.RVEC, "azimutal angle")
    writer.add_selector("R", "float", Edm4hepCollection.RVEC, "distance to origin")
    writer.add_selector("X", "float", Edm4hepCollection.RVEC, "x coordinate")
    writer.add_selector("Y", "float", Edm4hepCollection.RVEC, "y coordinate")
    writer.add_selector("Z", "float", Edm4hepCollection.RVEC, "z coordinate")
    writer.add_selector("E", "float", Edm4hepCollection.RVEC, "energy")
    writer.add_selector("M", "float", Edm4hepCollection.RVEC, "mass")
    writer.add_selector("Q", "float", Edm4hepCollection.RVEC, "charge")
    writer.add_selector("Absq", "float", Edm4hepCollection.RVEC, "absolute charge")
    writer.add_selector("Pdg", "int", Edm4hepCollection.RVEC, "pdg")
    writer.add_selector("Abspdg", "int", Edm4hepCollection.RVEC, "absolute pdg")
    writer.add_selector("P", "float", Edm4hepCollection.COLLECTION, "momentum")
    writer.add_selector("Pt", "float", Edm4hepCollection.COLLECTION, "transverse momentum")
    writer.add_selector("Px", "float", Edm4hepCollection.COLLECTION, "x momentum")
    writer.add_selector("Py", "float", Edm4hepCollection.COLLECTION, "y momentum")
    writer.add_selector("Pz", "float", Edm4hepCollection.COLLECTION, "z momentum")
    writer.add_selector("Eta", "float", Edm4hepCollection.COLLECTION, "pseudorapidity")
    writer.add_selector("Rapidity", "float", Edm4hepCollection.COLLECTION, "rapidity")
    writer.add_selector("Theta", "float", Edm4hepCollection.COLLECTION, "polar angle")
    writer.add_selector("Phi", "float", Edm4hepCollection.COLLECTION, "azimutal angle")
    writer.add_selector("R", "float", Edm4hepCollection.COLLECTION, "distance to origin")
    writer.add_selector("X", "float", Edm4hepCollection.COLLECTION, "x coordinate")
    writer.add_selector("Y", "float", Edm4hepCollection.COLLECTION, "y coordinate")
    writer.add_selector("Z", "float", Edm4hepCollection.COLLECTION, "z coordinate")
    writer.add_selector("E", "float", Edm4hepCollection.COLLECTION, "energy")
    writer.add_selector("M", "float", Edm4hepCollection.COLLECTION, "mass")
    writer.add_selector("Q", "float", Edm4hepCollection.COLLECTION, "charge")
    writer.add_selector("Absq", "float", Edm4hepCollection.COLLECTION, "absolute charge")
    writer.add_selector("Pdg", "int", Edm4hepCollection.COLLECTION, "pdg")
    writer.add_selector("Abspdg", "int", Edm4hepCollection.COLLECTION, "absolute pdg")

    writer.add_sorter("P", "float", Edm4hepCollection.RVEC, "momentum",
                      momentum_property_from_DataClass("x", "momentum",  "P", "a") +
                      momentum_property_from_DataClass("y", "momentum",  "P", "b"))
    writer.add_sorter("Pt", "float", Edm4hepCollection.RVEC, "transverse momentum",
                      momentum_property_from_DataClass("x", "momentum",  "pt", "a") +
                      momentum_property_from_DataClass("y", "momentum",  "pt", "b"))
    writer.add_sorter("Px", "float", Edm4hepCollection.RVEC, "x momentum",
                      momentum_property_from_DataClass("x", "momentum",  "px", "a") +
                      momentum_property_from_DataClass("y", "momentum",  "px", "b"))
    writer.add_sorter("Py", "float", Edm4hepCollection.RVEC, "y momentum",
                      momentum_property_from_DataClass("x", "momentum",  "py", "a") +
                      momentum_property_from_DataClass("y", "momentum",  "py", "b"))
    writer.add_sorter("Pz", "float", Edm4hepCollection.RVEC, "z momentum",
                      momentum_property_from_DataClass("x", "momentum",  "pz", "a") +
                      momentum_property_from_DataClass("y", "momentum",  "pz", "b"))
    writer.add_sorter("Eta", "float", Edm4hepCollection.RVEC, "pseudorapidity",
                      momentum_property_from_DataClass("x", "momentum",  "eta", "a") +
                      momentum_property_from_DataClass("y", "momentum",  "eta", "b"))
    writer.add_sorter("Rapidity", "float", Edm4hepCollection.RVEC, "rapidity",
                      momentum_property_from_DataClass("x", "momentum",  "Rapidity", "a") +
                      momentum_property_from_DataClass("y", "momentum",  "Rapidity", "b"))
    writer.add_sorter("Theta", "float", Edm4hepCollection.RVEC, "polar angle",
                      momentum_property_from_DataClass("x", "momentum",  "theta", "a") +
                      momentum_property_from_DataClass("y", "momentum",  "theta", "b"))
    writer.add_sorter("Phi", "float", Edm4hepCollection.RVEC, "azimutal angle",
                      momentum_property_from_DataClass("x", "momentum",  "phi", "a") +
                      momentum_property_from_DataClass("y", "momentum",  "phi", "b"))
    writer.add_sorter("R", "float", Edm4hepCollection.RVEC, "distance to origin",
                      vertex_property_from_DataClass("x", "referencePoint",  "r", "a") +
                      vertex_property_from_DataClass("y", "referencePoint",  "r", "b"))
    writer.add_sorter("X", "float", Edm4hepCollection.RVEC, "x coordinate",
                      vertex_property_from_DataClass("x", "referencePoint",  "x", "a") +
                      vertex_property_from_DataClass("y", "referencePoint",  "x", "b"))
    writer.add_sorter("Y", "float", Edm4hepCollection.RVEC, "y coordinate",
                      vertex_property_from_DataClass("x", "referencePoint",  "y", "a") +
                      vertex_property_from_DataClass("y", "referencePoint",  "y", "b"))
    writer.add_sorter("Z", "float", Edm4hepCollection.RVEC, "z coordinate",
                      vertex_property_from_DataClass("x", "referencePoint",  "z", "a") +
                      vertex_property_from_DataClass("y", "referencePoint",  "z", "b"))
    writer.add_sorter("E", "float", Edm4hepCollection.RVEC, "energy",
                      obj_member("x", "energy", "a") +
                      obj_member("y", "energy", "b"))
    writer.add_sorter("M", "float", Edm4hepCollection.RVEC, "mass",
                      obj_member("x", "mass", "a") +
                      obj_member("y", "mass", "b"))
    writer.add_sorter("Q", "float", Edm4hepCollection.RVEC, "charge",
                      obj_member("x", "charge", "a") +
                      obj_member("y", "charge", "b"))
    writer.add_sorter("Absq", "float", Edm4hepCollection.RVEC, "absolute charge",
                      obj_member("x", "charge", "a", "std::abs") +
                      obj_member("y", "charge", "b", "std::abs"))
    writer.add_sorter("Pdg", "int", Edm4hepCollection.RVEC, "pdg",
                      obj_member("x", "PDG", "a") +
                      obj_member("y", "PDG", "b"))
    writer.add_sorter("P", "float", Edm4hepCollection.COLLECTION, "momentum",
                      momentum_property_from_edm4hepClass("x", "getMomentum", "getMass", "P", "a") +
                      momentum_property_from_edm4hepClass("y", "getMomentum", "getMass",  "P", "b"))
    writer.add_sorter("Pt", "float", Edm4hepCollection.COLLECTION, "transverse momentum",
                      momentum_property_from_edm4hepClass("x", "getMomentum", "getMass",  "pt", "a") +
                      momentum_property_from_edm4hepClass("y", "getMomentum", "getMass",  "pt", "b"))
    writer.add_sorter("Px", "float", Edm4hepCollection.COLLECTION, "x momentum",
                      momentum_property_from_edm4hepClass("x", "getMomentum", "getMass",  "px", "a") +
                      momentum_property_from_edm4hepClass("y", "getMomentum", "getMass",  "px", "b"))
    writer.add_sorter("Py", "float", Edm4hepCollection.COLLECTION, "y momentum",
                      momentum_property_from_edm4hepClass("x", "getMomentum", "getMass",  "py", "a") +
                      momentum_property_from_edm4hepClass("y", "getMomentum", "getMass",  "py", "b"))
    writer.add_sorter("Pz", "float", Edm4hepCollection.COLLECTION, "z momentum",
                      momentum_property_from_edm4hepClass("x", "getMomentum", "getMass",  "pz", "a") +
                      momentum_property_from_edm4hepClass("y", "getMomentum", "getMass",  "pz", "b"))
    writer.add_sorter("Eta", "float", Edm4hepCollection.COLLECTION, "pseudorapidity",
                      momentum_property_from_edm4hepClass("x", "getMomentum", "getMass",  "eta", "a") +
                      momentum_property_from_edm4hepClass("y", "getMomentum", "getMass",  "eta", "b"))
    writer.add_sorter("Rapidity", "float", Edm4hepCollection.COLLECTION, "rapidity",
                      momentum_property_from_edm4hepClass("x", "getMomentum", "getMass",  "Rapidity", "a") +
                      momentum_property_from_edm4hepClass("y", "getMomentum", "getMass",  "Rapidity", "b"))
    writer.add_sorter("Theta", "float", Edm4hepCollection.COLLECTION, "polar angle",
                      momentum_property_from_edm4hepClass("x", "getMomentum", "getMass",  "theta", "a") +
                      momentum_property_from_edm4hepClass("y", "getMomentum", "getMass",  "theta", "b"))
    writer.add_sorter("Phi", "float", Edm4hepCollection.COLLECTION, "azimutal angle",
                      momentum_property_from_edm4hepClass("x", "getMomentum", "getMass",  "phi", "a") +
                      momentum_property_from_edm4hepClass("y", "getMomentum", "getMass",  "phi", "b"))
    writer.add_sorter("R", "float", Edm4hepCollection.COLLECTION, "distance to origin",
                      vertex_property_from_edm4hepClass("x", "getReferencePoint",  "r", "a") +
                      vertex_property_from_edm4hepClass("y", "getReferencePoint",  "r", "b"))
    writer.add_sorter("X", "float", Edm4hepCollection.COLLECTION, "x coordinate",
                      vertex_property_from_edm4hepClass("x", "getReferencePoint",  "x", "a") +
                      vertex_property_from_edm4hepClass("y", "getReferencePoint",  "x", "b"))
    writer.add_sorter("Y", "float", Edm4hepCollection.COLLECTION, "y coordinate",
                      vertex_property_from_edm4hepClass("x", "getReferencePoint",  "y", "a") +
                      vertex_property_from_edm4hepClass("y", "getReferencePoint",  "y", "b"))
    writer.add_sorter("Z", "float", Edm4hepCollection.COLLECTION, "z coordinate",
                      vertex_property_from_edm4hepClass("x", "getReferencePoint",  "z", "a") +
                      vertex_property_from_edm4hepClass("y", "getReferencePoint",  "z", "b"))
    writer.add_sorter("E", "float", Edm4hepCollection.COLLECTION, "energy",
                      obj_member("x", "getEnergy()", "a") +
                      obj_member("y", "getEnergy()", "b"))
    writer.add_sorter("M", "float", Edm4hepCollection.COLLECTION, "mass",
                      obj_member("x", "getMass()", "a") +
                      obj_member("y", "getMass()", "b"))
    writer.add_sorter("Q", "float", Edm4hepCollection.COLLECTION, "charge",
                      obj_member("x", "getCharge()", "a") +
                      obj_member("y", "getCharge()", "b"))
    writer.add_sorter("Absq", "float", Edm4hepCollection.COLLECTION, "absolute charge",
                      obj_member("x", "getCharge()", "a", "std::abs") +
                      obj_member("y", "getCharge()", "b", "std::abs"))
    writer.add_sorter("Pdg", "int", Edm4hepCollection.COLLECTION, "pdg",
                      obj_member("x", "getPDG()", "a") +
                      obj_member("y", "getPDG()", "b"))

    writer.add_collection_request("Particles", "ReconstructedParticle", Edm4hepCollection.RVEC, "particles")
    writer.add_collection_request("Tracks", "Track", Edm4hepCollection.RVEC, "tracks")
    writer.add_collection_request("Clusters", "Cluster", Edm4hepCollection.RVEC, "clusters")
    writer.add_collection_request("Particles", "ReconstructedParticle", Edm4hepCollection.COLLECTION, "particles")
    writer.add_collection_request("Tracks", "Track", Edm4hepCollection.COLLECTION, "tracks")
    writer.add_collection_request("Clusters", "Cluster", Edm4hepCollection.COLLECTION, "clusters")

    writer.write("ReconstructedParticle.h", "ReconstructedParticle.cc")

if __name__ == "__main__":
    write_recoparticle_code("include/ral", "src")
