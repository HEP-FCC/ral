#ifndef RECONSTRUCTEDPARTICLE_ANALYZERS_H
#define RECONSTRUCTEDPARTICLE_ANALYZERS_H

#include "Math/Vector3D.h"
#include "ROOT/RVec.hxx"
#include "edm4hep/ReconstructedParticleData.h"

namespace k4::ral {

namespace ReconstructedParticle {

ROOT::VecOps::RVec<int>
get_PDG(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

ROOT::VecOps::RVec<float>
get_energy(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

ROOT::VecOps::RVec<ROOT::Math::XYZVector>
get_momentum(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

ROOT::VecOps::RVec<ROOT::Math::XYZVector> get_referencePoint(
    ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

ROOT::VecOps::RVec<float>
get_charge(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

ROOT::VecOps::RVec<float>
get_mass(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

ROOT::VecOps::RVec<float> get_goodnessOfPID(
    ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);
} // namespace ReconstructedParticle
} // namespace k4::ral

#endif
