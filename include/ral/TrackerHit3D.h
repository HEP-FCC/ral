#include <cmath>
#include <edm4hep/TrackerHit3DCollection.h>
#include <iostream>
#include <ral/LogicalOperators.h>
namespace k4::ral {
namespace TrackerHit3D {
/**
 * Get type from each item in a collection of TrackerHit3D.
 *
 * @param collection Collection of TrackerHit3D to look in
 *
 */
ROOT::VecOps::RVec<int>
getType(ROOT::VecOps::RVec<edm4hep::TrackerHit3DData> collection);
/**
 * Get quality from each item in a collection of TrackerHit3D.
 *
 * @param collection Collection of TrackerHit3D to look in
 *
 */
ROOT::VecOps::RVec<int>
getQuality(ROOT::VecOps::RVec<edm4hep::TrackerHit3DData> collection);
/**
 * Get detector cell ID from each item in a collection of TrackerHit3D.
 *
 * @param collection Collection of TrackerHit3D to look in
 *
 */
ROOT::VecOps::RVec<unsigned long long>
getCellID(ROOT::VecOps::RVec<edm4hep::TrackerHit3DData> collection);
/**
 * Get eDep from each item in a collection of TrackerHit3D.
 *
 * @param collection Collection of TrackerHit3D to look in
 *
 */
ROOT::VecOps::RVec<float>
getEDep(ROOT::VecOps::RVec<edm4hep::TrackerHit3DData> collection);
/**
 * Get time of the hit from each item in a collection of TrackerHit3D.
 *
 * @param collection Collection of TrackerHit3D to look in
 *
 */
ROOT::VecOps::RVec<float>
getTime(ROOT::VecOps::RVec<edm4hep::TrackerHit3DData> collection);
/**
 * Get type from each item in a collection of TrackerHit3D.
 *
 * @param collection Collection of TrackerHit3D to look in
 *
 */
ROOT::VecOps::RVec<int>
getType(const edm4hep::TrackerHit3DCollection &collection);
/**
 * Get quality from each item in a collection of TrackerHit3D.
 *
 * @param collection Collection of TrackerHit3D to look in
 *
 */
ROOT::VecOps::RVec<int>
getQuality(const edm4hep::TrackerHit3DCollection &collection);
/**
 * Get detector cell ID from each item in a collection of TrackerHit3D.
 *
 * @param collection Collection of TrackerHit3D to look in
 *
 */
ROOT::VecOps::RVec<unsigned long long>
getCellID(const edm4hep::TrackerHit3DCollection &collection);
/**
 * Get eDep from each item in a collection of TrackerHit3D.
 *
 * @param collection Collection of TrackerHit3D to look in
 *
 */
ROOT::VecOps::RVec<float>
getEDep(const edm4hep::TrackerHit3DCollection &collection);
/**
 * Get time of the hit from each item in a collection of TrackerHit3D.
 *
 * @param collection Collection of TrackerHit3D to look in
 *
 */
ROOT::VecOps::RVec<float>
getTime(const edm4hep::TrackerHit3DCollection &collection);
/**
 * Print type from each item in a collection of TrackerHit3D.
 *
 * @param collection Collection of TrackerHit3D to look in
 *
 */
int printType(ROOT::VecOps::RVec<edm4hep::TrackerHit3DData> collection);
/**
 * Print type from each item in a collection of TrackerHit3D.
 *
 * @param collection Collection of TrackerHit3D to look in
 *
 */
int printQuality(ROOT::VecOps::RVec<edm4hep::TrackerHit3DData> collection);
/**
 * Print detector cell ID from each item in a collection of TrackerHit3D.
 *
 * @param collection Collection of TrackerHit3D to look in
 *
 */
int printCellID(ROOT::VecOps::RVec<edm4hep::TrackerHit3DData> collection);
/**
 * Print eDep from each item in a collection of TrackerHit3D.
 *
 * @param collection Collection of TrackerHit3D to look in
 *
 */
int printEDep(ROOT::VecOps::RVec<edm4hep::TrackerHit3DData> collection);
/**
 * Print time of the hit from each item in a collection of TrackerHit3D.
 *
 * @param collection Collection of TrackerHit3D to look in
 *
 */
int printTime(ROOT::VecOps::RVec<edm4hep::TrackerHit3DData> collection);
/**
 * Print type from each item in a collection of TrackerHit3D.
 *
 * @param collection Collection of TrackerHit3D to look in
 *
 */
int printType(const edm4hep::TrackerHit3DCollection &collection);
/**
 * Print type from each item in a collection of TrackerHit3D.
 *
 * @param collection Collection of TrackerHit3D to look in
 *
 */
int printQuality(const edm4hep::TrackerHit3DCollection &collection);
/**
 * Print detector cell ID from each item in a collection of TrackerHit3D.
 *
 * @param collection Collection of TrackerHit3D to look in
 *
 */
int printCellID(const edm4hep::TrackerHit3DCollection &collection);
/**
 * Print eDep from each item in a collection of TrackerHit3D.
 *
 * @param collection Collection of TrackerHit3D to look in
 *
 */
int printEDep(const edm4hep::TrackerHit3DCollection &collection);
/**
 * Print time of the hit from each item in a collection of TrackerHit3D.
 *
 * @param collection Collection of TrackerHit3D to look in
 *
 */
int printTime(const edm4hep::TrackerHit3DCollection &collection);
/**
 * Create boolean mask based on the value of type from each item in a collection
 * of TrackerHit3D.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of TrackerHit3D to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskType(LogicalOperators::ComparisonOperator op, int val,
         ROOT::VecOps::RVec<edm4hep::TrackerHit3DData> collection);
/**
 * Create boolean mask based on the value of type from each item in a collection
 * of TrackerHit3D.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of TrackerHit3D to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskQuality(LogicalOperators::ComparisonOperator op, int val,
            ROOT::VecOps::RVec<edm4hep::TrackerHit3DData> collection);
/**
 * Create boolean mask based on the value of detector cell ID from each item in
 * a collection of TrackerHit3D.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of TrackerHit3D to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskCellID(LogicalOperators::ComparisonOperator op, unsigned long long val,
           ROOT::VecOps::RVec<edm4hep::TrackerHit3DData> collection);
/**
 * Create boolean mask based on the value of eDep from each item in a collection
 * of TrackerHit3D.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of TrackerHit3D to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskEDep(LogicalOperators::ComparisonOperator op, float val,
         ROOT::VecOps::RVec<edm4hep::TrackerHit3DData> collection);
/**
 * Create boolean mask based on the value of time of the hit from each item in a
 * collection of TrackerHit3D.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of TrackerHit3D to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskTime(LogicalOperators::ComparisonOperator op, float val,
         ROOT::VecOps::RVec<edm4hep::TrackerHit3DData> collection);
/**
 * Create boolean mask based on the value of type from each item in a collection
 * of TrackerHit3D.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of TrackerHit3D to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskType(LogicalOperators::ComparisonOperator op, int val,
         const edm4hep::TrackerHit3DCollection &collection);
/**
 * Create boolean mask based on the value of type from each item in a collection
 * of TrackerHit3D.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of TrackerHit3D to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskQuality(LogicalOperators::ComparisonOperator op, int val,
            const edm4hep::TrackerHit3DCollection &collection);
/**
 * Create boolean mask based on the value of detector cell ID from each item in
 * a collection of TrackerHit3D.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of TrackerHit3D to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskCellID(LogicalOperators::ComparisonOperator op, unsigned long long val,
           const edm4hep::TrackerHit3DCollection &collection);
/**
 * Create boolean mask based on the value of eDep from each item in a collection
 * of TrackerHit3D.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of TrackerHit3D to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskEDep(LogicalOperators::ComparisonOperator op, float val,
         const edm4hep::TrackerHit3DCollection &collection);
/**
 * Create boolean mask based on the value of time of the hit from each item in a
 * collection of TrackerHit3D.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of TrackerHit3D to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskTime(LogicalOperators::ComparisonOperator op, float val,
         const edm4hep::TrackerHit3DCollection &collection);
/**
 * Select a subgroup of TrackerHit3D based on the value of type.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of TrackerHit3D to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::TrackerHit3DData>
selType(LogicalOperators::ComparisonOperator op, int val,
        ROOT::VecOps::RVec<edm4hep::TrackerHit3DData> collection);
/**
 * Select a subgroup of TrackerHit3D based on the value of type.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of TrackerHit3D to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::TrackerHit3DData>
selQuality(LogicalOperators::ComparisonOperator op, int val,
           ROOT::VecOps::RVec<edm4hep::TrackerHit3DData> collection);
/**
 * Select a subgroup of TrackerHit3D based on the value of detector cell ID.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of TrackerHit3D to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::TrackerHit3DData>
selCellID(LogicalOperators::ComparisonOperator op, unsigned long long val,
          ROOT::VecOps::RVec<edm4hep::TrackerHit3DData> collection);
/**
 * Select a subgroup of TrackerHit3D based on the value of eDep.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of TrackerHit3D to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::TrackerHit3DData>
selEDep(LogicalOperators::ComparisonOperator op, float val,
        ROOT::VecOps::RVec<edm4hep::TrackerHit3DData> collection);
/**
 * Select a subgroup of TrackerHit3D based on the value of time of the hit.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of TrackerHit3D to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::TrackerHit3DData>
selTime(LogicalOperators::ComparisonOperator op, float val,
        ROOT::VecOps::RVec<edm4hep::TrackerHit3DData> collection);
/**
 * Select a subgroup of TrackerHit3D based on the value of type.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of TrackerHit3D to look in
 *
 */
edm4hep::TrackerHit3DCollection
selType(LogicalOperators::ComparisonOperator op, int val,
        const edm4hep::TrackerHit3DCollection &collection);
/**
 * Select a subgroup of TrackerHit3D based on the value of type.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of TrackerHit3D to look in
 *
 */
edm4hep::TrackerHit3DCollection
selQuality(LogicalOperators::ComparisonOperator op, int val,
           const edm4hep::TrackerHit3DCollection &collection);
/**
 * Select a subgroup of TrackerHit3D based on the value of detector cell ID.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of TrackerHit3D to look in
 *
 */
edm4hep::TrackerHit3DCollection
selCellID(LogicalOperators::ComparisonOperator op, unsigned long long val,
          const edm4hep::TrackerHit3DCollection &collection);
/**
 * Select a subgroup of TrackerHit3D based on the value of eDep.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of TrackerHit3D to look in
 *
 */
edm4hep::TrackerHit3DCollection
selEDep(LogicalOperators::ComparisonOperator op, float val,
        const edm4hep::TrackerHit3DCollection &collection);
/**
 * Select a subgroup of TrackerHit3D based on the value of time of the hit.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of TrackerHit3D to look in
 *
 */
edm4hep::TrackerHit3DCollection
selTime(LogicalOperators::ComparisonOperator op, float val,
        const edm4hep::TrackerHit3DCollection &collection);
/**
 * Sort a collection of TrackerHit3D based on the value of type.
 *
 * @param collection Collection of TrackerHit3D to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::TrackerHit3DData>
sortType(ROOT::VecOps::RVec<edm4hep::TrackerHit3DData> collection,
         bool reverse = false);
/**
 * Sort a collection of TrackerHit3D based on the value of quality.
 *
 * @param collection Collection of TrackerHit3D to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::TrackerHit3DData>
sortQuality(ROOT::VecOps::RVec<edm4hep::TrackerHit3DData> collection,
            bool reverse = false);
/**
 * Sort a collection of TrackerHit3D based on the value of detector cell ID.
 *
 * @param collection Collection of TrackerHit3D to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::TrackerHit3DData>
sortCellID(ROOT::VecOps::RVec<edm4hep::TrackerHit3DData> collection,
           bool reverse = false);
/**
 * Sort a collection of TrackerHit3D based on the value of eDep.
 *
 * @param collection Collection of TrackerHit3D to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::TrackerHit3DData>
sortEDep(ROOT::VecOps::RVec<edm4hep::TrackerHit3DData> collection,
         bool reverse = false);
/**
 * Sort a collection of TrackerHit3D based on the value of time of the hit.
 *
 * @param collection Collection of TrackerHit3D to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::TrackerHit3DData>
sortTime(ROOT::VecOps::RVec<edm4hep::TrackerHit3DData> collection,
         bool reverse = false);
/**
 * Sort a collection of TrackerHit3D based on the value of type.
 *
 * @param collection Collection of TrackerHit3D to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::TrackerHit3DCollection
sortType(edm4hep::TrackerHit3DCollection &collection, bool reverse = false);
/**
 * Sort a collection of TrackerHit3D based on the value of quality.
 *
 * @param collection Collection of TrackerHit3D to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::TrackerHit3DCollection
sortQuality(edm4hep::TrackerHit3DCollection &collection, bool reverse = false);
/**
 * Sort a collection of TrackerHit3D based on the value of detector cell ID.
 *
 * @param collection Collection of TrackerHit3D to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::TrackerHit3DCollection
sortCellID(edm4hep::TrackerHit3DCollection &collection, bool reverse = false);
/**
 * Sort a collection of TrackerHit3D based on the value of eDep.
 *
 * @param collection Collection of TrackerHit3D to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::TrackerHit3DCollection
sortEDep(edm4hep::TrackerHit3DCollection &collection, bool reverse = false);
/**
 * Sort a collection of TrackerHit3D based on the value of time of the hit.
 *
 * @param collection Collection of TrackerHit3D to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::TrackerHit3DCollection
sortTime(edm4hep::TrackerHit3DCollection &collection, bool reverse = false);
} // namespace TrackerHit3D
} // namespace k4::ral
