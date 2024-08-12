#include "ral/ReconstructedParticle.h"
#include "ral/LogicalOperators.h"
#include <Math/Vector3Dfwd.h>
#include <cstdlib>
#include <edm4hep/ReconstructedParticleData.h>
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
    return 1;
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

print_energy::print_energy(int n_events)
    : m_n_events{n_events}, m_n_printed{0} {}

int print_energy::operator()(
    ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles) {
  if (m_n_events == m_n_printed) {
    return 1;
  }
  auto energies = get_energy(particles);
  std::cout << "Printing energy from event " << m_n_printed << std::endl;
  for (const float &energy : energies) {
    std::cout << energy << " ";
  }
  std::cout << std::endl;
  m_n_printed += 1;
  return 0;
}

print_momentum::print_momentum(int n_events)
    : m_n_events{n_events}, m_n_printed{0} {}

int print_momentum::operator()(
    ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles) {
  if (m_n_events == m_n_printed) {
    return 1;
  }
  auto vectors = get_momentum(particles);
  std::cout << "Printing momentum from event " << m_n_printed << std::endl;
  for (const ROOT::Math::XYZVector &momentum : vectors) {
    std::cout << momentum << " ";
  }
  std::cout << std::endl;
  m_n_printed += 1;
  return 0;
}

print_referencePoint::print_referencePoint(int n_events)
    : m_n_events{n_events}, m_n_printed{0} {}

int print_referencePoint::operator()(
    ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles) {
  if (m_n_events == m_n_printed) {
    return 1;
  }
  auto points = get_referencePoint(particles);
  std::cout << "Printing referencePoint from event " << m_n_printed
            << std::endl;
  for (const ROOT::Math::XYZVector &referencePoint : points) {
    std::cout << referencePoint << " ";
  }
  std::cout << std::endl;
  m_n_printed += 1;
  return 0;
}

print_charge::print_charge(int n_events)
    : m_n_events{n_events}, m_n_printed{0} {}

int print_charge::operator()(
    ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles) {
  if (m_n_events == m_n_printed) {
    return 1;
  }
  auto charges = get_charge(particles);
  std::cout << "Printing charge from event " << m_n_printed << std::endl;
  for (const float &charge : charges) {
    std::cout << charge << " ";
  }
  std::cout << std::endl;
  m_n_printed += 1;
  return 0;
}

print_mass::print_mass(int n_events) : m_n_events{n_events}, m_n_printed{0} {}

int print_mass::operator()(
    ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles) {
  if (m_n_events == m_n_printed) {
    return 1;
  }
  auto masses = get_mass(particles);
  std::cout << "Printing mass from event " << m_n_printed << std::endl;
  for (const float &mass : masses) {
    std::cout << mass << " ";
  }
  std::cout << std::endl;
  m_n_printed += 1;
  return 0;
}

print_goodnessOfPID::print_goodnessOfPID(int n_events)
    : m_n_events{n_events}, m_n_printed{0} {}

int print_goodnessOfPID::operator()(
    ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles) {
  if (m_n_events == m_n_printed) {
    return 1;
  }
  auto goodnessOfPIDs = get_goodnessOfPID(particles);
  std::cout << "Printing goodnessOfPID from event " << m_n_printed << std::endl;
  for (const float &goodnessOfPID : goodnessOfPIDs) {
    std::cout << goodnessOfPID << " ";
  }
  std::cout << std::endl;
  m_n_printed += 1;
  return 0;
}

ROOT::VecOps::RVec<bool>
mask_e(LogicalOperators::ComparisonOperator op, float energy,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles) {

  ROOT::VecOps::RVec<bool> result;
  result.reserve(particles.size());
  for (edm4hep::ReconstructedParticleData &p : particles) {
    switch (op) {
    case LogicalOperators::ComparisonOperator::LESS:
      result.emplace_back(p.energy < energy);
      break;
    case LogicalOperators::ComparisonOperator::LESSEQ:
      result.emplace_back(p.energy <= energy);
      break;
    case LogicalOperators::ComparisonOperator::EQ:
      result.emplace_back(p.energy == energy);
      break;
    case LogicalOperators::ComparisonOperator::GREATEREQ:
      result.emplace_back(p.energy >= energy);
      break;
    case LogicalOperators::ComparisonOperator::GREATER:
      result.emplace_back(p.energy > energy);
      break;
    }
  }
  std::cout << "Boolean mask size " << result.size() << ". Particles size "
            << particles.size() << std::endl;
  return result;
}

} // namespace ReconstructedParticle
} // namespace k4::ral
