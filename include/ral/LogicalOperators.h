#ifndef LOGICAL_OPERATORS_RAL_H
#define LOGICAL_OPERATORS_RAL_H

// std
#include <type_traits>

// ROOT
#include "ROOT/RVec.hxx"

// PODIO
#include "podio/CollectionBase.h"

namespace k4::ral {

namespace LogicalOperators {

enum class ComparisonOperator { LESS, LESSEQ, EQ, GREATEREQ, GREATER };

template <typename C, typename = std::enable_if<
                          std::is_base_of<podio::CollectionBase, C>::value>>
C filter(const ROOT::VecOps::RVec<bool> &mask, const C &collection) {
  if (mask.size() != collection.size()) {
    auto msg = "Different vector lengths: " + std::to_string(mask.size()) +
               " vs. " + std::to_string(collection.size()) + "!";
    throw std::length_error(msg);
  }

  C result;
  result.setSubsetCollection();
  for (int i = 0; i < collection.size(); i++) {
    if (mask[i]) {
      result.push_back(collection[i]);
    }
  }

  return result;
}

template <typename T>
ROOT::VecOps::RVec<T> filter(const ROOT::VecOps::RVec<bool> &mask,
                             const ROOT::VecOps::RVec<T> &collection) {
  if (mask.size() != collection.size()) {
    auto msg = "Different vector lengths: " + std::to_string(mask.size()) +
               " vs. " + std::to_string(collection.size()) + "!";
    throw std::length_error(msg);
  }

  ROOT::VecOps::RVec<T> result;
  for (int i = 0; i < collection.size(); i++) {
    if (mask[i]) {
      result.emplace_back(collection[i]);
    }
  }

  return result;
}

ROOT::VecOps::RVec<bool> operator&&(const ROOT::VecOps::RVec<bool> &vec1,
                                    const ROOT::VecOps::RVec<bool> &vec2);

ROOT::VecOps::RVec<bool> operator||(const ROOT::VecOps::RVec<bool> &vec1,
                                    const ROOT::VecOps::RVec<bool> &vec2);

ROOT::VecOps::RVec<bool> operator!(const ROOT::VecOps::RVec<bool> &vec1);

} // namespace LogicalOperators
} // namespace k4::ral
#endif
