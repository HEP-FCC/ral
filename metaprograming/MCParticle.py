from metaprograming.RalWriter import RalClassWriter
from metaprograming.RalEnums import Edm4hepCollection
from metaprograming.CodeSnipets import momentum_property_from_DataClass, momentum_property_from_edm4hepClass, vertex_property_from_DataClass, vertex_property_from_edm4hepClass, obj_member

def write_mcparticle_code(header_dir: str, src_dir: str):

    writer = RalClassWriter(header_dir, src_dir)
    writer.add_edm_class("MCParticle")

    writer.add_include("cmath")
    writer.add_include("iostream")
    writer.add_include("Math/Vector3D.h")
    writer.add_include("Math/Vector4D.h")
    writer.add_include("edm4hep/MCParticleCollection.h")
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
    writer.add_getter("PEnd", "float", Edm4hepCollection.RVEC, "momentum",
                      momentum_property_from_DataClass("item", "momentumAtEndpoint",  "P", "result"))
    writer.add_getter("PtEnd", "float", Edm4hepCollection.RVEC, "transverse momentum",
                      momentum_property_from_DataClass("item", "momentumAtEndpoint",  "pt", "result"))
    writer.add_getter("PxEnd", "float", Edm4hepCollection.RVEC, "x momentum",
                      momentum_property_from_DataClass("item", "momentumAtEndpoint",  "px", "result"))
    writer.add_getter("PyEnd", "float", Edm4hepCollection.RVEC, "y momentum",
                      momentum_property_from_DataClass("item", "momentumAtEndpoint",  "py", "result"))
    writer.add_getter("PzEnd", "float", Edm4hepCollection.RVEC, "z momentum",
                      momentum_property_from_DataClass("item", "momentumAtEndpoint",  "pz", "result"))
    writer.add_getter("EtaEnd", "float", Edm4hepCollection.RVEC, "pseudorapidity",
                      momentum_property_from_DataClass("item", "momentumAtEndpoint",  "eta", "result"))
    writer.add_getter("RapidityEnd", "float", Edm4hepCollection.RVEC, "rapidity",
                      momentum_property_from_DataClass("item", "momentumAtEndpoint",  "Rapidity", "result"))
    writer.add_getter("ThetaEnd", "float", Edm4hepCollection.RVEC, "polar angle",
                      momentum_property_from_DataClass("item", "momentumAtEndpoint",  "theta", "result"))
    writer.add_getter("PhiEnd", "float", Edm4hepCollection.RVEC, "azimutal angle",
                      momentum_property_from_DataClass("item", "momentumAtEndpoint",  "phi", "result"))
    writer.add_getter("R", "float", Edm4hepCollection.RVEC, "distance to origin",
                      vertex_property_from_DataClass("item", "vertex",  "r", "result"))
    writer.add_getter("X", "float", Edm4hepCollection.RVEC, "x coordinate",
                      vertex_property_from_DataClass("item", "vertex",  "x", "result"))
    writer.add_getter("Y", "float", Edm4hepCollection.RVEC, "y coordinate",
                      vertex_property_from_DataClass("item", "vertex",  "y", "result"))
    writer.add_getter("Z", "float", Edm4hepCollection.RVEC, "z coordinate",
                      vertex_property_from_DataClass("item", "vertex",  "z", "result"))
    writer.add_getter("REnd", "float", Edm4hepCollection.RVEC, "distance to origin",
                      vertex_property_from_DataClass("item", "endpoint",  "r", "result"))
    writer.add_getter("XEnd", "float", Edm4hepCollection.RVEC, "x coordinate",
                      vertex_property_from_DataClass("item", "endpoint",  "x", "result"))
    writer.add_getter("YEnd", "float", Edm4hepCollection.RVEC, "y coordinate",
                      vertex_property_from_DataClass("item", "endpoint",  "y", "result"))
    writer.add_getter("ZEnd", "float", Edm4hepCollection.RVEC, "z coordinate",
                      vertex_property_from_DataClass("item", "endpoint",  "z", "result"))
    writer.add_getter("E", "float", Edm4hepCollection.RVEC, "energy",
                      momentum_property_from_DataClass("item", "momentum",  "e", "result"))
    writer.add_getter("EEnd", "float", Edm4hepCollection.RVEC, "energy",
                      momentum_property_from_DataClass("item", "momentumAtEndpoint",  "e", "result"))
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
    writer.add_getter("SimStat", "int", Edm4hepCollection.RVEC, "simulator status",
                      obj_member("item", "simulatorStatus", "result"))
    writer.add_getter("GenStat", "int", Edm4hepCollection.RVEC, "generator status",
                      obj_member("item", "generatorStatus", "result"))
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
    writer.add_getter("PEnd", "float", Edm4hepCollection.COLLECTION, "momentum",
                      momentum_property_from_edm4hepClass("item", "getMomentumAtEndpoint", "getMass",  "P", "result"))
    writer.add_getter("PtEnd", "float", Edm4hepCollection.COLLECTION, "transverse momentum",
                      momentum_property_from_edm4hepClass("item", "getMomentumAtEndpoint", "getMass",  "pt", "result"))
    writer.add_getter("PxEnd", "float", Edm4hepCollection.COLLECTION, "x momentum",
                      momentum_property_from_edm4hepClass("item", "getMomentumAtEndpoint", "getMass",  "px", "result"))
    writer.add_getter("PyEnd", "float", Edm4hepCollection.COLLECTION, "y momentum",
                      momentum_property_from_edm4hepClass("item", "getMomentumAtEndpoint", "getMass",  "py", "result"))
    writer.add_getter("PzEnd", "float", Edm4hepCollection.COLLECTION, "z momentum",
                      momentum_property_from_edm4hepClass("item", "getMomentumAtEndpoint", "getMass",  "pz", "result"))
    writer.add_getter("EtaEnd", "float", Edm4hepCollection.COLLECTION, "pseudorapidity",
                      momentum_property_from_edm4hepClass("item", "getMomentumAtEndpoint", "getMass",  "eta", "result"))
    writer.add_getter("RapidityEnd", "float", Edm4hepCollection.COLLECTION, "rapidity",
                      momentum_property_from_edm4hepClass("item", "getMomentumAtEndpoint", "getMass",  "Rapidity", "result"))
    writer.add_getter("ThetaEnd", "float", Edm4hepCollection.COLLECTION, "polar angle",
                      momentum_property_from_edm4hepClass("item", "getMomentumAtEndpoint", "getMass",  "theta", "result"))
    writer.add_getter("PhiEnd", "float", Edm4hepCollection.COLLECTION, "azimutal angle",
                      momentum_property_from_edm4hepClass("item", "getMomentumAtEndpoint", "getMass",  "phi", "result"))
    writer.add_getter("R", "float", Edm4hepCollection.COLLECTION, "distance to origin",
                      vertex_property_from_edm4hepClass("item", "getVertex",  "r", "result"))
    writer.add_getter("X", "float", Edm4hepCollection.COLLECTION, "x coordinate",
                      vertex_property_from_edm4hepClass("item", "getVertex",  "x", "result"))
    writer.add_getter("Y", "float", Edm4hepCollection.COLLECTION, "y coordinate",
                      vertex_property_from_edm4hepClass("item", "getVertex",  "y", "result"))
    writer.add_getter("Z", "float", Edm4hepCollection.COLLECTION, "z coordinate",
                      vertex_property_from_edm4hepClass("item", "getVertex",  "z", "result"))
    writer.add_getter("REnd", "float", Edm4hepCollection.COLLECTION, "distance to origin",
                      vertex_property_from_edm4hepClass("item", "getEndpoint",  "r", "result"))
    writer.add_getter("XEnd", "float", Edm4hepCollection.COLLECTION, "x coordinate",
                      vertex_property_from_edm4hepClass("item", "getEndpoint",  "x", "result"))
    writer.add_getter("YEnd", "float", Edm4hepCollection.COLLECTION, "y coordinate",
                      vertex_property_from_edm4hepClass("item", "getEndpoint",  "y", "result"))
    writer.add_getter("ZEnd", "float", Edm4hepCollection.COLLECTION, "z coordinate",
                      vertex_property_from_edm4hepClass("item", "getEndpoint",  "z", "result"))
    writer.add_getter("E", "float", Edm4hepCollection.COLLECTION, "energy",
                      momentum_property_from_edm4hepClass("item", "getMomentum", "getMass",  "e", "result"))
    writer.add_getter("EEnd", "float", Edm4hepCollection.COLLECTION, "energy",
                      momentum_property_from_edm4hepClass("item", "getMomentumAtEndpoint", "getMass",  "e", "result"))
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
    writer.add_getter("SimStat", "int", Edm4hepCollection.COLLECTION, "simulator status",
                      obj_member("item", "getSimulatorStatus()", "result"))
    writer.add_getter("GenStat", "int", Edm4hepCollection.COLLECTION, "generator status",
                      obj_member("item", "getGeneratorStatus()", "result"))


    writer.add_printer("P", "float", Edm4hepCollection.RVEC, "momentum")
    writer.add_printer("Pt", "float", Edm4hepCollection.RVEC, "transverse momentum")
    writer.add_printer("Px", "float", Edm4hepCollection.RVEC, "x momentum")
    writer.add_printer("Py", "float", Edm4hepCollection.RVEC, "y momentum")
    writer.add_printer("Pz", "float", Edm4hepCollection.RVEC, "z momentum")
    writer.add_printer("Eta", "float", Edm4hepCollection.RVEC, "pseudorapidity")
    writer.add_printer("Rapidity", "float", Edm4hepCollection.RVEC, "rapidity")
    writer.add_printer("Theta", "float", Edm4hepCollection.RVEC, "polar angle")
    writer.add_printer("Phi", "float", Edm4hepCollection.RVEC, "azimutal angle")
    writer.add_printer("PEnd", "float", Edm4hepCollection.RVEC, "momentum")
    writer.add_printer("PtEnd", "float", Edm4hepCollection.RVEC, "transverse momentum")
    writer.add_printer("PxEnd", "float", Edm4hepCollection.RVEC, "x momentum")
    writer.add_printer("PyEnd", "float", Edm4hepCollection.RVEC, "y momentum")
    writer.add_printer("PzEnd", "float", Edm4hepCollection.RVEC, "z momentum")
    writer.add_printer("EtaEnd", "float", Edm4hepCollection.RVEC, "pseudorapidity")
    writer.add_printer("RapidityEnd", "float", Edm4hepCollection.RVEC, "rapidity")
    writer.add_printer("ThetaEnd", "float", Edm4hepCollection.RVEC, "polar angle")
    writer.add_printer("PhiEnd", "float", Edm4hepCollection.RVEC, "azimutal angle")
    writer.add_printer("R", "float", Edm4hepCollection.RVEC, "distance to origin")
    writer.add_printer("X", "float", Edm4hepCollection.RVEC, "x coordinate")
    writer.add_printer("Y", "float", Edm4hepCollection.RVEC, "y coordinate")
    writer.add_printer("Z", "float", Edm4hepCollection.RVEC, "z coordinate")
    writer.add_printer("REnd", "float", Edm4hepCollection.RVEC, "distance to origin")
    writer.add_printer("XEnd", "float", Edm4hepCollection.RVEC, "x coordinate")
    writer.add_printer("YEnd", "float", Edm4hepCollection.RVEC, "y coordinate")
    writer.add_printer("ZEnd", "float", Edm4hepCollection.RVEC, "z coordinate")
    writer.add_printer("E", "float", Edm4hepCollection.RVEC, "energy")
    writer.add_printer("EEnd", "float", Edm4hepCollection.RVEC, "energy")
    writer.add_printer("M", "float", Edm4hepCollection.RVEC, "mass")
    writer.add_printer("Q", "float", Edm4hepCollection.RVEC, "charge")
    writer.add_printer("Absq", "float", Edm4hepCollection.RVEC, "absolute charge")
    writer.add_printer("Pdg", "int", Edm4hepCollection.RVEC, "pdg")
    writer.add_printer("Abspdg", "int", Edm4hepCollection.RVEC, "absolute pdg")
    writer.add_printer("SimStat", "int", Edm4hepCollection.RVEC, "simulator status")
    writer.add_printer("GenStat", "int", Edm4hepCollection.RVEC, "generator status")
    writer.add_printer("P", "float", Edm4hepCollection.COLLECTION, "momentum")
    writer.add_printer("Pt", "float", Edm4hepCollection.COLLECTION, "transverse momentum")
    writer.add_printer("Px", "float", Edm4hepCollection.COLLECTION, "x momentum")
    writer.add_printer("Py", "float", Edm4hepCollection.COLLECTION, "y momentum")
    writer.add_printer("Pz", "float", Edm4hepCollection.COLLECTION, "z momentum")
    writer.add_printer("Eta", "float", Edm4hepCollection.COLLECTION, "pseudorapidity")
    writer.add_printer("Rapidity", "float", Edm4hepCollection.COLLECTION, "rapidity")
    writer.add_printer("Theta", "float", Edm4hepCollection.COLLECTION, "polar angle")
    writer.add_printer("Phi", "float", Edm4hepCollection.COLLECTION, "azimutal angle")
    writer.add_printer("PEnd", "float", Edm4hepCollection.COLLECTION, "momentum")
    writer.add_printer("PtEnd", "float", Edm4hepCollection.COLLECTION, "transverse momentum")
    writer.add_printer("PxEnd", "float", Edm4hepCollection.COLLECTION, "x momentum")
    writer.add_printer("PyEnd", "float", Edm4hepCollection.COLLECTION, "y momentum")
    writer.add_printer("PzEnd", "float", Edm4hepCollection.COLLECTION, "z momentum")
    writer.add_printer("EtaEnd", "float", Edm4hepCollection.COLLECTION, "pseudorapidity")
    writer.add_printer("RapidityEnd", "float", Edm4hepCollection.COLLECTION, "rapidity")
    writer.add_printer("ThetaEnd", "float", Edm4hepCollection.COLLECTION, "polar angle")
    writer.add_printer("PhiEnd", "float", Edm4hepCollection.COLLECTION, "azimutal angle")
    writer.add_printer("R", "float", Edm4hepCollection.COLLECTION, "distance to origin")
    writer.add_printer("X", "float", Edm4hepCollection.COLLECTION, "x coordinate")
    writer.add_printer("Y", "float", Edm4hepCollection.COLLECTION, "y coordinate")
    writer.add_printer("Z", "float", Edm4hepCollection.COLLECTION, "z coordinate")
    writer.add_printer("REnd", "float", Edm4hepCollection.COLLECTION, "distance to origin")
    writer.add_printer("XEnd", "float", Edm4hepCollection.COLLECTION, "x coordinate")
    writer.add_printer("YEnd", "float", Edm4hepCollection.COLLECTION, "y coordinate")
    writer.add_printer("ZEnd", "float", Edm4hepCollection.COLLECTION, "z coordinate")
    writer.add_printer("E", "float", Edm4hepCollection.COLLECTION, "energy")
    writer.add_printer("EEnd", "float", Edm4hepCollection.COLLECTION, "energy")
    writer.add_printer("M", "float", Edm4hepCollection.COLLECTION, "mass")
    writer.add_printer("Q", "float", Edm4hepCollection.COLLECTION, "charge")
    writer.add_printer("Absq", "float", Edm4hepCollection.COLLECTION, "absolute charge")
    writer.add_printer("Pdg", "int", Edm4hepCollection.COLLECTION, "pdg")
    writer.add_printer("Abspdg", "int", Edm4hepCollection.COLLECTION, "absolute pdg")
    writer.add_printer("SimStat", "int", Edm4hepCollection.COLLECTION, "simulator status")
    writer.add_printer("GenStat", "int", Edm4hepCollection.COLLECTION, "generator status")

    writer.add_mask("P", "float", Edm4hepCollection.RVEC, "momentum")
    writer.add_mask("Pt", "float", Edm4hepCollection.RVEC, "transverse momentum")
    writer.add_mask("Px", "float", Edm4hepCollection.RVEC, "x momentum")
    writer.add_mask("Py", "float", Edm4hepCollection.RVEC, "y momentum")
    writer.add_mask("Pz", "float", Edm4hepCollection.RVEC, "z momentum")
    writer.add_mask("Eta", "float", Edm4hepCollection.RVEC, "pseudorapidity")
    writer.add_mask("Rapidity", "float", Edm4hepCollection.RVEC, "rapidity")
    writer.add_mask("Theta", "float", Edm4hepCollection.RVEC, "polar angle")
    writer.add_mask("Phi", "float", Edm4hepCollection.RVEC, "azimutal angle")
    writer.add_mask("PEnd", "float", Edm4hepCollection.RVEC, "momentum")
    writer.add_mask("PtEnd", "float", Edm4hepCollection.RVEC, "transverse momentum")
    writer.add_mask("PxEnd", "float", Edm4hepCollection.RVEC, "x momentum")
    writer.add_mask("PyEnd", "float", Edm4hepCollection.RVEC, "y momentum")
    writer.add_mask("PzEnd", "float", Edm4hepCollection.RVEC, "z momentum")
    writer.add_mask("EtaEnd", "float", Edm4hepCollection.RVEC, "pseudorapidity")
    writer.add_mask("RapidityEnd", "float", Edm4hepCollection.RVEC, "rapidity")
    writer.add_mask("ThetaEnd", "float", Edm4hepCollection.RVEC, "polar angle")
    writer.add_mask("PhiEnd", "float", Edm4hepCollection.RVEC, "azimutal angle")
    writer.add_mask("R", "float", Edm4hepCollection.RVEC, "distance to origin")
    writer.add_mask("X", "float", Edm4hepCollection.RVEC, "x coordinate")
    writer.add_mask("Y", "float", Edm4hepCollection.RVEC, "y coordinate")
    writer.add_mask("Z", "float", Edm4hepCollection.RVEC, "z coordinate")
    writer.add_mask("REnd", "float", Edm4hepCollection.RVEC, "distance to origin")
    writer.add_mask("XEnd", "float", Edm4hepCollection.RVEC, "x coordinate")
    writer.add_mask("YEnd", "float", Edm4hepCollection.RVEC, "y coordinate")
    writer.add_mask("ZEnd", "float", Edm4hepCollection.RVEC, "z coordinate")
    writer.add_mask("E", "float", Edm4hepCollection.RVEC, "energy")
    writer.add_mask("EEnd", "float", Edm4hepCollection.RVEC, "energy")
    writer.add_mask("M", "float", Edm4hepCollection.RVEC, "mass")
    writer.add_mask("Q", "float", Edm4hepCollection.RVEC, "charge")
    writer.add_mask("Absq", "float", Edm4hepCollection.RVEC, "absolute charge")
    writer.add_mask("Pdg", "int", Edm4hepCollection.RVEC, "pdg")
    writer.add_mask("Abspdg", "int", Edm4hepCollection.RVEC, "absolute pdg")
    writer.add_mask("SimStat", "int", Edm4hepCollection.RVEC, "simulator status")
    writer.add_mask("GenStat", "int", Edm4hepCollection.RVEC, "generator status")
    writer.add_mask("P", "float", Edm4hepCollection.COLLECTION, "momentum")
    writer.add_mask("Pt", "float", Edm4hepCollection.COLLECTION, "transverse momentum")
    writer.add_mask("Px", "float", Edm4hepCollection.COLLECTION, "x momentum")
    writer.add_mask("Py", "float", Edm4hepCollection.COLLECTION, "y momentum")
    writer.add_mask("Pz", "float", Edm4hepCollection.COLLECTION, "z momentum")
    writer.add_mask("Eta", "float", Edm4hepCollection.COLLECTION, "pseudorapidity")
    writer.add_mask("Rapidity", "float", Edm4hepCollection.COLLECTION, "rapidity")
    writer.add_mask("Theta", "float", Edm4hepCollection.COLLECTION, "polar angle")
    writer.add_mask("Phi", "float", Edm4hepCollection.COLLECTION, "azimutal angle")
    writer.add_mask("PEnd", "float", Edm4hepCollection.COLLECTION, "momentum")
    writer.add_mask("PtEnd", "float", Edm4hepCollection.COLLECTION, "transverse momentum")
    writer.add_mask("PxEnd", "float", Edm4hepCollection.COLLECTION, "x momentum")
    writer.add_mask("PyEnd", "float", Edm4hepCollection.COLLECTION, "y momentum")
    writer.add_mask("PzEnd", "float", Edm4hepCollection.COLLECTION, "z momentum")
    writer.add_mask("EtaEnd", "float", Edm4hepCollection.COLLECTION, "pseudorapidity")
    writer.add_mask("RapidityEnd", "float", Edm4hepCollection.COLLECTION, "rapidity")
    writer.add_mask("ThetaEnd", "float", Edm4hepCollection.COLLECTION, "polar angle")
    writer.add_mask("PhiEnd", "float", Edm4hepCollection.COLLECTION, "azimutal angle")
    writer.add_mask("R", "float", Edm4hepCollection.COLLECTION, "distance to origin")
    writer.add_mask("X", "float", Edm4hepCollection.COLLECTION, "x coordinate")
    writer.add_mask("Y", "float", Edm4hepCollection.COLLECTION, "y coordinate")
    writer.add_mask("Z", "float", Edm4hepCollection.COLLECTION, "z coordinate")
    writer.add_mask("REnd", "float", Edm4hepCollection.COLLECTION, "distance to origin")
    writer.add_mask("XEnd", "float", Edm4hepCollection.COLLECTION, "x coordinate")
    writer.add_mask("YEnd", "float", Edm4hepCollection.COLLECTION, "y coordinate")
    writer.add_mask("ZEnd", "float", Edm4hepCollection.COLLECTION, "z coordinate")
    writer.add_mask("E", "float", Edm4hepCollection.COLLECTION, "energy")
    writer.add_mask("EEnd", "float", Edm4hepCollection.COLLECTION, "energy")
    writer.add_mask("M", "float", Edm4hepCollection.COLLECTION, "mass")
    writer.add_mask("Q", "float", Edm4hepCollection.COLLECTION, "charge")
    writer.add_mask("Absq", "float", Edm4hepCollection.COLLECTION, "absolute charge")
    writer.add_mask("Pdg", "int", Edm4hepCollection.COLLECTION, "pdg")
    writer.add_mask("Abspdg", "int", Edm4hepCollection.COLLECTION, "absolute pdg")
    writer.add_mask("SimStat", "int", Edm4hepCollection.COLLECTION, "simulator status")
    writer.add_mask("GenStat", "int", Edm4hepCollection.COLLECTION, "generator status")

    writer.add_selector("P", "float", Edm4hepCollection.RVEC, "momentum")
    writer.add_selector("Pt", "float", Edm4hepCollection.RVEC, "transverse momentum")
    writer.add_selector("Px", "float", Edm4hepCollection.RVEC, "x momentum")
    writer.add_selector("Py", "float", Edm4hepCollection.RVEC, "y momentum")
    writer.add_selector("Pz", "float", Edm4hepCollection.RVEC, "z momentum")
    writer.add_selector("Eta", "float", Edm4hepCollection.RVEC, "pseudorapidity")
    writer.add_selector("Rapidity", "float", Edm4hepCollection.RVEC, "rapidity")
    writer.add_selector("Theta", "float", Edm4hepCollection.RVEC, "polar angle")
    writer.add_selector("Phi", "float", Edm4hepCollection.RVEC, "azimutal angle")
    writer.add_selector("PEnd", "float", Edm4hepCollection.RVEC, "momentum")
    writer.add_selector("PtEnd", "float", Edm4hepCollection.RVEC, "transverse momentum")
    writer.add_selector("PxEnd", "float", Edm4hepCollection.RVEC, "x momentum")
    writer.add_selector("PyEnd", "float", Edm4hepCollection.RVEC, "y momentum")
    writer.add_selector("PzEnd", "float", Edm4hepCollection.RVEC, "z momentum")
    writer.add_selector("EtaEnd", "float", Edm4hepCollection.RVEC, "pseudorapidity")
    writer.add_selector("RapidityEnd", "float", Edm4hepCollection.RVEC, "rapidity")
    writer.add_selector("ThetaEnd", "float", Edm4hepCollection.RVEC, "polar angle")
    writer.add_selector("PhiEnd", "float", Edm4hepCollection.RVEC, "azimutal angle")
    writer.add_selector("R", "float", Edm4hepCollection.RVEC, "distance to origin")
    writer.add_selector("X", "float", Edm4hepCollection.RVEC, "x coordinate")
    writer.add_selector("Y", "float", Edm4hepCollection.RVEC, "y coordinate")
    writer.add_selector("Z", "float", Edm4hepCollection.RVEC, "z coordinate")
    writer.add_selector("REnd", "float", Edm4hepCollection.RVEC, "distance to origin")
    writer.add_selector("XEnd", "float", Edm4hepCollection.RVEC, "x coordinate")
    writer.add_selector("YEnd", "float", Edm4hepCollection.RVEC, "y coordinate")
    writer.add_selector("ZEnd", "float", Edm4hepCollection.RVEC, "z coordinate")
    writer.add_selector("E", "float", Edm4hepCollection.RVEC, "energy")
    writer.add_selector("EEnd", "float", Edm4hepCollection.RVEC, "energy")
    writer.add_selector("M", "float", Edm4hepCollection.RVEC, "mass")
    writer.add_selector("Q", "float", Edm4hepCollection.RVEC, "charge")
    writer.add_selector("Absq", "float", Edm4hepCollection.RVEC, "absolute charge")
    writer.add_selector("Pdg", "int", Edm4hepCollection.RVEC, "pdg")
    writer.add_selector("Abspdg", "int", Edm4hepCollection.RVEC, "absolute pdg")
    writer.add_selector("SimStat", "int", Edm4hepCollection.RVEC, "simulator status")
    writer.add_selector("GenStat", "int", Edm4hepCollection.RVEC, "generator status")
    writer.add_selector("P", "float", Edm4hepCollection.COLLECTION, "momentum")
    writer.add_selector("Pt", "float", Edm4hepCollection.COLLECTION, "transverse momentum")
    writer.add_selector("Px", "float", Edm4hepCollection.COLLECTION, "x momentum")
    writer.add_selector("Py", "float", Edm4hepCollection.COLLECTION, "y momentum")
    writer.add_selector("Pz", "float", Edm4hepCollection.COLLECTION, "z momentum")
    writer.add_selector("Eta", "float", Edm4hepCollection.COLLECTION, "pseudorapidity")
    writer.add_selector("Rapidity", "float", Edm4hepCollection.COLLECTION, "rapidity")
    writer.add_selector("Theta", "float", Edm4hepCollection.COLLECTION, "polar angle")
    writer.add_selector("Phi", "float", Edm4hepCollection.COLLECTION, "azimutal angle")
    writer.add_selector("PEnd", "float", Edm4hepCollection.COLLECTION, "momentum")
    writer.add_selector("PtEnd", "float", Edm4hepCollection.COLLECTION, "transverse momentum")
    writer.add_selector("PxEnd", "float", Edm4hepCollection.COLLECTION, "x momentum")
    writer.add_selector("PyEnd", "float", Edm4hepCollection.COLLECTION, "y momentum")
    writer.add_selector("PzEnd", "float", Edm4hepCollection.COLLECTION, "z momentum")
    writer.add_selector("EtaEnd", "float", Edm4hepCollection.COLLECTION, "pseudorapidity")
    writer.add_selector("RapidityEnd", "float", Edm4hepCollection.COLLECTION, "rapidity")
    writer.add_selector("ThetaEnd", "float", Edm4hepCollection.COLLECTION, "polar angle")
    writer.add_selector("PhiEnd", "float", Edm4hepCollection.COLLECTION, "azimutal angle")
    writer.add_selector("R", "float", Edm4hepCollection.COLLECTION, "distance to origin")
    writer.add_selector("X", "float", Edm4hepCollection.COLLECTION, "x coordinate")
    writer.add_selector("Y", "float", Edm4hepCollection.COLLECTION, "y coordinate")
    writer.add_selector("Z", "float", Edm4hepCollection.COLLECTION, "z coordinate")
    writer.add_selector("REnd", "float", Edm4hepCollection.COLLECTION, "distance to origin")
    writer.add_selector("XEnd", "float", Edm4hepCollection.COLLECTION, "x coordinate")
    writer.add_selector("YEnd", "float", Edm4hepCollection.COLLECTION, "y coordinate")
    writer.add_selector("ZEnd", "float", Edm4hepCollection.COLLECTION, "z coordinate")
    writer.add_selector("E", "float", Edm4hepCollection.COLLECTION, "energy")
    writer.add_selector("EEnd", "float", Edm4hepCollection.COLLECTION, "energy")
    writer.add_selector("M", "float", Edm4hepCollection.COLLECTION, "mass")
    writer.add_selector("Q", "float", Edm4hepCollection.COLLECTION, "charge")
    writer.add_selector("Absq", "float", Edm4hepCollection.COLLECTION, "absolute charge")
    writer.add_selector("Pdg", "int", Edm4hepCollection.COLLECTION, "pdg")
    writer.add_selector("Abspdg", "int", Edm4hepCollection.COLLECTION, "absolute pdg")
    writer.add_selector("SimStat", "int", Edm4hepCollection.COLLECTION, "simulator status")
    writer.add_selector("GenStat", "int", Edm4hepCollection.COLLECTION, "generator status")

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
    writer.add_sorter("PEnd", "float", Edm4hepCollection.RVEC, "momentum",
                      momentum_property_from_DataClass("x", "momentumAtEndpoint",  "P", "a") +
                      momentum_property_from_DataClass("y", "momentumAtEndpoint",  "P", "b"))
    writer.add_sorter("PtEnd", "float", Edm4hepCollection.RVEC, "transverse momentum",
                      momentum_property_from_DataClass("x", "momentumAtEndpoint",  "pt", "a") +
                      momentum_property_from_DataClass("y", "momentumAtEndpoint",  "pt", "b"))
    writer.add_sorter("PxEnd", "float", Edm4hepCollection.RVEC, "x momentum",
                      momentum_property_from_DataClass("x", "momentumAtEndpoint",  "px", "a") +
                      momentum_property_from_DataClass("y", "momentumAtEndpoint",  "px", "b"))
    writer.add_sorter("PyEnd", "float", Edm4hepCollection.RVEC, "y momentum",
                      momentum_property_from_DataClass("x", "momentumAtEndpoint",  "py", "a") +
                      momentum_property_from_DataClass("y", "momentumAtEndpoint",  "py", "b"))
    writer.add_sorter("PzEnd", "float", Edm4hepCollection.RVEC, "z momentum",
                      momentum_property_from_DataClass("x", "momentumAtEndpoint",  "pz", "a") +
                      momentum_property_from_DataClass("y", "momentumAtEndpoint",  "pz", "b"))
    writer.add_sorter("EtaEnd", "float", Edm4hepCollection.RVEC, "pseudorapidity",
                      momentum_property_from_DataClass("x", "momentumAtEndpoint",  "eta", "a") +
                      momentum_property_from_DataClass("y", "momentumAtEndpoint",  "eta", "b"))
    writer.add_sorter("RapidityEnd", "float", Edm4hepCollection.RVEC, "rapidity",
                      momentum_property_from_DataClass("x", "momentumAtEndpoint",  "Rapidity", "a") +
                      momentum_property_from_DataClass("y", "momentumAtEndpoint",  "Rapidity", "b"))
    writer.add_sorter("ThetaEnd", "float", Edm4hepCollection.RVEC, "polar angle",
                      momentum_property_from_DataClass("x", "momentumAtEndpoint",  "theta", "a") +
                      momentum_property_from_DataClass("y", "momentumAtEndpoint",  "theta", "b"))
    writer.add_sorter("PhiEnd", "float", Edm4hepCollection.RVEC, "azimutal angle",
                      momentum_property_from_DataClass("x", "momentumAtEndpoint",  "phi", "a") +
                      momentum_property_from_DataClass("y", "momentumAtEndpoint",  "phi", "b"))
    writer.add_sorter("R", "float", Edm4hepCollection.RVEC, "distance to origin",
                      vertex_property_from_DataClass("x", "vertex",  "r", "a") +
                      vertex_property_from_DataClass("y", "vertex",  "r", "b"))
    writer.add_sorter("X", "float", Edm4hepCollection.RVEC, "x coordinate",
                      vertex_property_from_DataClass("x", "vertex",  "x", "a") +
                      vertex_property_from_DataClass("y", "vertex",  "x", "b"))
    writer.add_sorter("Y", "float", Edm4hepCollection.RVEC, "y coordinate",
                      vertex_property_from_DataClass("x", "vertex",  "y", "a") +
                      vertex_property_from_DataClass("y", "vertex",  "y", "b"))
    writer.add_sorter("Z", "float", Edm4hepCollection.RVEC, "z coordinate",
                      vertex_property_from_DataClass("x", "vertex",  "z", "a") +
                      vertex_property_from_DataClass("y", "vertex",  "z", "b"))
    writer.add_sorter("REnd", "float", Edm4hepCollection.RVEC, "distance to origin",
                      vertex_property_from_DataClass("x", "endpoint",  "r", "a") +
                      vertex_property_from_DataClass("y", "endpoint",  "r", "b"))
    writer.add_sorter("XEnd", "float", Edm4hepCollection.RVEC, "x coordinate",
                      vertex_property_from_DataClass("x", "endpoint",  "x", "a") +
                      vertex_property_from_DataClass("y", "endpoint",  "x", "b"))
    writer.add_sorter("YEnd", "float", Edm4hepCollection.RVEC, "y coordinate",
                      vertex_property_from_DataClass("x", "endpoint",  "y", "a") +
                      vertex_property_from_DataClass("y", "endpoint",  "y", "b"))
    writer.add_sorter("ZEnd", "float", Edm4hepCollection.RVEC, "z coordinate",
                      vertex_property_from_DataClass("x", "endpoint",  "z", "a") +
                      vertex_property_from_DataClass("y", "endpoint",  "z", "b"))
    writer.add_sorter("E", "float", Edm4hepCollection.RVEC, "energy",
                      momentum_property_from_DataClass("x", "momentum",  "e", "a") +
                      momentum_property_from_DataClass("y", "momentum",  "e", "b"))
    writer.add_sorter("EEnd", "float", Edm4hepCollection.RVEC, "energy",
                      momentum_property_from_DataClass("x", "momentumAtEndpoint",  "e", "a") +
                      momentum_property_from_DataClass("y", "momentumAtEndpoint",  "e", "b"))
    writer.add_sorter("M", "float", Edm4hepCollection.RVEC, "mass",
                      "a = x.mass;\nb = y.mass;\n")
    writer.add_sorter("Q", "float", Edm4hepCollection.RVEC, "charge",
                      "a = x.charge;\nb = y.charge;\n")
    writer.add_sorter("Absq", "float", Edm4hepCollection.RVEC, "absolute charge",
                      "a = std::abs(x.charge);\nb = std::abs(y.charge);\n")
    writer.add_sorter("Pdg", "int", Edm4hepCollection.RVEC, "pdg",
                      "a = x.PDG;\nb = y.PDG;\n")
    writer.add_sorter("Abspdg", "int", Edm4hepCollection.RVEC, "absolute pdg",
                      "a = std::abs(x.PDG);\nb = std::abs(y.PDG);\n")
    writer.add_sorter("SimStat", "int", Edm4hepCollection.RVEC, "simulator status",
                      "a = x.simulatorStatus;\nb = y.simulatorStatus;\n")
    writer.add_sorter("GenStat", "int", Edm4hepCollection.RVEC, "generator status",
                      "a = x.generatorStatus;\nb = y.generatorStatus;\n")

    writer.add_sorter("P", "float", Edm4hepCollection.COLLECTION, "momentum",
                      momentum_property_from_edm4hepClass("x", "getMomentum", "getMass",  "P", "a") +
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
    writer.add_sorter("PEnd", "float", Edm4hepCollection.COLLECTION, "momentum",
                      momentum_property_from_edm4hepClass("x", "getMomentumAtEndpoint", "getMass",  "P", "a") +
                      momentum_property_from_edm4hepClass("y", "getMomentumAtEndpoint", "getMass",  "P", "b"))
    writer.add_sorter("PtEnd", "float", Edm4hepCollection.COLLECTION, "transverse momentum",
                      momentum_property_from_edm4hepClass("x", "getMomentumAtEndpoint", "getMass",  "pt", "a") +
                      momentum_property_from_edm4hepClass("y", "getMomentumAtEndpoint", "getMass",  "pt", "b"))
    writer.add_sorter("PxEnd", "float", Edm4hepCollection.COLLECTION, "x momentum",
                      momentum_property_from_edm4hepClass("x", "getMomentumAtEndpoint", "getMass",  "px", "a") +
                      momentum_property_from_edm4hepClass("y", "getMomentumAtEndpoint", "getMass",  "px", "b"))
    writer.add_sorter("PyEnd", "float", Edm4hepCollection.COLLECTION, "y momentum",
                      momentum_property_from_edm4hepClass("x", "getMomentumAtEndpoint", "getMass",  "py", "a") +
                      momentum_property_from_edm4hepClass("y", "getMomentumAtEndpoint", "getMass",  "py", "b"))
    writer.add_sorter("PzEnd", "float", Edm4hepCollection.COLLECTION, "z momentum",
                      momentum_property_from_edm4hepClass("x", "getMomentumAtEndpoint", "getMass",  "pz", "a") +
                      momentum_property_from_edm4hepClass("y", "getMomentumAtEndpoint", "getMass",  "pz", "b"))
    writer.add_sorter("EtaEnd", "float", Edm4hepCollection.COLLECTION, "pseudorapidity",
                      momentum_property_from_edm4hepClass("x", "getMomentumAtEndpoint", "getMass",  "eta", "a") +
                      momentum_property_from_edm4hepClass("y", "getMomentumAtEndpoint", "getMass",  "eta", "b"))
    writer.add_sorter("RapidityEnd", "float", Edm4hepCollection.COLLECTION, "rapidity",
                      momentum_property_from_edm4hepClass("x", "getMomentumAtEndpoint", "getMass",  "Rapidity", "a") +
                      momentum_property_from_edm4hepClass("y", "getMomentumAtEndpoint", "getMass",  "Rapidity", "b"))
    writer.add_sorter("ThetaEnd", "float", Edm4hepCollection.COLLECTION, "polar angle",
                      momentum_property_from_edm4hepClass("x", "getMomentumAtEndpoint", "getMass",  "theta", "a") +
                      momentum_property_from_edm4hepClass("y", "getMomentumAtEndpoint", "getMass",  "theta", "b"))
    writer.add_sorter("PhiEnd", "float", Edm4hepCollection.COLLECTION, "azimutal angle",
                      momentum_property_from_edm4hepClass("x", "getMomentumAtEndpoint", "getMass",  "phi", "a") +
                      momentum_property_from_edm4hepClass("y", "getMomentumAtEndpoint", "getMass",  "phi", "b"))
    writer.add_sorter("R", "float", Edm4hepCollection.COLLECTION, "distance to origin",
                      vertex_property_from_edm4hepClass("x", "getVertex", "r", "a") +
                      vertex_property_from_edm4hepClass("y", "getVertex", "r", "b"))
    writer.add_sorter("X", "float", Edm4hepCollection.COLLECTION, "x coordinate",
                      vertex_property_from_edm4hepClass("x", "getVertex", "x", "a") +
                      vertex_property_from_edm4hepClass("y", "getVertex", "x", "b"))
    writer.add_sorter("Y", "float", Edm4hepCollection.COLLECTION, "y coordinate",
                      vertex_property_from_edm4hepClass("x", "getVertex", "y", "a") +
                      vertex_property_from_edm4hepClass("y", "getVertex", "y", "b"))
    writer.add_sorter("Z", "float", Edm4hepCollection.COLLECTION, "z coordinate",
                      vertex_property_from_edm4hepClass("x", "getVertex", "z", "a") +
                      vertex_property_from_edm4hepClass("y", "getVertex", "z", "b"))
    writer.add_sorter("REnd", "float", Edm4hepCollection.COLLECTION, "distance to origin",
                      vertex_property_from_edm4hepClass("x", "getEndpoint", "r", "a") +
                      vertex_property_from_edm4hepClass("y", "getEndpoint", "r", "b"))
    writer.add_sorter("XEnd", "float", Edm4hepCollection.COLLECTION, "x coordinate",
                      vertex_property_from_edm4hepClass("x", "getEndpoint", "x", "a") +
                      vertex_property_from_edm4hepClass("y", "getEndpoint", "x", "b"))
    writer.add_sorter("YEnd", "float", Edm4hepCollection.COLLECTION, "y coordinate",
                      vertex_property_from_edm4hepClass("x", "getEndpoint", "y", "a") +
                      vertex_property_from_edm4hepClass("y", "getEndpoint", "y", "b"))
    writer.add_sorter("ZEnd", "float", Edm4hepCollection.COLLECTION, "z coordinate",
                      vertex_property_from_edm4hepClass("x", "getEndpoint", "z", "a") +
                      vertex_property_from_edm4hepClass("y", "getEndpoint", "z", "b"))
    writer.add_sorter("E", "float", Edm4hepCollection.COLLECTION, "energy",
                      momentum_property_from_edm4hepClass("x", "getMomentum", "getMass",  "e", "a") +
                      momentum_property_from_edm4hepClass("y", "getMomentum", "getMass",  "e", "b"))
    writer.add_sorter("EEnd", "float", Edm4hepCollection.COLLECTION, "energy",
                      momentum_property_from_edm4hepClass("x", "getMomentumAtEndpoint", "getMass",  "e", "a") +
                      momentum_property_from_edm4hepClass("y", "getMomentumAtEndpoint", "getMass",  "e", "b"))
    writer.add_sorter("M", "float", Edm4hepCollection.COLLECTION, "mass",
                      "a = x.getMass();\nb = y.getMass();\n")
    writer.add_sorter("Q", "float", Edm4hepCollection.COLLECTION, "charge",
                      "a = x.getCharge();\nb = y.getCharge();\n")
    writer.add_sorter("Absq", "float", Edm4hepCollection.COLLECTION, "absolute charge",
                      "a = std::abs(x.getCharge());\nb = std::abs(y.getCharge());\n")
    writer.add_sorter("Pdg", "int", Edm4hepCollection.COLLECTION, "pdg",
                      "a = x.getPDG();\nb = y.getPDG();\n")
    writer.add_sorter("Abspdg", "int", Edm4hepCollection.COLLECTION, "absolute pdg",
                      "a = std::abs(x.getPDG());\nb = std::abs(y.getPDG());\n")
    writer.add_sorter("SimStat", "int", Edm4hepCollection.COLLECTION, "simulator status",
                      "a = x.getSimulatorStatus();\nb = y.getSimulatorStatus();\n")
    writer.add_sorter("GenStat", "int", Edm4hepCollection.COLLECTION, "generator status",
                      "a = x.getGeneratorStatus();\nb = y.getGeneratorStatus();\n")

    writer.add_collection_request("Parents", "MCParticle", Edm4hepCollection.RVEC, "parents")
    writer.add_collection_request("Parents", "MCParticle", Edm4hepCollection.COLLECTION, "parents")
    writer.add_collection_request("Daughters", "MCParticle", Edm4hepCollection.RVEC, "daughters")
    writer.add_collection_request("Daughters", "MCParticle", Edm4hepCollection.COLLECTION, "daughters")

    writer.write("MCParticle.h", "MCParticle.cc")

if __name__ == "__main__":
    write_mcparticle_code("include/ral", "src")
