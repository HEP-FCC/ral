#ifndef LOGICAL_OPERATORS_RAL_H
#define LOGICAL_OPERATORS_RAL_H

#include "ROOT/RVec.hxx"

namespace k4::ral {

namespace LogicalOperators {

enum class ComparisonOperator { LESS, LESSEQ, EQ, GREATEREQ, GREATER };

template <typename T>
ROOT::VecOps::RVec<T> filter(ROOT::VecOps::RVec<bool> mask,
                             ROOT::VecOps::RVec<T> collection);

ROOT::VecOps::RVec<bool> operator&&(const ROOT::VecOps::RVec<bool> &vec1,
                                    const ROOT::VecOps::RVec<bool> &vec2);

ROOT::VecOps::RVec<bool> operator||(const ROOT::VecOps::RVec<bool> &vec1,
                                    const ROOT::VecOps::RVec<bool> &vec2);

ROOT::VecOps::RVec<bool> operator!(const ROOT::VecOps::RVec<bool> &vec1);

} // namespace LogicalOperators
} // namespace k4::ral
#endif
