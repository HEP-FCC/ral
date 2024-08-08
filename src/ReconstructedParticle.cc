#include "ral/ReconstructedParticle.h"
#include <cstdlib>
#include <iostream>
#include <stdexcept>

namespace k4::ral {

namespace ReconstructedParticle {

ROOT::VecOps::RVec<int>
get_PDG(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles) {
  ROOT::VecOps::RVec<int> result;
  result.reserve(particles.size());
  for (edm4hep::ReconstructedParticleData p : particles) {
    result.emplace_back(p.PDG);
  }
  return result;
}

ROOT::VecOps::RVec<float>
get_energy(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles) {
  ROOT::VecOps::RVec<float> result;
  result.reserve(particles.size());
  for (edm4hep::ReconstructedParticleData p : particles) {
    result.emplace_back(p.energy);
  }
  return result;
}

ROOT::VecOps::RVec<ROOT::Math::XYZVector>
get_momentum(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles) {
  ROOT::VecOps::RVec<ROOT::Math::XYZVector> result;
  result.reserve(particles.size());
  for (edm4hep::ReconstructedParticleData p : particles) {
    result.emplace_back(
        ROOT::Math::XYZVector(p.momentum.x, p.momentum.y, p.momentum.z));
  }
  return result;
}

ROOT::VecOps::RVec<ROOT::Math::XYZVector> get_referencePoint(
    ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles) {
  ROOT::VecOps::RVec<ROOT::Math::XYZVector> result;
  result.reserve(particles.size());
  for (edm4hep::ReconstructedParticleData p : particles) {
    result.emplace_back(ROOT::Math::XYZVector(
        p.referencePoint.x, p.referencePoint.y, p.referencePoint.z));
  }
  return result;
}

ROOT::VecOps::RVec<float>
get_charge(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles) {
  ROOT::VecOps::RVec<float> result;
  result.reserve(particles.size());
  for (edm4hep::ReconstructedParticleData p : particles) {
    result.emplace_back(p.charge);
  }
  return result;
}

ROOT::VecOps::RVec<float>
get_mass(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles) {
  ROOT::VecOps::RVec<float> result;
  result.reserve(particles.size());
  for (edm4hep::ReconstructedParticleData p : particles) {
    result.emplace_back(p.mass);
  }
  return result;
}

ROOT::VecOps::RVec<float> get_goodnessOfPID(
    ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles) {
  ROOT::VecOps::RVec<float> result;
  result.reserve(particles.size());
  for (edm4hep::ReconstructedParticleData p : particles) {
    result.emplace_back(p.goodnessOfPID);
  }
  return result;
}

print_PDG::print_PDG(int n_events) : m_n_events{n_events}, m_n_printed{0} {}

int print_PDG::operator()(
    ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles) {
  if (m_n_events == m_n_printed) {
    throw std::runtime_error("End printing");
  }
  auto pdgs = get_PDG(particles);
  std::cout << "Printing PDG from event " << m_n_printed << std::endl;
  for (const int &pdg : pdgs) {
    std::cout << pdg << " ";
  }
  std::cout << std::endl;
  m_n_printed += 1;
  return 0;
}

} // namespace ReconstructedParticle
} // namespace k4::ral
