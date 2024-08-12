#include "ral/LogicalOperators.h"
#include "ROOT/RVec.hxx"
#include <edm4hep/ReconstructedParticleData.h>
#include <stdexcept>

namespace k4::ral {

namespace LogicalOperators {

template <typename T>
ROOT::VecOps::RVec<T> filter(ROOT::VecOps::RVec<bool> mask,
                             ROOT::VecOps::RVec<T> collection) {
  if (mask.size() != collection.size()) {
    throw std::length_error("Vectors should have the same length");
  }
  ROOT::VecOps::RVec<T> result;
  for (int i = 0; i < collection.size(); i++) {
    if (mask[i]) {
      result.emplace_back(collection[i]);
    }
  }
  return result;
}

/// It is important to instanciate the methods that we want to use in order
/// them to be available
template ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
filter<edm4hep::ReconstructedParticleData>(
    ROOT::VecOps::RVec<bool> mask,
    ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);

ROOT::VecOps::RVec<bool> operator&&(const ROOT::VecOps::RVec<bool> &vec1,
                                    const ROOT::VecOps::RVec<bool> &vec2) {
  if (vec1.size() != vec2.size()) {
    throw std::length_error("Vectors should have the same length");
  }
  ROOT::VecOps::RVec<bool> result;
  result.reserve(vec1.size());
  for (int i = 0; i < vec1.size(); i++) {
    result[i] = vec1[i] && vec2[i];
  }
  return result;
}

ROOT::VecOps::RVec<bool> operator||(const ROOT::VecOps::RVec<bool> &vec1,
                                    const ROOT::VecOps::RVec<bool> &vec2) {
  if (vec1.size() != vec2.size()) {
    throw std::length_error("Vectors should have the same length");
  }
  ROOT::VecOps::RVec<bool> result;
  result.reserve(vec1.size());
  for (int i = 0; i < vec1.size(); i++) {
    result[i] = vec1[i] && vec2[i];
  }
  return result;
}

ROOT::VecOps::RVec<bool> operator!(const ROOT::VecOps::RVec<bool> &vec1) {
  ROOT::VecOps::RVec<bool> result;
  result.reserve(vec1.size());
  for (int i = 0; i < vec1.size(); i++) {
    result[i] = !vec1[i];
  }
  return result;
}

} // namespace LogicalOperators
} // namespace k4::ral
