#ifndef PARTICLEID_ANALYZERS_H
#define PARTICLEID_ANALYZERS_H

#include "ROOT/RVec.hxx"
#include "edm4hep/ParticleID.h"

/**
 * Main namespace of the library
 */
namespace k4::ral {

/**
 * Englobe analyzers that acts on the ParticleID class
 */
namespace ParticleID {

/**
 * Get type member from ParticleIDs
 *
 * Analyzer that can be use to obtain the type member in the class
 * ParticleID from edm4hep
 *
 * @param particles List of particle id in an event
 *
 */
ROOT::VecOps::RVec<int>
get_type(ROOT::VecOps::RVec<edm4hep::ParticleID> particles);

/**
 * Get PDG member from ParticleIDs
 *
 * Analyzer that can be use to obtain the PDG member in the class
 * ParticleID from edm4hep
 *
 * @param particles List of particle id in an event
 *
 */
ROOT::VecOps::RVec<int>
get_PDG(ROOT::VecOps::RVec<edm4hep::ParticleID> particles);

/**
 * Get algorithmType member from ParticleIDs
 *
 * Analyzer that can be use to obtain the algorithmType member in the class
 * ParticleID from edm4hep
 *
 * @param particles List of particle id in an event
 *
 */
ROOT::VecOps::RVec<int>
get_algorithmType(ROOT::VecOps::RVec<edm4hep::ParticleID> particles);

/**
 * Get likelihood member from ParticleIDs
 *
 * Analyzer that can be use to obtain the likelihood member in the class
 * ParticleID from edm4hep
 *
 * @param particles List of particle id in an event
 *
 */
ROOT::VecOps::RVec<float>
get_likelihood(ROOT::VecOps::RVec<edm4hep::ParticleID> particles);

/**
 * Get parameters member from ParticleIDs
 *
 * Analyzer that can be use to obtain the parameters member in the class
 * ParticleID from edm4hep
 *
 * @param particles List of particle id in an event
 *
 */
ROOT::VecOps::RVec<ROOT::VecOps::RVec<float>>
get_parameters(ROOT::VecOps::RVec<edm4hep::ParticleID> particles);

} // namespace ParticleID
} // namespace k4::ral

#endif
