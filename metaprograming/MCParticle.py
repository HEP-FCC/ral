from metaprograming.RalWriter import RalClassWriter
from metaprograming.RalEnums import Edm4hepCollection
from metaprograming.CodeSnipets import momentum_property, vertex_property, obj_member

def write_mcparticle_code(header_dir: str, src_dir: str):

    writer = RalClassWriter(header_dir, src_dir)
    writer.add_edm_class("MCParticle")

    writer.add_include("cmath")
    writer.add_include("Math/Vector3D.h")
    writer.add_include("Math/Vector4D.h")
    writer.add_include("edm4hep/MCParticleData.h")
    writer.add_include("ral/LogicalOperators.h")

    writer.add_namespace("k4::ral")
    writer.add_namespace("ReconstructedParticle")

    writer.add_getter("p", "float", Edm4hepCollection.RVEC, "momentum",
                      momentum_property("item", "momentum",  "P", "result"))
    writer.add_getter("pt", "float", Edm4hepCollection.RVEC, "transverse momentum",
                      momentum_property("item", "momentum",  "pt", "result"))
    writer.add_getter("px", "float", Edm4hepCollection.RVEC, "x momentum",
                      momentum_property("item", "momentum",  "px", "result"))
    writer.add_getter("py", "float", Edm4hepCollection.RVEC, "y momentum",
                      momentum_property("item", "momentum",  "py", "result"))
    writer.add_getter("pz", "float", Edm4hepCollection.RVEC, "z momentum",
                      momentum_property("item", "momentum",  "pz", "result"))
    writer.add_getter("eta", "float", Edm4hepCollection.RVEC, "pseudorapidity",
                      momentum_property("item", "momentum",  "eta", "result"))
    writer.add_getter("rapidity", "float", Edm4hepCollection.RVEC, "rapidity",
                      momentum_property("item", "momentum",  "Rapidity", "result"))
    writer.add_getter("theta", "float", Edm4hepCollection.RVEC, "polar angle",
                      momentum_property("item", "momentum",  "theta", "result"))
    writer.add_getter("phi", "float", Edm4hepCollection.RVEC, "azimutal angle",
                      momentum_property("item", "momentum",  "phi", "result"))
    writer.add_getter("p_end", "float", Edm4hepCollection.RVEC, "momentum",
                      momentum_property("item", "momentumAtEndpoint",  "P", "result"))
    writer.add_getter("pt_end", "float", Edm4hepCollection.RVEC, "transverse momentum",
                      momentum_property("item", "momentumAtEndpoint",  "pt", "result"))
    writer.add_getter("px_end", "float", Edm4hepCollection.RVEC, "x momentum",
                      momentum_property("item", "momentumAtEndpoint",  "px", "result"))
    writer.add_getter("py_end", "float", Edm4hepCollection.RVEC, "y momentum",
                      momentum_property("item", "momentumAtEndpoint",  "py", "result"))
    writer.add_getter("pz_end", "float", Edm4hepCollection.RVEC, "z momentum",
                      momentum_property("item", "momentumAtEndpoint",  "pz", "result"))
    writer.add_getter("eta_end", "float", Edm4hepCollection.RVEC, "pseudorapidity",
                      momentum_property("item", "momentumAtEndpoint",  "eta", "result"))
    writer.add_getter("rapidity_end", "float", Edm4hepCollection.RVEC, "rapidity",
                      momentum_property("item", "momentumAtEndpoint",  "Rapidity", "result"))
    writer.add_getter("theta_end", "float", Edm4hepCollection.RVEC, "polar angle",
                      momentum_property("item", "momentumAtEndpoint",  "theta", "result"))
    writer.add_getter("phi_end", "float", Edm4hepCollection.RVEC, "azimutal angle",
                      momentum_property("item", "momentumAtEndpoint",  "phi", "result"))
    writer.add_getter("r", "float", Edm4hepCollection.RVEC, "distance to origin",
                      vertex_property("item", "vertex",  "r", "result"))
    writer.add_getter("x", "float", Edm4hepCollection.RVEC, "x coordinate",
                      vertex_property("item", "vertex",  "x", "result"))
    writer.add_getter("y", "float", Edm4hepCollection.RVEC, "y coordinate",
                      vertex_property("item", "vertex",  "y", "result"))
    writer.add_getter("z", "float", Edm4hepCollection.RVEC, "z coordinate",
                      vertex_property("item", "vertex",  "z", "result"))
    writer.add_getter("r_end", "float", Edm4hepCollection.RVEC, "distance to origin",
                      vertex_property("item", "endpoint",  "r", "result"))
    writer.add_getter("x_end", "float", Edm4hepCollection.RVEC, "x coordinate",
                      vertex_property("item", "endpoint",  "x", "result"))
    writer.add_getter("y_end", "float", Edm4hepCollection.RVEC, "y coordinate",
                      vertex_property("item", "endpoint",  "y", "result"))
    writer.add_getter("z_end", "float", Edm4hepCollection.RVEC, "z coordinate",
                      vertex_property("item", "endpoint",  "z", "result"))
    writer.add_getter("e", "float", Edm4hepCollection.RVEC, "energy",
                      momentum_property("item", "momentum",  "e", "result"))
    writer.add_getter("e_end", "float", Edm4hepCollection.RVEC, "energy",
                      momentum_property("item", "momentumAtEndpoint",  "e", "result"))
    writer.add_getter("m", "float", Edm4hepCollection.RVEC, "mass",
                      obj_member("item", "mass", "result"))
    writer.add_getter("q", "float", Edm4hepCollection.RVEC, "charge",
                      obj_member("item", "charge", "result"))
    writer.add_getter("absq", "float", Edm4hepCollection.RVEC, "absolute charge",
                      obj_member("item", "charge", "result", "std::abs"))
    writer.add_getter("pdg", "int", Edm4hepCollection.RVEC, "pdg",
                      obj_member("item", "PDG", "result"))
    writer.add_getter("abspdg", "int", Edm4hepCollection.RVEC, "absolute pdg",
                      obj_member("item", "PDG", "result", "std::abs"))
    writer.add_getter("sim_stat", "int", Edm4hepCollection.RVEC, "simulator status",
                      obj_member("item", "simulatorStatus", "result"))
    writer.add_getter("gen_stat", "int", Edm4hepCollection.RVEC, "generator status",
                      obj_member("item", "generatorStatus", "result"))

    writer.add_mask("p", "float", Edm4hepCollection.RVEC, "momentum")
    writer.add_mask("pt", "float", Edm4hepCollection.RVEC, "transverse momentum")
    writer.add_mask("px", "float", Edm4hepCollection.RVEC, "x momentum")
    writer.add_mask("py", "float", Edm4hepCollection.RVEC, "y momentum")
    writer.add_mask("pz", "float", Edm4hepCollection.RVEC, "z momentum")
    writer.add_mask("eta", "float", Edm4hepCollection.RVEC, "pseudorapidity")
    writer.add_mask("rapidity", "float", Edm4hepCollection.RVEC, "rapidity")
    writer.add_mask("theta", "float", Edm4hepCollection.RVEC, "polar angle")
    writer.add_mask("phi", "float", Edm4hepCollection.RVEC, "azimutal angle")
    writer.add_mask("p_end", "float", Edm4hepCollection.RVEC, "momentum")
    writer.add_mask("pt_end", "float", Edm4hepCollection.RVEC, "transverse momentum")
    writer.add_mask("px_end", "float", Edm4hepCollection.RVEC, "x momentum")
    writer.add_mask("py_end", "float", Edm4hepCollection.RVEC, "y momentum")
    writer.add_mask("pz_end", "float", Edm4hepCollection.RVEC, "z momentum")
    writer.add_mask("eta_end", "float", Edm4hepCollection.RVEC, "pseudorapidity")
    writer.add_mask("rapidity_end", "float", Edm4hepCollection.RVEC, "rapidity")
    writer.add_mask("theta_end", "float", Edm4hepCollection.RVEC, "polar angle")
    writer.add_mask("phi_end", "float", Edm4hepCollection.RVEC, "azimutal angle")
    writer.add_mask("r", "float", Edm4hepCollection.RVEC, "distance to origin")
    writer.add_mask("x", "float", Edm4hepCollection.RVEC, "x coordinate")
    writer.add_mask("y", "float", Edm4hepCollection.RVEC, "y coordinate")
    writer.add_mask("z", "float", Edm4hepCollection.RVEC, "z coordinate")
    writer.add_mask("r_end", "float", Edm4hepCollection.RVEC, "distance to origin")
    writer.add_mask("x_end", "float", Edm4hepCollection.RVEC, "x coordinate")
    writer.add_mask("y_end", "float", Edm4hepCollection.RVEC, "y coordinate")
    writer.add_mask("z_end", "float", Edm4hepCollection.RVEC, "z coordinate")
    writer.add_mask("e", "float", Edm4hepCollection.RVEC, "energy")
    writer.add_mask("e_end", "float", Edm4hepCollection.RVEC, "energy")
    writer.add_mask("m", "float", Edm4hepCollection.RVEC, "mass")
    writer.add_mask("q", "float", Edm4hepCollection.RVEC, "charge")
    writer.add_mask("absq", "float", Edm4hepCollection.RVEC, "absolute charge")
    writer.add_mask("pdg", "int", Edm4hepCollection.RVEC, "pdg")
    writer.add_mask("abspdg", "int", Edm4hepCollection.RVEC, "absolute pdg")
    writer.add_mask("sim_stat", "int", Edm4hepCollection.RVEC, "simulator status")
    writer.add_mask("gen_stat", "int", Edm4hepCollection.RVEC, "generator status")

    writer.add_selector("p", "float", Edm4hepCollection.RVEC, "momentum")
    writer.add_selector("pt", "float", Edm4hepCollection.RVEC, "transverse momentum")
    writer.add_selector("px", "float", Edm4hepCollection.RVEC, "x momentum")
    writer.add_selector("py", "float", Edm4hepCollection.RVEC, "y momentum")
    writer.add_selector("pz", "float", Edm4hepCollection.RVEC, "z momentum")
    writer.add_selector("eta", "float", Edm4hepCollection.RVEC, "pseudorapidity")
    writer.add_selector("rapidity", "float", Edm4hepCollection.RVEC, "rapidity")
    writer.add_selector("theta", "float", Edm4hepCollection.RVEC, "polar angle")
    writer.add_selector("phi", "float", Edm4hepCollection.RVEC, "azimutal angle")
    writer.add_selector("p_end", "float", Edm4hepCollection.RVEC, "momentum")
    writer.add_selector("pt_end", "float", Edm4hepCollection.RVEC, "transverse momentum")
    writer.add_selector("px_end", "float", Edm4hepCollection.RVEC, "x momentum")
    writer.add_selector("py_end", "float", Edm4hepCollection.RVEC, "y momentum")
    writer.add_selector("pz_end", "float", Edm4hepCollection.RVEC, "z momentum")
    writer.add_selector("eta_end", "float", Edm4hepCollection.RVEC, "pseudorapidity")
    writer.add_selector("rapidity_end", "float", Edm4hepCollection.RVEC, "rapidity")
    writer.add_selector("theta_end", "float", Edm4hepCollection.RVEC, "polar angle")
    writer.add_selector("phi_end", "float", Edm4hepCollection.RVEC, "azimutal angle")
    writer.add_selector("r", "float", Edm4hepCollection.RVEC, "distance to origin")
    writer.add_selector("x", "float", Edm4hepCollection.RVEC, "x coordinate")
    writer.add_selector("y", "float", Edm4hepCollection.RVEC, "y coordinate")
    writer.add_selector("z", "float", Edm4hepCollection.RVEC, "z coordinate")
    writer.add_selector("r_end", "float", Edm4hepCollection.RVEC, "distance to origin")
    writer.add_selector("x_end", "float", Edm4hepCollection.RVEC, "x coordinate")
    writer.add_selector("y_end", "float", Edm4hepCollection.RVEC, "y coordinate")
    writer.add_selector("z_end", "float", Edm4hepCollection.RVEC, "z coordinate")
    writer.add_selector("e", "float", Edm4hepCollection.RVEC, "energy")
    writer.add_selector("e_end", "float", Edm4hepCollection.RVEC, "energy")
    writer.add_selector("m", "float", Edm4hepCollection.RVEC, "mass")
    writer.add_selector("q", "float", Edm4hepCollection.RVEC, "charge")
    writer.add_selector("absq", "float", Edm4hepCollection.RVEC, "absolute charge")
    writer.add_selector("pdg", "int", Edm4hepCollection.RVEC, "pdg")
    writer.add_selector("abspdg", "int", Edm4hepCollection.RVEC, "absolute pdg")
    writer.add_selector("sim_stat", "int", Edm4hepCollection.RVEC, "simulator status")
    writer.add_selector("gen_stat", "int", Edm4hepCollection.RVEC, "generator status")

    writer.add_sorter("p", "float", Edm4hepCollection.RVEC, "momentum",
                      momentum_property("x", "momentum",  "P", "a") +
                      momentum_property("y", "momentum",  "P", "b"))
    writer.add_sorter("pt", "float", Edm4hepCollection.RVEC, "transverse momentum",
                      momentum_property("x", "momentum",  "pt", "a") +
                      momentum_property("y", "momentum",  "pt", "b"))
    writer.add_sorter("px", "float", Edm4hepCollection.RVEC, "x momentum",
                      momentum_property("x", "momentum",  "px", "a") +
                      momentum_property("y", "momentum",  "px", "b"))
    writer.add_sorter("py", "float", Edm4hepCollection.RVEC, "y momentum",
                      momentum_property("x", "momentum",  "py", "a") +
                      momentum_property("y", "momentum",  "py", "b"))
    writer.add_sorter("pz", "float", Edm4hepCollection.RVEC, "z momentum",
                      momentum_property("x", "momentum",  "pz", "a") +
                      momentum_property("y", "momentum",  "pz", "b"))
    writer.add_sorter("eta", "float", Edm4hepCollection.RVEC, "pseudorapidity",
                      momentum_property("x", "momentum",  "eta", "a") +
                      momentum_property("y", "momentum",  "eta", "b"))
    writer.add_sorter("rapidity", "float", Edm4hepCollection.RVEC, "rapidity",
                      momentum_property("x", "momentum",  "Rapidity", "a") +
                      momentum_property("y", "momentum",  "Rapidity", "b"))
    writer.add_sorter("theta", "float", Edm4hepCollection.RVEC, "polar angle",
                      momentum_property("x", "momentum",  "theta", "a") +
                      momentum_property("y", "momentum",  "theta", "b"))
    writer.add_sorter("phi", "float", Edm4hepCollection.RVEC, "azimutal angle",
                      momentum_property("x", "momentum",  "phi", "a") +
                      momentum_property("y", "momentum",  "phi", "b"))
    writer.add_sorter("p_end", "float", Edm4hepCollection.RVEC, "momentum",
                      momentum_property("x", "momentumAtEndpoint",  "P", "a") +
                      momentum_property("y", "momentumAtEndpoint",  "P", "b"))
    writer.add_sorter("pt_end", "float", Edm4hepCollection.RVEC, "transverse momentum",
                      momentum_property("x", "momentumAtEndpoint",  "pt", "a") +
                      momentum_property("y", "momentumAtEndpoint",  "pt", "b"))
    writer.add_sorter("px_end", "float", Edm4hepCollection.RVEC, "x momentum",
                      momentum_property("x", "momentumAtEndpoint",  "px", "a") +
                      momentum_property("y", "momentumAtEndpoint",  "px", "b"))
    writer.add_sorter("py_end", "float", Edm4hepCollection.RVEC, "y momentum",
                      momentum_property("x", "momentumAtEndpoint",  "py", "a") +
                      momentum_property("y", "momentumAtEndpoint",  "py", "b"))
    writer.add_sorter("pz_end", "float", Edm4hepCollection.RVEC, "z momentum",
                      momentum_property("x", "momentumAtEndpoint",  "pz", "a") +
                      momentum_property("y", "momentumAtEndpoint",  "pz", "b"))
    writer.add_sorter("eta_end", "float", Edm4hepCollection.RVEC, "pseudorapidity",
                      momentum_property("x", "momentumAtEndpoint",  "eta", "a") +
                      momentum_property("y", "momentumAtEndpoint",  "eta", "b"))
    writer.add_sorter("rapidity_end", "float", Edm4hepCollection.RVEC, "rapidity",
                      momentum_property("x", "momentumAtEndpoint",  "Rapidity", "a") +
                      momentum_property("y", "momentumAtEndpoint",  "Rapidity", "b"))
    writer.add_sorter("theta_end", "float", Edm4hepCollection.RVEC, "polar angle",
                      momentum_property("x", "momentumAtEndpoint",  "theta", "a") +
                      momentum_property("y", "momentumAtEndpoint",  "theta", "b"))
    writer.add_sorter("phi_end", "float", Edm4hepCollection.RVEC, "azimutal angle",
                      momentum_property("x", "momentumAtEndpoint",  "phi", "a") +
                      momentum_property("y", "momentumAtEndpoint",  "phi", "b"))
    writer.add_sorter("r", "float", Edm4hepCollection.RVEC, "distance to origin",
                      vertex_property("x", "vertex",  "r", "a") +
                      vertex_property("y", "vertex",  "r", "b"))
    writer.add_sorter("x", "float", Edm4hepCollection.RVEC, "x coordinate",
                      vertex_property("x", "vertex",  "x", "a") +
                      vertex_property("y", "vertex",  "x", "b"))
    writer.add_sorter("y", "float", Edm4hepCollection.RVEC, "y coordinate",
                      vertex_property("x", "vertex",  "y", "a") +
                      vertex_property("y", "vertex",  "y", "b"))
    writer.add_sorter("z", "float", Edm4hepCollection.RVEC, "z coordinate",
                      vertex_property("x", "vertex",  "z", "a") +
                      vertex_property("y", "vertex",  "z", "b"))
    writer.add_sorter("r_end", "float", Edm4hepCollection.RVEC, "distance to origin",
                      vertex_property("x", "endpoint",  "r", "a") +
                      vertex_property("y", "endpoint",  "r", "b"))
    writer.add_sorter("x_end", "float", Edm4hepCollection.RVEC, "x coordinate",
                      vertex_property("x", "endpoint",  "x", "a") +
                      vertex_property("y", "endpoint",  "x", "b"))
    writer.add_sorter("y_end", "float", Edm4hepCollection.RVEC, "y coordinate",
                      vertex_property("x", "endpoint",  "y", "a") +
                      vertex_property("y", "endpoint",  "y", "b"))
    writer.add_sorter("z_end", "float", Edm4hepCollection.RVEC, "z coordinate",
                      vertex_property("x", "endpoint",  "z", "a") +
                      vertex_property("y", "endpoint",  "z", "b"))
    writer.add_sorter("e", "float", Edm4hepCollection.RVEC, "energy",
                      momentum_property("x", "momentum",  "e", "a") +
                      momentum_property("y", "momentum",  "e", "b"))
    writer.add_sorter("e_end", "float", Edm4hepCollection.RVEC, "energy",
                      momentum_property("x", "momentumAtEndpoint",  "e", "a") +
                      momentum_property("y", "momentumAtEndpoint",  "e", "b"))
    writer.add_sorter("m", "float", Edm4hepCollection.RVEC, "mass",
                      "a = x.mass;\nb = y.mass;\n")
    writer.add_sorter("q", "float", Edm4hepCollection.RVEC, "charge",
                      "a = x.charge;\nb = y.charge;\n")
    writer.add_sorter("absq", "float", Edm4hepCollection.RVEC, "absolute charge",
                      "a = std::abs(x.charge);\nb = std::abs(y.charge);\n")
    writer.add_sorter("pdg", "int", Edm4hepCollection.RVEC, "pdg",
                      "a = x.PDG;\nb = y.PDG;\n")
    writer.add_sorter("abspdg", "int", Edm4hepCollection.RVEC, "absolute pdg",
                      "a = std::abs(x.PDG);\nb = std::abs(y.PDG);\n")
    writer.add_sorter("sim_stat", "int", Edm4hepCollection.RVEC, "simulator status",
                      "a = x.simulatorStatus;\nb = y.simulatorStatus;\n")
    writer.add_sorter("gen_stat", "int", Edm4hepCollection.RVEC, "generator status",
                      "a = x.generatorStatus;\nb = y.generatorStatus;\n")

    writer.write("MCParticle.h", "MCParticle.cc")

if __name__ == "__main__":
    write_mcparticle_code("include/ral", "src")
