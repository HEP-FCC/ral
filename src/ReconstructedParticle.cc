#include "ral/ReconstructedParticle.h"
#include "ral/LogicalOperators.h"
#include <Math/Vector3Dfwd.h>
#include <Math/Vector4Dfwd.h>
#include <cstdlib>
#include <edm4hep/ReconstructedParticleData.h>
#include <iostream>
#include <stdexcept>

namespace k4::ral {

namespace ReconstructedParticle {

int get_n(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles) {
  return particles.size();
}

ROOT::VecOps::RVec<int>
get_pdg(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles) {
  ROOT::VecOps::RVec<int> result;
  result.reserve(particles.size());
  for (edm4hep::ReconstructedParticleData p : particles) {
    result.emplace_back(p.PDG);
  }
  return result;
}

ROOT::VecOps::RVec<int>
get_abspdg(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles){
  ROOT::VecOps::RVec<int> result;
  result.reserve(particles.size());
  for (edm4hep::ReconstructedParticleData p : particles) {
    result.emplace_back(std::abs(p.PDG));
  }
  return result;
}

ROOT::VecOps::RVec<float>
get_e(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles) {
  ROOT::VecOps::RVec<float> result;
  result.reserve(particles.size());
  for (edm4hep::ReconstructedParticleData p : particles) {
    result.emplace_back(p.energy);
  }
  return result;
}

ROOT::VecOps::RVec<ROOT::Math::PxPyPzMVector>
get_p(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles){
  ROOT::VecOps::RVec<ROOT::Math::PxPyPzMVector> result;
  result.reserve(particles.size());
  for (const edm4hep::ReconstructedParticleData& p : particles) {
    ROOT::Math::PxPyPzMVector momentum(p.momentum.x, p.momentum.y, p.momentum.z, p.mass);
    result.emplace_back(momentum);
  }
  return result;
}

ROOT::VecOps::RVec<float>
get_pmod(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles){
  ROOT::VecOps::RVec<float> result;
  result.reserve(particles.size());
  for (const edm4hep::ReconstructedParticleData& p : particles) {
    ROOT::Math::PxPyPzMVector momentum(p.momentum.x, p.momentum.y, p.momentum.z, p.mass);
    result.emplace_back(momentum.P());
  }
  return result;
}

ROOT::VecOps::RVec<float> 
get_pt(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles){
  ROOT::VecOps::RVec<float> result;
  result.reserve(particles.size());
  for (const edm4hep::ReconstructedParticleData& p : particles) {
    ROOT::Math::PxPyPzMVector momentum(p.momentum.x, p.momentum.y, p.momentum.z, p.mass);
    result.emplace_back(momentum.pt());
  }
  return result;
}

ROOT::VecOps::RVec<float> 
get_px(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles){
  ROOT::VecOps::RVec<float> result;
  result.reserve(particles.size());
  for (const edm4hep::ReconstructedParticleData& p : particles) {
    result.emplace_back(p.momentum.x);
  }
  return result;
}

ROOT::VecOps::RVec<float> 
get_py(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles){
  ROOT::VecOps::RVec<float> result;
  result.reserve(particles.size());
  for (const edm4hep::ReconstructedParticleData& p : particles) {
    result.emplace_back(p.momentum.y);
  }
  return result;
}

ROOT::VecOps::RVec<float> 
get_pz(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles){
  ROOT::VecOps::RVec<float> result;
  result.reserve(particles.size());
  for (const edm4hep::ReconstructedParticleData& p : particles) {
    result.emplace_back(p.momentum.z);
  }
  return result;
}

ROOT::VecOps::RVec<float> 
get_eta(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles){
  ROOT::VecOps::RVec<float> result;
  result.reserve(particles.size());
  for (const edm4hep::ReconstructedParticleData& p : particles) {
    ROOT::Math::PxPyPzMVector momentum(p.momentum.x, p.momentum.y, p.momentum.z, p.mass);
    result.emplace_back(momentum.eta());
  }
  return result;
}

ROOT::VecOps::RVec<float> 
get_rapidity(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles){
  ROOT::VecOps::RVec<float> result;
  result.reserve(particles.size());
  for (const edm4hep::ReconstructedParticleData& p : particles) {
    ROOT::Math::PxPyPzMVector momentum(p.momentum.x, p.momentum.y, p.momentum.z, p.mass);
    result.emplace_back(momentum.Rapidity());
  }
  return result;
}

ROOT::VecOps::RVec<float> 
get_theta(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles){
  ROOT::VecOps::RVec<float> result;
  result.reserve(particles.size());
  for (const edm4hep::ReconstructedParticleData& p : particles) {
    ROOT::Math::PxPyPzMVector momentum(p.momentum.x, p.momentum.y, p.momentum.z, p.mass);
    result.emplace_back(momentum.theta());
  }
  return result;
}

ROOT::VecOps::RVec<float> 
get_phi(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles){
  ROOT::VecOps::RVec<float> result;
  result.reserve(particles.size());
  for (const edm4hep::ReconstructedParticleData& p : particles) {
    ROOT::Math::PxPyPzMVector momentum(p.momentum.x, p.momentum.y, p.momentum.z, p.mass);
    result.emplace_back(momentum.phi());
  }
  return result;
}

ROOT::VecOps::RVec<ROOT::Math::XYZVector> 
get_referencePoint(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles) {
  ROOT::VecOps::RVec<ROOT::Math::XYZVector> result;
  result.reserve(particles.size());
  for (edm4hep::ReconstructedParticleData p : particles) {
    result.emplace_back(ROOT::Math::XYZVector(
        p.referencePoint.x, p.referencePoint.y, p.referencePoint.z));
  }
  return result;
}

ROOT::VecOps::RVec<float> 
get_r(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles){
  ROOT::VecOps::RVec<float> result;
  result.reserve(particles.size());
  for (const edm4hep::ReconstructedParticleData& p : particles) {
    float r = std::sqrt(std::pow(p.referencePoint.x,2) + std::pow(p.referencePoint.y,2) + std::pow(p.referencePoint.z,2));
    result.emplace_back(r);
  }
  return result;
}

ROOT::VecOps::RVec<float> 
get_x(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles){
  ROOT::VecOps::RVec<float> result;
  result.reserve(particles.size());
  for (const edm4hep::ReconstructedParticleData& p : particles) {
    result.emplace_back(p.referencePoint.x);
  }
  return result;
}

ROOT::VecOps::RVec<float> 
get_y(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles){
  ROOT::VecOps::RVec<float> result;
  result.reserve(particles.size());
  for (const edm4hep::ReconstructedParticleData& p : particles) {
    result.emplace_back(p.referencePoint.y);
  }
  return result;
}

ROOT::VecOps::RVec<float> 
get_z(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles){
  ROOT::VecOps::RVec<float> result;
  result.reserve(particles.size());
  for (const edm4hep::ReconstructedParticleData& p : particles) {
    result.emplace_back(p.referencePoint.z);
  }
  return result;
}

ROOT::VecOps::RVec<float>
get_q(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles) {
  ROOT::VecOps::RVec<float> result;
  result.reserve(particles.size());
  for (edm4hep::ReconstructedParticleData p : particles) {
    result.emplace_back(p.charge);
  }
  return result;
}

ROOT::VecOps::RVec<float>
get_absq(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles) {
  ROOT::VecOps::RVec<float> result;
  result.reserve(particles.size());
  for (edm4hep::ReconstructedParticleData p : particles) {
    result.emplace_back(std::abs(p.charge));
  }
  return result;
}

ROOT::VecOps::RVec<float>
get_m(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles) {
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

print_pdg::print_pdg(int n_events) : m_n_events{n_events}, m_n_printed{0} {}

int print_pdg::operator()(
    ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles) {
  if (m_n_events == m_n_printed) {
    return 1;
  }
  auto pdgs = get_pdg(particles);
  std::cout << "Printing PDG from event " << m_n_printed << std::endl;
  for (const int &pdg : pdgs) {
    std::cout << pdg << " ";
  }
  std::cout << std::endl;
  m_n_printed += 1;
  return 0;
}

print_e::print_e(int n_events)
    : m_n_events{n_events}, m_n_printed{0} {}

int print_e::operator()(
    ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles) {
  if (m_n_events == m_n_printed) {
    return 1;
  }
  auto energies = get_e(particles);
  std::cout << "Printing energy from event " << m_n_printed << std::endl;
  for (const float &energy : energies) {
    std::cout << energy << " ";
  }
  std::cout << std::endl;
  m_n_printed += 1;
  return 0;
}

print_p::print_p(int n_events)
    : m_n_events{n_events}, m_n_printed{0} {}

int print_p::operator()(
    ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles) {
  if (m_n_events == m_n_printed) {
    return 1;
  }
  auto vectors = get_p(particles);
  std::cout << "Printing momentum from event " << m_n_printed << std::endl;
  for (const ROOT::Math::PxPyPzMVector& momentum : vectors) {
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

print_q::print_q(int n_events)
    : m_n_events{n_events}, m_n_printed{0} {}

int print_q::operator()(
    ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles) {
  if (m_n_events == m_n_printed) {
    return 1;
  }
  auto charges = get_q(particles);
  std::cout << "Printing charge from event " << m_n_printed << std::endl;
  for (const float &charge : charges) {
    std::cout << charge << " ";
  }
  std::cout << std::endl;
  m_n_printed += 1;
  return 0;
}

print_m::print_m(int n_events) : m_n_events{n_events}, m_n_printed{0} {}

int print_m::operator()(
    ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles) {
  if (m_n_events == m_n_printed) {
    return 1;
  }
  auto masses = get_m(particles);
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

#define MASKING(T, getter, op, value, collection, result) \
  ROOT::VecOps::RVec<T> vec = getter(collection); \
  for (T & item : vec) {\
    switch (op) {\
    case LogicalOperators::ComparisonOperator::LESS:\
      result.emplace_back(item < value);\
      break;\
    case LogicalOperators::ComparisonOperator::LESSEQ:\
      result.emplace_back(item <= value);\
      break;\
    case LogicalOperators::ComparisonOperator::EQ:\
      result.emplace_back(item == value);\
      break;\
    case LogicalOperators::ComparisonOperator::GREATEREQ:\
      result.emplace_back(item >= value);\
      break;\
    case LogicalOperators::ComparisonOperator::GREATER:\
      result.emplace_back(item > value);\
      break;\
    }\
  }\

ROOT::VecOps::RVec<bool>
mask_e(LogicalOperators::ComparisonOperator op, float value,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles) {
  ROOT::VecOps::RVec<bool> result; 
  result.reserve(particles.size()); 
  MASKING(float, get_e, op, value, particles, result);
  return result;
}

ROOT::VecOps::RVec<bool>
mask_pmod(LogicalOperators::ComparisonOperator op, float value,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles){
  ROOT::VecOps::RVec<bool> result; 
  result.reserve(particles.size()); 
  MASKING(float, get_pmod, op, value, particles, result);
  return result;
}

ROOT::VecOps::RVec<bool>
mask_pt(LogicalOperators::ComparisonOperator op, float value,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles){
  ROOT::VecOps::RVec<bool> result; 
  result.reserve(particles.size()); 
  MASKING(float, get_pt, op, value, particles, result);
  return result;
}

ROOT::VecOps::RVec<bool>
mask_px(LogicalOperators::ComparisonOperator op, float value,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles){
  ROOT::VecOps::RVec<bool> result; 
  result.reserve(particles.size()); 
  MASKING(float, get_px, op, value, particles, result);
  return result;
}

ROOT::VecOps::RVec<bool>
mask_py(LogicalOperators::ComparisonOperator op, float value,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles){
  ROOT::VecOps::RVec<bool> result; 
  result.reserve(particles.size()); 
  MASKING(float, get_py, op, value, particles, result);
  return result;
}

ROOT::VecOps::RVec<bool>
mask_pz(LogicalOperators::ComparisonOperator op, float value,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles){
  ROOT::VecOps::RVec<bool> result; 
  result.reserve(particles.size()); 
  MASKING(float, get_pz, op, value, particles, result);
  return result;
}

ROOT::VecOps::RVec<bool>
mask_eta(LogicalOperators::ComparisonOperator op, float value,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles){
  ROOT::VecOps::RVec<bool> result; 
  result.reserve(particles.size()); 
  MASKING(float, get_eta, op, value, particles, result);
  return result;
}

ROOT::VecOps::RVec<bool>
mask_rapidity(LogicalOperators::ComparisonOperator op, float value,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles){
  ROOT::VecOps::RVec<bool> result; 
  result.reserve(particles.size()); 
  MASKING(float, get_rapidity, op, value, particles, result);
  return result;
}

ROOT::VecOps::RVec<bool>
mask_theta(LogicalOperators::ComparisonOperator op, float value,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles){
  ROOT::VecOps::RVec<bool> result; 
  result.reserve(particles.size()); 
  MASKING(float, get_rapidity, op, value, particles, result);
  return result;
}

ROOT::VecOps::RVec<bool>
mask_r(LogicalOperators::ComparisonOperator op, float value,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles){
  ROOT::VecOps::RVec<bool> result;
  ROOT::VecOps::RVec<float> r_vec = get_r(particles);
  result.reserve(particles.size());
  for (float & r : r_vec) {
    switch (op) {
    case LogicalOperators::ComparisonOperator::LESS:
      result.emplace_back(r < value);
      break;
    case LogicalOperators::ComparisonOperator::LESSEQ:
      result.emplace_back(r <= value);
      break;
    case LogicalOperators::ComparisonOperator::EQ:
      result.emplace_back(r == value);
      break;
    case LogicalOperators::ComparisonOperator::GREATEREQ:
      result.emplace_back(r >= value);
      break;
    case LogicalOperators::ComparisonOperator::GREATER:
      result.emplace_back(r > value);
      break;
    }
  }
  return result;
}

ROOT::VecOps::RVec<bool>
mask_x(LogicalOperators::ComparisonOperator op, float value,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles){
  ROOT::VecOps::RVec<bool> result;
  ROOT::VecOps::RVec<float> x_vec = get_x(particles);
  result.reserve(particles.size());
  for (float & x : x_vec) {
    switch (op) {
    case LogicalOperators::ComparisonOperator::LESS:
      result.emplace_back(x < value);
      break;
    case LogicalOperators::ComparisonOperator::LESSEQ:
      result.emplace_back(x <= value);
      break;
    case LogicalOperators::ComparisonOperator::EQ:
      result.emplace_back(x == value);
      break;
    case LogicalOperators::ComparisonOperator::GREATEREQ:
      result.emplace_back(x >= value);
      break;
    case LogicalOperators::ComparisonOperator::GREATER:
      result.emplace_back(x > value);
      break;
    }
  }
  return result;
}

ROOT::VecOps::RVec<bool>
mask_y(LogicalOperators::ComparisonOperator op, float value,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles){
  ROOT::VecOps::RVec<bool> result;
  ROOT::VecOps::RVec<float> y_vec = get_y(particles);
  result.reserve(particles.size());
  for (float & y : y_vec) {
    switch (op) {
    case LogicalOperators::ComparisonOperator::LESS:
      result.emplace_back(y < value);
      break;
    case LogicalOperators::ComparisonOperator::LESSEQ:
      result.emplace_back(y <= value);
      break;
    case LogicalOperators::ComparisonOperator::EQ:
      result.emplace_back(y == value);
      break;
    case LogicalOperators::ComparisonOperator::GREATEREQ:
      result.emplace_back(y >= value);
      break;
    case LogicalOperators::ComparisonOperator::GREATER:
      result.emplace_back(y > value);
      break;
    }
  }
  return result;
}

ROOT::VecOps::RVec<bool>
mask_z(LogicalOperators::ComparisonOperator op, float value,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles){
  ROOT::VecOps::RVec<bool> result;
  ROOT::VecOps::RVec<float> z_vec = get_z(particles);
  result.reserve(particles.size());
  for (float & z : z_vec) {
    switch (op) {
    case LogicalOperators::ComparisonOperator::LESS:
      result.emplace_back(z < value);
      break;
    case LogicalOperators::ComparisonOperator::LESSEQ:
      result.emplace_back(z <= value);
      break;
    case LogicalOperators::ComparisonOperator::EQ:
      result.emplace_back(z == value);
      break;
    case LogicalOperators::ComparisonOperator::GREATEREQ:
      result.emplace_back(z >= value);
      break;
    case LogicalOperators::ComparisonOperator::GREATER:
      result.emplace_back(z > value);
      break;
    }
  }
  return result;
}

ROOT::VecOps::RVec<bool>
mask_m(LogicalOperators::ComparisonOperator op, float value,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles){
  ROOT::VecOps::RVec<bool> result;
  ROOT::VecOps::RVec<float> m_vec = get_m(particles);
  result.reserve(particles.size());
  for (float & m : m_vec) {
    switch (op) {
    case LogicalOperators::ComparisonOperator::LESS:
      result.emplace_back(m < value);
      break;
    case LogicalOperators::ComparisonOperator::LESSEQ:
      result.emplace_back(m <= value);
      break;
    case LogicalOperators::ComparisonOperator::EQ:
      result.emplace_back(m == value);
      break;
    case LogicalOperators::ComparisonOperator::GREATEREQ:
      result.emplace_back(m >= value);
      break;
    case LogicalOperators::ComparisonOperator::GREATER:
      result.emplace_back(m > value);
      break;
    }
  }
  return result;
}

ROOT::VecOps::RVec<bool>
mask_q(LogicalOperators::ComparisonOperator op, float value,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles){
  ROOT::VecOps::RVec<bool> result;
  ROOT::VecOps::RVec<float> q_vec = get_q(particles);
  result.reserve(particles.size());
  for (float & q : q_vec) {
    switch (op) {
    case LogicalOperators::ComparisonOperator::LESS:
      result.emplace_back(q < value);
      break;
    case LogicalOperators::ComparisonOperator::LESSEQ:
      result.emplace_back(q <= value);
      break;
    case LogicalOperators::ComparisonOperator::EQ:
      result.emplace_back(q == value);
      break;
    case LogicalOperators::ComparisonOperator::GREATEREQ:
      result.emplace_back(q >= value);
      break;
    case LogicalOperators::ComparisonOperator::GREATER:
      result.emplace_back(q > value);
      break;
    }
  }
  return result;
}

} // namespace ReconstructedParticle
} // namespace k4::ral
