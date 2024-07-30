#ifndef RECONSTRUCTEDPARTICLE_ANALYZERS_H
#define RECONSTRUCTEDPARTICLE_ANALYZERS_H

#include "Math/Vector3D.h"
#include "ROOT/RVec.hxx"
#include "edm4hep/ReconstructedParticleData.h"

/**
 * Main namespace of the library
 */
namespace k4::ral {

/**
 * Englobe analyzers that acts on the ReconstructedParticle class
 */
namespace ReconstructedParticle {

/**
 * Get PDG member from ReconstructedParticles
 *
 * Analyzer that can be use to obtain the PDG member in the class ReconstructedParticle
 * from edm4hep
 *
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<int>
get_PDG(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Get energy member from ReconstructedParticles
 *
 * Analyzer that can be use to obtain the energy member in the class ReconstructedParticle
 * from edm4hep
 *
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<float>
get_energy(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Get momentum member from ReconstructedParticles
 *
 * Analyzer that can be use to obtain the momentum member in the class ReconstructedParticle
 * from edm4hep
 *
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<ROOT::Math::XYZVector>
get_momentum(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Get referencePoint member from ReconstructedParticles
 *
 * Analyzer that can be use to obtain the referencePoint member in the class ReconstructedParticle
 * from edm4hep
 *
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<ROOT::Math::XYZVector> get_referencePoint(
    ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Get charge member from ReconstructedParticles
 *
 * Analyzer that can be use to obtain the charge member in the class ReconstructedParticle
 * from edm4hep
 *
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<float>
get_charge(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Get mass member from ReconstructedParticles
 *
 * Analyzer that can be use to obtain the mass member in the class ReconstructedParticle
 * from edm4hep
 *
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<float>
get_mass(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Get goodnessOfPID member from ReconstructedParticles
 *
 * Analyzer that can be use to obtain the goodnessOfPID member in the class ReconstructedParticle
 * from edm4hep
 *
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<float> get_goodnessOfPID(
    ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

} // namespace ReconstructedParticle
} // namespace k4::ral

#endif
