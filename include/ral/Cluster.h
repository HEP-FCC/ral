#include <Math/Vector3D.h>
#include <cmath>
#include <edm4hep/CalorimeterHitCollection.h>
#include <edm4hep/ClusterCollection.h>
#include <iostream>
#include <ral/LogicalOperators.h>
namespace k4::ral {
namespace Cluster {
/**
 * Get type from each item in a collection of Cluster.
 *
 * @param collection Collection of Cluster to look in
 *
 */
ROOT::VecOps::RVec<int>
getType(ROOT::VecOps::RVec<edm4hep::ClusterData> &collection);
/**
 * Get energy from each item in a collection of Cluster.
 *
 * @param collection Collection of Cluster to look in
 *
 */
ROOT::VecOps::RVec<float>
getEnergy(ROOT::VecOps::RVec<edm4hep::ClusterData> &collection);
/**
 * Get intrinsic theta angle from each item in a collection of Cluster.
 *
 * @param collection Collection of Cluster to look in
 *
 */
ROOT::VecOps::RVec<float>
getITheta(ROOT::VecOps::RVec<edm4hep::ClusterData> &collection);
/**
 * Get intrinsic phi angle from each item in a collection of Cluster.
 *
 * @param collection Collection of Cluster to look in
 *
 */
ROOT::VecOps::RVec<float>
getPhi(ROOT::VecOps::RVec<edm4hep::ClusterData> &collection);
/**
 * Get distance to origin from each item in a collection of Cluster.
 *
 * @param collection Collection of Cluster to look in
 *
 */
ROOT::VecOps::RVec<float>
getR(ROOT::VecOps::RVec<edm4hep::ClusterData> &collection);
/**
 * Get x coordinate from each item in a collection of Cluster.
 *
 * @param collection Collection of Cluster to look in
 *
 */
ROOT::VecOps::RVec<float>
getX(ROOT::VecOps::RVec<edm4hep::ClusterData> &collection);
/**
 * Get y coordinate from each item in a collection of Cluster.
 *
 * @param collection Collection of Cluster to look in
 *
 */
ROOT::VecOps::RVec<float>
getY(ROOT::VecOps::RVec<edm4hep::ClusterData> &collection);
/**
 * Get z coordinate from each item in a collection of Cluster.
 *
 * @param collection Collection of Cluster to look in
 *
 */
ROOT::VecOps::RVec<float>
getZ(ROOT::VecOps::RVec<edm4hep::ClusterData> &collection);
/**
 * Get type from each item in a collection of Cluster.
 *
 * @param collection Collection of Cluster to look in
 *
 */
ROOT::VecOps::RVec<int> getType(const edm4hep::ClusterCollection &collection);
/**
 * Get energy from each item in a collection of Cluster.
 *
 * @param collection Collection of Cluster to look in
 *
 */
ROOT::VecOps::RVec<float>
getEnergy(const edm4hep::ClusterCollection &collection);
/**
 * Get intrinsic theta angle from each item in a collection of Cluster.
 *
 * @param collection Collection of Cluster to look in
 *
 */
ROOT::VecOps::RVec<float>
getITheta(const edm4hep::ClusterCollection &collection);
/**
 * Get intrinsic phi angle from each item in a collection of Cluster.
 *
 * @param collection Collection of Cluster to look in
 *
 */
ROOT::VecOps::RVec<float> getPhi(const edm4hep::ClusterCollection &collection);
/**
 * Get distance to origin from each item in a collection of Cluster.
 *
 * @param collection Collection of Cluster to look in
 *
 */
ROOT::VecOps::RVec<float> getR(const edm4hep::ClusterCollection &collection);
/**
 * Get x coordinate from each item in a collection of Cluster.
 *
 * @param collection Collection of Cluster to look in
 *
 */
ROOT::VecOps::RVec<float> getX(const edm4hep::ClusterCollection &collection);
/**
 * Get y coordinate from each item in a collection of Cluster.
 *
 * @param collection Collection of Cluster to look in
 *
 */
ROOT::VecOps::RVec<float> getY(const edm4hep::ClusterCollection &collection);
/**
 * Get z coordinate from each item in a collection of Cluster.
 *
 * @param collection Collection of Cluster to look in
 *
 */
ROOT::VecOps::RVec<float> getZ(const edm4hep::ClusterCollection &collection);
/**
 * Print type from each item in a collection of Cluster.
 *
 * @param collection Collection of Cluster to look in
 *
 */
int printType(ROOT::VecOps::RVec<edm4hep::ClusterData> &collection);
/**
 * Print energy from each item in a collection of Cluster.
 *
 * @param collection Collection of Cluster to look in
 *
 */
int printEnergy(ROOT::VecOps::RVec<edm4hep::ClusterData> &collection);
/**
 * Print intrinsic theta angle from each item in a collection of Cluster.
 *
 * @param collection Collection of Cluster to look in
 *
 */
int printITheta(ROOT::VecOps::RVec<edm4hep::ClusterData> &collection);
/**
 * Print intrinsic phi angle from each item in a collection of Cluster.
 *
 * @param collection Collection of Cluster to look in
 *
 */
int printPhi(ROOT::VecOps::RVec<edm4hep::ClusterData> &collection);
/**
 * Print distance to origin from each item in a collection of Cluster.
 *
 * @param collection Collection of Cluster to look in
 *
 */
int printR(ROOT::VecOps::RVec<edm4hep::ClusterData> &collection);
/**
 * Print x coordinate from each item in a collection of Cluster.
 *
 * @param collection Collection of Cluster to look in
 *
 */
int printX(ROOT::VecOps::RVec<edm4hep::ClusterData> &collection);
/**
 * Print y coordinate from each item in a collection of Cluster.
 *
 * @param collection Collection of Cluster to look in
 *
 */
int printY(ROOT::VecOps::RVec<edm4hep::ClusterData> &collection);
/**
 * Print z coordinate from each item in a collection of Cluster.
 *
 * @param collection Collection of Cluster to look in
 *
 */
int printZ(ROOT::VecOps::RVec<edm4hep::ClusterData> &collection);
/**
 * Print type from each item in a collection of Cluster.
 *
 * @param collection Collection of Cluster to look in
 *
 */
int printType(const edm4hep::ClusterCollection &collection);
/**
 * Print energy from each item in a collection of Cluster.
 *
 * @param collection Collection of Cluster to look in
 *
 */
int printEnergy(const edm4hep::ClusterCollection &collection);
/**
 * Print intrinsic theta angle from each item in a collection of Cluster.
 *
 * @param collection Collection of Cluster to look in
 *
 */
int printITheta(const edm4hep::ClusterCollection &collection);
/**
 * Print intrinsic phi angle from each item in a collection of Cluster.
 *
 * @param collection Collection of Cluster to look in
 *
 */
int printPhi(const edm4hep::ClusterCollection &collection);
/**
 * Print distance to origin from each item in a collection of Cluster.
 *
 * @param collection Collection of Cluster to look in
 *
 */
int printR(const edm4hep::ClusterCollection &collection);
/**
 * Print x coordinate from each item in a collection of Cluster.
 *
 * @param collection Collection of Cluster to look in
 *
 */
int printX(const edm4hep::ClusterCollection &collection);
/**
 * Print y coordinate from each item in a collection of Cluster.
 *
 * @param collection Collection of Cluster to look in
 *
 */
int printY(const edm4hep::ClusterCollection &collection);
/**
 * Print z coordinate from each item in a collection of Cluster.
 *
 * @param collection Collection of Cluster to look in
 *
 */
int printZ(const edm4hep::ClusterCollection &collection);
/**
 * Create boolean mask based on the value of type from each item in a collection
 * of Cluster.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Cluster to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskType(LogicalOperators::ComparisonOperator op, int val,
         ROOT::VecOps::RVec<edm4hep::ClusterData> &collection);
/**
 * Create boolean mask based on the value of energy from each item in a
 * collection of Cluster.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Cluster to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskEnergy(LogicalOperators::ComparisonOperator op, float val,
           ROOT::VecOps::RVec<edm4hep::ClusterData> &collection);
/**
 * Create boolean mask based on the value of intrinsic theta angle from each
 * item in a collection of Cluster.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Cluster to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskITheta(LogicalOperators::ComparisonOperator op, float val,
           ROOT::VecOps::RVec<edm4hep::ClusterData> &collection);
/**
 * Create boolean mask based on the value of intrinsic phi angle from each item
 * in a collection of Cluster.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Cluster to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskPhi(LogicalOperators::ComparisonOperator op, float val,
        ROOT::VecOps::RVec<edm4hep::ClusterData> &collection);
/**
 * Create boolean mask based on the value of distance to origin from each item
 * in a collection of Cluster.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Cluster to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskR(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::ClusterData> &collection);
/**
 * Create boolean mask based on the value of x coordinate from each item in a
 * collection of Cluster.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Cluster to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskX(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::ClusterData> &collection);
/**
 * Create boolean mask based on the value of y coordinate from each item in a
 * collection of Cluster.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Cluster to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskY(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::ClusterData> &collection);
/**
 * Create boolean mask based on the value of z coordinate from each item in a
 * collection of Cluster.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Cluster to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskZ(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::ClusterData> &collection);
/**
 * Create boolean mask based on the value of type from each item in a collection
 * of Cluster.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Cluster to look in
 *
 */
ROOT::VecOps::RVec<bool> maskType(LogicalOperators::ComparisonOperator op,
                                  int val,
                                  const edm4hep::ClusterCollection &collection);
/**
 * Create boolean mask based on the value of energy from each item in a
 * collection of Cluster.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Cluster to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskEnergy(LogicalOperators::ComparisonOperator op, float val,
           const edm4hep::ClusterCollection &collection);
/**
 * Create boolean mask based on the value of intrinsic theta angle from each
 * item in a collection of Cluster.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Cluster to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskITheta(LogicalOperators::ComparisonOperator op, float val,
           const edm4hep::ClusterCollection &collection);
/**
 * Create boolean mask based on the value of intrinsic phi angle from each item
 * in a collection of Cluster.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Cluster to look in
 *
 */
ROOT::VecOps::RVec<bool> maskPhi(LogicalOperators::ComparisonOperator op,
                                 float val,
                                 const edm4hep::ClusterCollection &collection);
/**
 * Create boolean mask based on the value of distance to origin from each item
 * in a collection of Cluster.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Cluster to look in
 *
 */
ROOT::VecOps::RVec<bool> maskR(LogicalOperators::ComparisonOperator op,
                               float val,
                               const edm4hep::ClusterCollection &collection);
/**
 * Create boolean mask based on the value of x coordinate from each item in a
 * collection of Cluster.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Cluster to look in
 *
 */
ROOT::VecOps::RVec<bool> maskX(LogicalOperators::ComparisonOperator op,
                               float val,
                               const edm4hep::ClusterCollection &collection);
/**
 * Create boolean mask based on the value of y coordinate from each item in a
 * collection of Cluster.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Cluster to look in
 *
 */
ROOT::VecOps::RVec<bool> maskY(LogicalOperators::ComparisonOperator op,
                               float val,
                               const edm4hep::ClusterCollection &collection);
/**
 * Create boolean mask based on the value of z coordinate from each item in a
 * collection of Cluster.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Cluster to look in
 *
 */
ROOT::VecOps::RVec<bool> maskZ(LogicalOperators::ComparisonOperator op,
                               float val,
                               const edm4hep::ClusterCollection &collection);
/**
 * Select a subgroup of Cluster based on the value of type.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Cluster to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::ClusterData>
selType(LogicalOperators::ComparisonOperator op, int val,
        ROOT::VecOps::RVec<edm4hep::ClusterData> &collection);
/**
 * Select a subgroup of Cluster based on the value of energy.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Cluster to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::ClusterData>
selEnergy(LogicalOperators::ComparisonOperator op, float val,
          ROOT::VecOps::RVec<edm4hep::ClusterData> &collection);
/**
 * Select a subgroup of Cluster based on the value of intrinsic theta angle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Cluster to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::ClusterData>
selITheta(LogicalOperators::ComparisonOperator op, float val,
          ROOT::VecOps::RVec<edm4hep::ClusterData> &collection);
/**
 * Select a subgroup of Cluster based on the value of intrinsic phi angle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Cluster to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::ClusterData>
selPhi(LogicalOperators::ComparisonOperator op, float val,
       ROOT::VecOps::RVec<edm4hep::ClusterData> &collection);
/**
 * Select a subgroup of Cluster based on the value of distance to origin.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Cluster to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::ClusterData>
selR(LogicalOperators::ComparisonOperator op, float val,
     ROOT::VecOps::RVec<edm4hep::ClusterData> &collection);
/**
 * Select a subgroup of Cluster based on the value of x coordinate.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Cluster to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::ClusterData>
selX(LogicalOperators::ComparisonOperator op, float val,
     ROOT::VecOps::RVec<edm4hep::ClusterData> &collection);
/**
 * Select a subgroup of Cluster based on the value of y coordinate.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Cluster to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::ClusterData>
selY(LogicalOperators::ComparisonOperator op, float val,
     ROOT::VecOps::RVec<edm4hep::ClusterData> &collection);
/**
 * Select a subgroup of Cluster based on the value of z coordinate.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Cluster to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::ClusterData>
selZ(LogicalOperators::ComparisonOperator op, float val,
     ROOT::VecOps::RVec<edm4hep::ClusterData> &collection);
/**
 * Select a subgroup of Cluster based on the value of type.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Cluster to look in
 *
 */
edm4hep::ClusterCollection
selType(LogicalOperators::ComparisonOperator op, int val,
        const edm4hep::ClusterCollection &collection);
/**
 * Select a subgroup of Cluster based on the value of energy.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Cluster to look in
 *
 */
edm4hep::ClusterCollection
selEnergy(LogicalOperators::ComparisonOperator op, float val,
          const edm4hep::ClusterCollection &collection);
/**
 * Select a subgroup of Cluster based on the value of intrinsic theta angle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Cluster to look in
 *
 */
edm4hep::ClusterCollection
selITheta(LogicalOperators::ComparisonOperator op, float val,
          const edm4hep::ClusterCollection &collection);
/**
 * Select a subgroup of Cluster based on the value of intrinsic phi angle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Cluster to look in
 *
 */
edm4hep::ClusterCollection selPhi(LogicalOperators::ComparisonOperator op,
                                  float val,
                                  const edm4hep::ClusterCollection &collection);
/**
 * Select a subgroup of Cluster based on the value of distance to origin.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Cluster to look in
 *
 */
edm4hep::ClusterCollection selR(LogicalOperators::ComparisonOperator op,
                                float val,
                                const edm4hep::ClusterCollection &collection);
/**
 * Select a subgroup of Cluster based on the value of x coordinate.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Cluster to look in
 *
 */
edm4hep::ClusterCollection selX(LogicalOperators::ComparisonOperator op,
                                float val,
                                const edm4hep::ClusterCollection &collection);
/**
 * Select a subgroup of Cluster based on the value of y coordinate.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Cluster to look in
 *
 */
edm4hep::ClusterCollection selY(LogicalOperators::ComparisonOperator op,
                                float val,
                                const edm4hep::ClusterCollection &collection);
/**
 * Select a subgroup of Cluster based on the value of z coordinate.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Cluster to look in
 *
 */
edm4hep::ClusterCollection selZ(LogicalOperators::ComparisonOperator op,
                                float val,
                                const edm4hep::ClusterCollection &collection);
/**
 * Sort a collection of Cluster based on the value of type.
 *
 * @param collection Collection of Cluster to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::ClusterData>
sortType(ROOT::VecOps::RVec<edm4hep::ClusterData> &collection,
         bool reverse = false);
/**
 * Sort a collection of Cluster based on the value of energy.
 *
 * @param collection Collection of Cluster to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::ClusterData>
sortEnergy(ROOT::VecOps::RVec<edm4hep::ClusterData> &collection,
           bool reverse = false);
/**
 * Sort a collection of Cluster based on the value of intrinsic theta angle.
 *
 * @param collection Collection of Cluster to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::ClusterData>
sortITheta(ROOT::VecOps::RVec<edm4hep::ClusterData> &collection,
           bool reverse = false);
/**
 * Sort a collection of Cluster based on the value of intrinsic phi angle.
 *
 * @param collection Collection of Cluster to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::ClusterData>
sortPhi(ROOT::VecOps::RVec<edm4hep::ClusterData> &collection,
        bool reverse = false);
/**
 * Sort a collection of Cluster based on the value of distance to origin.
 *
 * @param collection Collection of Cluster to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::ClusterData>
sortR(ROOT::VecOps::RVec<edm4hep::ClusterData> &collection,
      bool reverse = false);
/**
 * Sort a collection of Cluster based on the value of x coordinate.
 *
 * @param collection Collection of Cluster to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::ClusterData>
sortX(ROOT::VecOps::RVec<edm4hep::ClusterData> &collection,
      bool reverse = false);
/**
 * Sort a collection of Cluster based on the value of y coordinate.
 *
 * @param collection Collection of Cluster to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::ClusterData>
sortY(ROOT::VecOps::RVec<edm4hep::ClusterData> &collection,
      bool reverse = false);
/**
 * Sort a collection of Cluster based on the value of z coordinate.
 *
 * @param collection Collection of Cluster to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::ClusterData>
sortZ(ROOT::VecOps::RVec<edm4hep::ClusterData> &collection,
      bool reverse = false);
/**
 * Sort a collection of Cluster based on the value of type.
 *
 * @param collection Collection of Cluster to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::ClusterCollection sortType(edm4hep::ClusterCollection &collection,
                                    bool reverse = false);
/**
 * Sort a collection of Cluster based on the value of energy.
 *
 * @param collection Collection of Cluster to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::ClusterCollection sortEnergy(edm4hep::ClusterCollection &collection,
                                      bool reverse = false);
/**
 * Sort a collection of Cluster based on the value of intrinsic theta angle.
 *
 * @param collection Collection of Cluster to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::ClusterCollection sortITheta(edm4hep::ClusterCollection &collection,
                                      bool reverse = false);
/**
 * Sort a collection of Cluster based on the value of intrinsic phi angle.
 *
 * @param collection Collection of Cluster to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::ClusterCollection sortPhi(edm4hep::ClusterCollection &collection,
                                   bool reverse = false);
/**
 * Sort a collection of Cluster based on the value of distance to origin.
 *
 * @param collection Collection of Cluster to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::ClusterCollection sortR(edm4hep::ClusterCollection &collection,
                                 bool reverse = false);
/**
 * Sort a collection of Cluster based on the value of x coordinate.
 *
 * @param collection Collection of Cluster to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::ClusterCollection sortX(edm4hep::ClusterCollection &collection,
                                 bool reverse = false);
/**
 * Sort a collection of Cluster based on the value of y coordinate.
 *
 * @param collection Collection of Cluster to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::ClusterCollection sortY(edm4hep::ClusterCollection &collection,
                                 bool reverse = false);
/**
 * Sort a collection of Cluster based on the value of z coordinate.
 *
 * @param collection Collection of Cluster to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::ClusterCollection sortZ(edm4hep::ClusterCollection &collection,
                                 bool reverse = false);
/**
 * Get the collection of Cluster related to a Cluster.
 *
 * @param item Cluster from which to look for the related collection.
 * @param relatedCollection Complete collection of Cluster to filter
 *
 */
ROOT::VecOps::RVec<edm4hep::ClusterData>
getClusters(edm4hep::ClusterData &item,
            ROOT::VecOps::RVec<edm4hep::ClusterData> &relatedCollection);
/**
 * Get the collection of CalorimeterHit related to a Cluster.
 *
 * @param item Cluster from which to look for the related collection.
 * @param relatedCollection Complete collection of CalorimeterHit to filter
 *
 */
ROOT::VecOps::RVec<edm4hep::CalorimeterHitData>
getHits(edm4hep::ClusterData &item,
        ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &relatedCollection);
/**
 * Get the collection of Cluster related to a Cluster.
 *
 * @param item Cluster to look in for related collection
 *
 */
edm4hep::ClusterCollection getClusters(const edm4hep::Cluster &item);
/**
 * Get the collection of CalorimeterHit related to a Cluster.
 *
 * @param item Cluster to look in for related collection
 *
 */
edm4hep::CalorimeterHitCollection getHits(const edm4hep::Cluster &item);
} // namespace Cluster
} // namespace k4::ral
