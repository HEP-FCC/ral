#include <cmath>
#include <edm4hep/TrackCollection.h>
#include <iostream>
#include <ral/LogicalOperators.h>
namespace k4::ral {
namespace Track {
/**
 * Get type from each item in a collection of Track.
 *
 * @param collection Collection of Track to look in
 *
 */
ROOT::VecOps::RVec<int>
getType(ROOT::VecOps::RVec<edm4hep::TrackData> collection);
/**
 * Get chi^2 from each item in a collection of Track.
 *
 * @param collection Collection of Track to look in
 *
 */
ROOT::VecOps::RVec<float>
getChi2(ROOT::VecOps::RVec<edm4hep::TrackData> collection);
/**
 * Get degrees of freedom from each item in a collection of Track.
 *
 * @param collection Collection of Track to look in
 *
 */
ROOT::VecOps::RVec<int>
getndf(ROOT::VecOps::RVec<edm4hep::TrackData> collection);
/**
 * Get number of holes from each item in a collection of Track.
 *
 * @param collection Collection of Track to look in
 *
 */
ROOT::VecOps::RVec<int>
getNholes(ROOT::VecOps::RVec<edm4hep::TrackData> collection);
/**
 * Get type from each item in a collection of Track.
 *
 * @param collection Collection of Track to look in
 *
 */
ROOT::VecOps::RVec<int> getType(const edm4hep::TrackCollection &collection);
/**
 * Get chi^2 from each item in a collection of Track.
 *
 * @param collection Collection of Track to look in
 *
 */
ROOT::VecOps::RVec<float> getChi2(const edm4hep::TrackCollection &collection);
/**
 * Get degrees of freedom from each item in a collection of Track.
 *
 * @param collection Collection of Track to look in
 *
 */
ROOT::VecOps::RVec<int> getndf(const edm4hep::TrackCollection &collection);
/**
 * Get number of holes from each item in a collection of Track.
 *
 * @param collection Collection of Track to look in
 *
 */
ROOT::VecOps::RVec<int> getNholes(const edm4hep::TrackCollection &collection);
/**
 * Print type from each item in a collection of Track.
 *
 * @param collection Collection of Track to look in
 *
 */
int printType(ROOT::VecOps::RVec<edm4hep::TrackData> collection);
/**
 * Print chi^2 from each item in a collection of Track.
 *
 * @param collection Collection of Track to look in
 *
 */
int printChi2(ROOT::VecOps::RVec<edm4hep::TrackData> collection);
/**
 * Print degrees of freedom from each item in a collection of Track.
 *
 * @param collection Collection of Track to look in
 *
 */
int printndf(ROOT::VecOps::RVec<edm4hep::TrackData> collection);
/**
 * Print number of holes from each item in a collection of Track.
 *
 * @param collection Collection of Track to look in
 *
 */
int printNholes(ROOT::VecOps::RVec<edm4hep::TrackData> collection);
/**
 * Print type from each item in a collection of Track.
 *
 * @param collection Collection of Track to look in
 *
 */
int printType(const edm4hep::TrackCollection &collection);
/**
 * Print chi^2 from each item in a collection of Track.
 *
 * @param collection Collection of Track to look in
 *
 */
int printChi2(const edm4hep::TrackCollection &collection);
/**
 * Print degrees of freedom from each item in a collection of Track.
 *
 * @param collection Collection of Track to look in
 *
 */
int printndf(const edm4hep::TrackCollection &collection);
/**
 * Print number of holes from each item in a collection of Track.
 *
 * @param collection Collection of Track to look in
 *
 */
int printNholes(const edm4hep::TrackCollection &collection);
/**
 * Create boolean mask based on the value of type from each item in a collection
 * of Track.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Track to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskType(LogicalOperators::ComparisonOperator op, int val,
         ROOT::VecOps::RVec<edm4hep::TrackData> collection);
/**
 * Create boolean mask based on the value of chi^2 from each item in a
 * collection of Track.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Track to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskChi2(LogicalOperators::ComparisonOperator op, float val,
         ROOT::VecOps::RVec<edm4hep::TrackData> collection);
/**
 * Create boolean mask based on the value of degrees of freedom from each item
 * in a collection of Track.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Track to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskndf(LogicalOperators::ComparisonOperator op, int val,
        ROOT::VecOps::RVec<edm4hep::TrackData> collection);
/**
 * Create boolean mask based on the value of number of holes from each item in a
 * collection of Track.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Track to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskNholes(LogicalOperators::ComparisonOperator op, int val,
           ROOT::VecOps::RVec<edm4hep::TrackData> collection);
/**
 * Create boolean mask based on the value of type from each item in a collection
 * of Track.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Track to look in
 *
 */
ROOT::VecOps::RVec<bool> maskType(LogicalOperators::ComparisonOperator op,
                                  int val,
                                  const edm4hep::TrackCollection &collection);
/**
 * Create boolean mask based on the value of chi^2 from each item in a
 * collection of Track.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Track to look in
 *
 */
ROOT::VecOps::RVec<bool> maskChi2(LogicalOperators::ComparisonOperator op,
                                  float val,
                                  const edm4hep::TrackCollection &collection);
/**
 * Create boolean mask based on the value of degrees of freedom from each item
 * in a collection of Track.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Track to look in
 *
 */
ROOT::VecOps::RVec<bool> maskndf(LogicalOperators::ComparisonOperator op,
                                 int val,
                                 const edm4hep::TrackCollection &collection);
/**
 * Create boolean mask based on the value of number of holes from each item in a
 * collection of Track.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Track to look in
 *
 */
ROOT::VecOps::RVec<bool> maskNholes(LogicalOperators::ComparisonOperator op,
                                    int val,
                                    const edm4hep::TrackCollection &collection);
/**
 * Select a subgroup of Track based on the value of type.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Track to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::TrackData>
selType(LogicalOperators::ComparisonOperator op, int val,
        ROOT::VecOps::RVec<edm4hep::TrackData> collection);
/**
 * Select a subgroup of Track based on the value of chi^2.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Track to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::TrackData>
selChi2(LogicalOperators::ComparisonOperator op, float val,
        ROOT::VecOps::RVec<edm4hep::TrackData> collection);
/**
 * Select a subgroup of Track based on the value of degrees of freedom.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Track to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::TrackData>
selndf(LogicalOperators::ComparisonOperator op, int val,
       ROOT::VecOps::RVec<edm4hep::TrackData> collection);
/**
 * Select a subgroup of Track based on the value of number of holes.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Track to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::TrackData>
selNholes(LogicalOperators::ComparisonOperator op, int val,
          ROOT::VecOps::RVec<edm4hep::TrackData> collection);
/**
 * Select a subgroup of Track based on the value of type.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Track to look in
 *
 */
edm4hep::TrackCollection selType(LogicalOperators::ComparisonOperator op,
                                 int val,
                                 const edm4hep::TrackCollection &collection);
/**
 * Select a subgroup of Track based on the value of chi^2.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Track to look in
 *
 */
edm4hep::TrackCollection selChi2(LogicalOperators::ComparisonOperator op,
                                 float val,
                                 const edm4hep::TrackCollection &collection);
/**
 * Select a subgroup of Track based on the value of degrees of freedom.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Track to look in
 *
 */
edm4hep::TrackCollection selndf(LogicalOperators::ComparisonOperator op,
                                int val,
                                const edm4hep::TrackCollection &collection);
/**
 * Select a subgroup of Track based on the value of number of holes.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Track to look in
 *
 */
edm4hep::TrackCollection selNholes(LogicalOperators::ComparisonOperator op,
                                   int val,
                                   const edm4hep::TrackCollection &collection);
/**
 * Sort a collection of Track based on the value of type.
 *
 * @param collection Collection of Track to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::TrackData>
sortType(ROOT::VecOps::RVec<edm4hep::TrackData> collection,
         bool reverse = false);
/**
 * Sort a collection of Track based on the value of chi^2.
 *
 * @param collection Collection of Track to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::TrackData>
sortChi2(ROOT::VecOps::RVec<edm4hep::TrackData> collection,
         bool reverse = false);
/**
 * Sort a collection of Track based on the value of degrees of freedom.
 *
 * @param collection Collection of Track to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::TrackData>
sortndf(ROOT::VecOps::RVec<edm4hep::TrackData> collection,
        bool reverse = false);
/**
 * Sort a collection of Track based on the value of number of holes.
 *
 * @param collection Collection of Track to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::TrackData>
sortNholes(ROOT::VecOps::RVec<edm4hep::TrackData> collection,
           bool reverse = false);
/**
 * Sort a collection of Track based on the value of type.
 *
 * @param collection Collection of Track to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::TrackCollection sortType(edm4hep::TrackCollection &collection,
                                  bool reverse = false);
/**
 * Sort a collection of Track based on the value of chi^2.
 *
 * @param collection Collection of Track to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::TrackCollection sortChi2(edm4hep::TrackCollection &collection,
                                  bool reverse = false);
/**
 * Sort a collection of Track based on the value of degrees of freedom.
 *
 * @param collection Collection of Track to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::TrackCollection sortndf(edm4hep::TrackCollection &collection,
                                 bool reverse = false);
/**
 * Sort a collection of Track based on the value of number of holes.
 *
 * @param collection Collection of Track to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::TrackCollection sortNholes(edm4hep::TrackCollection &collection,
                                    bool reverse = false);
} // namespace Track
} // namespace k4::ral
