#include <Math/Vector3D.h>
#include <cmath>
#include <edm4hep/CalorimeterHitCollection.h>
#include <iostream>
#include <ral/LogicalOperators.h>
namespace k4::ral {
namespace CalorimeterHit {
/**
 * Get type from each item in a collection of CalorimeterHit.
 *
 * @param collection Collection of CalorimeterHit to look in
 *
 */
ROOT::VecOps::RVec<int>
getType(ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection);
/**
 * Get detector cell ID from each item in a collection of CalorimeterHit.
 *
 * @param collection Collection of CalorimeterHit to look in
 *
 */
ROOT::VecOps::RVec<unsigned long long>
getCellID(ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection);
/**
 * Get energy from each item in a collection of CalorimeterHit.
 *
 * @param collection Collection of CalorimeterHit to look in
 *
 */
ROOT::VecOps::RVec<float>
getEnergy(ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection);
/**
 * Get time of the hit from each item in a collection of CalorimeterHit.
 *
 * @param collection Collection of CalorimeterHit to look in
 *
 */
ROOT::VecOps::RVec<float>
getTime(ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection);
/**
 * Get distance to origin from each item in a collection of CalorimeterHit.
 *
 * @param collection Collection of CalorimeterHit to look in
 *
 */
ROOT::VecOps::RVec<float>
getR(ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection);
/**
 * Get x coordinate from each item in a collection of CalorimeterHit.
 *
 * @param collection Collection of CalorimeterHit to look in
 *
 */
ROOT::VecOps::RVec<float>
getX(ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection);
/**
 * Get y coordinate from each item in a collection of CalorimeterHit.
 *
 * @param collection Collection of CalorimeterHit to look in
 *
 */
ROOT::VecOps::RVec<float>
getY(ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection);
/**
 * Get z coordinate from each item in a collection of CalorimeterHit.
 *
 * @param collection Collection of CalorimeterHit to look in
 *
 */
ROOT::VecOps::RVec<float>
getZ(ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection);
/**
 * Get type from each item in a collection of CalorimeterHit.
 *
 * @param collection Collection of CalorimeterHit to look in
 *
 */
ROOT::VecOps::RVec<int>
getType(const edm4hep::CalorimeterHitCollection &collection);
/**
 * Get detector cell ID from each item in a collection of CalorimeterHit.
 *
 * @param collection Collection of CalorimeterHit to look in
 *
 */
ROOT::VecOps::RVec<unsigned long long>
getCellID(const edm4hep::CalorimeterHitCollection &collection);
/**
 * Get energy from each item in a collection of CalorimeterHit.
 *
 * @param collection Collection of CalorimeterHit to look in
 *
 */
ROOT::VecOps::RVec<float>
getEnergy(const edm4hep::CalorimeterHitCollection &collection);
/**
 * Get time of the hit from each item in a collection of CalorimeterHit.
 *
 * @param collection Collection of CalorimeterHit to look in
 *
 */
ROOT::VecOps::RVec<float>
getTime(const edm4hep::CalorimeterHitCollection &collection);
/**
 * Get distance to origin from each item in a collection of CalorimeterHit.
 *
 * @param collection Collection of CalorimeterHit to look in
 *
 */
ROOT::VecOps::RVec<float>
getR(const edm4hep::CalorimeterHitCollection &collection);
/**
 * Get x coordinate from each item in a collection of CalorimeterHit.
 *
 * @param collection Collection of CalorimeterHit to look in
 *
 */
ROOT::VecOps::RVec<float>
getX(const edm4hep::CalorimeterHitCollection &collection);
/**
 * Get y coordinate from each item in a collection of CalorimeterHit.
 *
 * @param collection Collection of CalorimeterHit to look in
 *
 */
ROOT::VecOps::RVec<float>
getY(const edm4hep::CalorimeterHitCollection &collection);
/**
 * Get z coordinate from each item in a collection of CalorimeterHit.
 *
 * @param collection Collection of CalorimeterHit to look in
 *
 */
ROOT::VecOps::RVec<float>
getZ(const edm4hep::CalorimeterHitCollection &collection);
/**
 * Print type from each item in a collection of CalorimeterHit.
 *
 * @param collection Collection of CalorimeterHit to look in
 *
 */
int printType(ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection);
/**
 * Print detector cell ID from each item in a collection of CalorimeterHit.
 *
 * @param collection Collection of CalorimeterHit to look in
 *
 */
int printCellID(ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection);
/**
 * Print energy from each item in a collection of CalorimeterHit.
 *
 * @param collection Collection of CalorimeterHit to look in
 *
 */
int printEnergy(ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection);
/**
 * Print time of the hit from each item in a collection of CalorimeterHit.
 *
 * @param collection Collection of CalorimeterHit to look in
 *
 */
int printTime(ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection);
/**
 * Print distance to origin from each item in a collection of CalorimeterHit.
 *
 * @param collection Collection of CalorimeterHit to look in
 *
 */
int printR(ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection);
/**
 * Print x coordinate from each item in a collection of CalorimeterHit.
 *
 * @param collection Collection of CalorimeterHit to look in
 *
 */
int printX(ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection);
/**
 * Print y coordinate from each item in a collection of CalorimeterHit.
 *
 * @param collection Collection of CalorimeterHit to look in
 *
 */
int printY(ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection);
/**
 * Print z coordinate from each item in a collection of CalorimeterHit.
 *
 * @param collection Collection of CalorimeterHit to look in
 *
 */
int printZ(ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection);
/**
 * Print type from each item in a collection of CalorimeterHit.
 *
 * @param collection Collection of CalorimeterHit to look in
 *
 */
int printType(const edm4hep::CalorimeterHitCollection &collection);
/**
 * Print detector cell ID from each item in a collection of CalorimeterHit.
 *
 * @param collection Collection of CalorimeterHit to look in
 *
 */
int printCellID(const edm4hep::CalorimeterHitCollection &collection);
/**
 * Print energy from each item in a collection of CalorimeterHit.
 *
 * @param collection Collection of CalorimeterHit to look in
 *
 */
int printEnergy(const edm4hep::CalorimeterHitCollection &collection);
/**
 * Print time of the hit from each item in a collection of CalorimeterHit.
 *
 * @param collection Collection of CalorimeterHit to look in
 *
 */
int printTime(const edm4hep::CalorimeterHitCollection &collection);
/**
 * Print distance to origin from each item in a collection of CalorimeterHit.
 *
 * @param collection Collection of CalorimeterHit to look in
 *
 */
int printR(const edm4hep::CalorimeterHitCollection &collection);
/**
 * Print x coordinate from each item in a collection of CalorimeterHit.
 *
 * @param collection Collection of CalorimeterHit to look in
 *
 */
int printX(const edm4hep::CalorimeterHitCollection &collection);
/**
 * Print y coordinate from each item in a collection of CalorimeterHit.
 *
 * @param collection Collection of CalorimeterHit to look in
 *
 */
int printY(const edm4hep::CalorimeterHitCollection &collection);
/**
 * Print z coordinate from each item in a collection of CalorimeterHit.
 *
 * @param collection Collection of CalorimeterHit to look in
 *
 */
int printZ(const edm4hep::CalorimeterHitCollection &collection);
/**
 * Create boolean mask based on the value of type from each item in a collection
 * of CalorimeterHit.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of CalorimeterHit to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskType(LogicalOperators::ComparisonOperator op, int val,
         ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection);
/**
 * Create boolean mask based on the value of detector cell ID from each item in
 * a collection of CalorimeterHit.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of CalorimeterHit to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskCellID(LogicalOperators::ComparisonOperator op, unsigned long long val,
           ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection);
/**
 * Create boolean mask based on the value of energy from each item in a
 * collection of CalorimeterHit.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of CalorimeterHit to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskEnergy(LogicalOperators::ComparisonOperator op, float val,
           ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection);
/**
 * Create boolean mask based on the value of time of the hit from each item in a
 * collection of CalorimeterHit.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of CalorimeterHit to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskTime(LogicalOperators::ComparisonOperator op, float val,
         ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection);
/**
 * Create boolean mask based on the value of distance to origin from each item
 * in a collection of CalorimeterHit.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of CalorimeterHit to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskR(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection);
/**
 * Create boolean mask based on the value of x coordinate from each item in a
 * collection of CalorimeterHit.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of CalorimeterHit to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskX(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection);
/**
 * Create boolean mask based on the value of y coordinate from each item in a
 * collection of CalorimeterHit.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of CalorimeterHit to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskY(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection);
/**
 * Create boolean mask based on the value of z coordinate from each item in a
 * collection of CalorimeterHit.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of CalorimeterHit to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskZ(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection);
/**
 * Create boolean mask based on the value of type from each item in a collection
 * of CalorimeterHit.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of CalorimeterHit to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskType(LogicalOperators::ComparisonOperator op, int val,
         const edm4hep::CalorimeterHitCollection &collection);
/**
 * Create boolean mask based on the value of detector cell ID from each item in
 * a collection of CalorimeterHit.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of CalorimeterHit to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskCellID(LogicalOperators::ComparisonOperator op, unsigned long long val,
           const edm4hep::CalorimeterHitCollection &collection);
/**
 * Create boolean mask based on the value of energy from each item in a
 * collection of CalorimeterHit.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of CalorimeterHit to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskEnergy(LogicalOperators::ComparisonOperator op, float val,
           const edm4hep::CalorimeterHitCollection &collection);
/**
 * Create boolean mask based on the value of time of the hit from each item in a
 * collection of CalorimeterHit.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of CalorimeterHit to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskTime(LogicalOperators::ComparisonOperator op, float val,
         const edm4hep::CalorimeterHitCollection &collection);
/**
 * Create boolean mask based on the value of distance to origin from each item
 * in a collection of CalorimeterHit.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of CalorimeterHit to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskR(LogicalOperators::ComparisonOperator op, float val,
      const edm4hep::CalorimeterHitCollection &collection);
/**
 * Create boolean mask based on the value of x coordinate from each item in a
 * collection of CalorimeterHit.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of CalorimeterHit to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskX(LogicalOperators::ComparisonOperator op, float val,
      const edm4hep::CalorimeterHitCollection &collection);
/**
 * Create boolean mask based on the value of y coordinate from each item in a
 * collection of CalorimeterHit.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of CalorimeterHit to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskY(LogicalOperators::ComparisonOperator op, float val,
      const edm4hep::CalorimeterHitCollection &collection);
/**
 * Create boolean mask based on the value of z coordinate from each item in a
 * collection of CalorimeterHit.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of CalorimeterHit to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskZ(LogicalOperators::ComparisonOperator op, float val,
      const edm4hep::CalorimeterHitCollection &collection);
/**
 * Select a subgroup of CalorimeterHit based on the value of type.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of CalorimeterHit to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::CalorimeterHitData>
selType(LogicalOperators::ComparisonOperator op, int val,
        ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection);
/**
 * Select a subgroup of CalorimeterHit based on the value of detector cell ID.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of CalorimeterHit to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::CalorimeterHitData>
selCellID(LogicalOperators::ComparisonOperator op, unsigned long long val,
          ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection);
/**
 * Select a subgroup of CalorimeterHit based on the value of energy.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of CalorimeterHit to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::CalorimeterHitData>
selEnergy(LogicalOperators::ComparisonOperator op, float val,
          ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection);
/**
 * Select a subgroup of CalorimeterHit based on the value of time of the hit.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of CalorimeterHit to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::CalorimeterHitData>
selTime(LogicalOperators::ComparisonOperator op, float val,
        ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection);
/**
 * Select a subgroup of CalorimeterHit based on the value of distance to origin.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of CalorimeterHit to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::CalorimeterHitData>
selR(LogicalOperators::ComparisonOperator op, float val,
     ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection);
/**
 * Select a subgroup of CalorimeterHit based on the value of x coordinate.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of CalorimeterHit to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::CalorimeterHitData>
selX(LogicalOperators::ComparisonOperator op, float val,
     ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection);
/**
 * Select a subgroup of CalorimeterHit based on the value of y coordinate.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of CalorimeterHit to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::CalorimeterHitData>
selY(LogicalOperators::ComparisonOperator op, float val,
     ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection);
/**
 * Select a subgroup of CalorimeterHit based on the value of z coordinate.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of CalorimeterHit to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::CalorimeterHitData>
selZ(LogicalOperators::ComparisonOperator op, float val,
     ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection);
/**
 * Select a subgroup of CalorimeterHit based on the value of type.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of CalorimeterHit to look in
 *
 */
edm4hep::CalorimeterHitCollection
selType(LogicalOperators::ComparisonOperator op, int val,
        const edm4hep::CalorimeterHitCollection &collection);
/**
 * Select a subgroup of CalorimeterHit based on the value of detector cell ID.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of CalorimeterHit to look in
 *
 */
edm4hep::CalorimeterHitCollection
selCellID(LogicalOperators::ComparisonOperator op, unsigned long long val,
          const edm4hep::CalorimeterHitCollection &collection);
/**
 * Select a subgroup of CalorimeterHit based on the value of energy.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of CalorimeterHit to look in
 *
 */
edm4hep::CalorimeterHitCollection
selEnergy(LogicalOperators::ComparisonOperator op, float val,
          const edm4hep::CalorimeterHitCollection &collection);
/**
 * Select a subgroup of CalorimeterHit based on the value of time of the hit.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of CalorimeterHit to look in
 *
 */
edm4hep::CalorimeterHitCollection
selTime(LogicalOperators::ComparisonOperator op, float val,
        const edm4hep::CalorimeterHitCollection &collection);
/**
 * Select a subgroup of CalorimeterHit based on the value of distance to origin.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of CalorimeterHit to look in
 *
 */
edm4hep::CalorimeterHitCollection
selR(LogicalOperators::ComparisonOperator op, float val,
     const edm4hep::CalorimeterHitCollection &collection);
/**
 * Select a subgroup of CalorimeterHit based on the value of x coordinate.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of CalorimeterHit to look in
 *
 */
edm4hep::CalorimeterHitCollection
selX(LogicalOperators::ComparisonOperator op, float val,
     const edm4hep::CalorimeterHitCollection &collection);
/**
 * Select a subgroup of CalorimeterHit based on the value of y coordinate.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of CalorimeterHit to look in
 *
 */
edm4hep::CalorimeterHitCollection
selY(LogicalOperators::ComparisonOperator op, float val,
     const edm4hep::CalorimeterHitCollection &collection);
/**
 * Select a subgroup of CalorimeterHit based on the value of z coordinate.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of CalorimeterHit to look in
 *
 */
edm4hep::CalorimeterHitCollection
selZ(LogicalOperators::ComparisonOperator op, float val,
     const edm4hep::CalorimeterHitCollection &collection);
/**
 * Sort a collection of CalorimeterHit based on the value of type.
 *
 * @param collection Collection of CalorimeterHit to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::CalorimeterHitData>
sortType(ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection,
         bool reverse = false);
/**
 * Sort a collection of CalorimeterHit based on the value of detector cell ID.
 *
 * @param collection Collection of CalorimeterHit to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::CalorimeterHitData>
sortCellID(ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection,
           bool reverse = false);
/**
 * Sort a collection of CalorimeterHit based on the value of energy.
 *
 * @param collection Collection of CalorimeterHit to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::CalorimeterHitData>
sortEnergy(ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection,
           bool reverse = false);
/**
 * Sort a collection of CalorimeterHit based on the value of time of the hit.
 *
 * @param collection Collection of CalorimeterHit to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::CalorimeterHitData>
sortTime(ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection,
         bool reverse = false);
/**
 * Sort a collection of CalorimeterHit based on the value of distance to origin.
 *
 * @param collection Collection of CalorimeterHit to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::CalorimeterHitData>
sortR(ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection,
      bool reverse = false);
/**
 * Sort a collection of CalorimeterHit based on the value of x coordinate.
 *
 * @param collection Collection of CalorimeterHit to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::CalorimeterHitData>
sortX(ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection,
      bool reverse = false);
/**
 * Sort a collection of CalorimeterHit based on the value of y coordinate.
 *
 * @param collection Collection of CalorimeterHit to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::CalorimeterHitData>
sortY(ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection,
      bool reverse = false);
/**
 * Sort a collection of CalorimeterHit based on the value of z coordinate.
 *
 * @param collection Collection of CalorimeterHit to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::CalorimeterHitData>
sortZ(ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection,
      bool reverse = false);
/**
 * Sort a collection of CalorimeterHit based on the value of type.
 *
 * @param collection Collection of CalorimeterHit to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::CalorimeterHitCollection
sortType(edm4hep::CalorimeterHitCollection &collection, bool reverse = false);
/**
 * Sort a collection of CalorimeterHit based on the value of detector cell ID.
 *
 * @param collection Collection of CalorimeterHit to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::CalorimeterHitCollection
sortCellID(edm4hep::CalorimeterHitCollection &collection, bool reverse = false);
/**
 * Sort a collection of CalorimeterHit based on the value of energy.
 *
 * @param collection Collection of CalorimeterHit to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::CalorimeterHitCollection
sortEnergy(edm4hep::CalorimeterHitCollection &collection, bool reverse = false);
/**
 * Sort a collection of CalorimeterHit based on the value of time of the hit.
 *
 * @param collection Collection of CalorimeterHit to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::CalorimeterHitCollection
sortTime(edm4hep::CalorimeterHitCollection &collection, bool reverse = false);
/**
 * Sort a collection of CalorimeterHit based on the value of distance to origin.
 *
 * @param collection Collection of CalorimeterHit to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::CalorimeterHitCollection
sortR(edm4hep::CalorimeterHitCollection &collection, bool reverse = false);
/**
 * Sort a collection of CalorimeterHit based on the value of x coordinate.
 *
 * @param collection Collection of CalorimeterHit to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::CalorimeterHitCollection
sortX(edm4hep::CalorimeterHitCollection &collection, bool reverse = false);
/**
 * Sort a collection of CalorimeterHit based on the value of y coordinate.
 *
 * @param collection Collection of CalorimeterHit to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::CalorimeterHitCollection
sortY(edm4hep::CalorimeterHitCollection &collection, bool reverse = false);
/**
 * Sort a collection of CalorimeterHit based on the value of z coordinate.
 *
 * @param collection Collection of CalorimeterHit to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::CalorimeterHitCollection
sortZ(edm4hep::CalorimeterHitCollection &collection, bool reverse = false);
} // namespace CalorimeterHit
} // namespace k4::ral
