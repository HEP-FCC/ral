#ifndef RECONSTRUCTEDPARTICLE_ANALYZERS_H
#define RECONSTRUCTEDPARTICLE_ANALYZERS_H

#include "Math/Vector3D.h"
#include "Math/Vector4D.h"
#include "ROOT/RVec.hxx"
#include "edm4hep/ReconstructedParticleData.h"
#include "ral/LogicalOperators.h"
#include <Math/GenVector/PxPyPzM4D.h>
#include <Math/Vector4Dfwd.h>

/**
 * Main namespace of the library
 */
namespace k4::ral {

/**
 * Englobe analyzers that acts on the ReconstructedParticle class
 */
namespace ReconstructedParticle {

/**
 * Get number of elements in ReconstructedParticles
 *
 * @param particles List of reconstructed particles in an event
 *
 */
int get_n(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Get PDG member from ReconstructedParticles
 *
 * Analyzer that can be use to obtain the PDG member in the class
 * ReconstructedParticle from edm4hep
 *
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<int>
get_pdg(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Get absolute PDG value from ReconstructedParticles
 *
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<int>
get_abspdg(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Get energy member from ReconstructedParticles
 *
 * Analyzer that can be use to obtain the energy member in the class
 * ReconstructedParticle from edm4hep
 *
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<float>
get_e(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Get the 4 momentum from the ReconstructedParticles
 *
 * Analyzer that can be use to obtain the momentum member in the class
 * ReconstructedParticle from edm4hep
 *
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<ROOT::Math::PxPyPzMVector>
get_p(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Get transverse momentum of ReconstructedParticles
 *
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<float> get_pt(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Get x component momentum of ReconstructedParticles
 *
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<float> get_px(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);


/**
 * Get y component momentum of ReconstructedParticles
 *
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<float> get_py(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Get z component momentum of ReconstructedParticles
 *
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<float> get_pz(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Get the pseudo-rapidity of ReconstructedParticles
 *
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<float> get_eta(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Get the rapidity of ReconstructedParticles
 *
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<float> get_rapidity(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Get the theta angle of ReconstructedParticles
 *
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<float> get_theta(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Get the phi angle of ReconstructedParticles
 *
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<float> get_phi(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Get referencePoint member from ReconstructedParticles
 *
 * Analyzer that can be use to obtain the referencePoint member in the class
 * ReconstructedParticle from edm4hep
 *
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<ROOT::Math::XYZVector> get_referencePoint(
    ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Get the distance to the origin from ReconstructedParticles
 *
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<float> get_r(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Get x coordinate of the position from ReconstructedParticles
 *
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<float> get_x(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Get y coordinate of the position from ReconstructedParticles
 *
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<float> get_y(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Get z coordinate of the position from ReconstructedParticles
 *
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<float> get_z(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Get charge member from ReconstructedParticles
 *
 * Analyzer that can be use to obtain the charge member in the class
 * ReconstructedParticle from edm4hep
 *
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<float>
get_q(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Get absolute charge from ReconstructedParticles
 *
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<float>
get_absq(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Get mass member from ReconstructedParticles
 *
 * Analyzer that can be use to obtain the mass member in the class
 * ReconstructedParticle from edm4hep
 *
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<float>
get_m(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Get goodnessOfPID member from ReconstructedParticles
 *
 * Analyzer that can be use to obtain the goodnessOfPID member in the class
 * ReconstructedParticle from edm4hep
 *
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<float> get_goodnessOfPID(
    ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/// return the type of the input ReconstructedParticles
ROOT::VecOps::RVec<int> get_type(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

struct print_PDG {
  int m_n_events;
  int m_n_printed;
  print_PDG(int n_events);
  int operator()(
      ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);
};

struct print_energy {
  int m_n_events;
  int m_n_printed;
  print_energy(int n_events);
  int operator()(
      ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);
};

struct print_momentum {
  int m_n_events;
  int m_n_printed;
  print_momentum(int n_events);
  int operator()(
      ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);
};

struct print_referencePoint {
  int m_n_events;
  int m_n_printed;
  print_referencePoint(int n_events);
  int operator()(
      ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);
};

struct print_mass {
  int m_n_events;
  int m_n_printed;
  print_mass(int n_events);
  int operator()(
      ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);
};

struct print_charge {
  int m_n_events;
  int m_n_printed;
  print_charge(int n_events);
  int operator()(
      ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);
};

struct print_goodnessOfPID {
  int m_n_events;
  int m_n_printed;
  print_goodnessOfPID(int n_events);
  int operator()(
      ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);
};

ROOT::VecOps::RVec<bool>
mask_e(LogicalOperators::ComparisonOperator op, float energy,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

} // namespace ReconstructedParticle
} // namespace k4::ral

#endif
