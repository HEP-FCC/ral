#include <Math/Vector3D.h>
#include <cmath>
#include <edm4hep/ReconstructedParticleCollection.h>
#include <edm4hep/VertexCollection.h>
#include <iostream>
#include <ral/LogicalOperators.h>
namespace k4::ral {
namespace Vertex {
/**
 * Get type from each item in a collection of Vertex.
 *
 * @param collection Collection of Vertex to look in
 *
 */
ROOT::VecOps::RVec<int>
getType(ROOT::VecOps::RVec<edm4hep::VertexData> collection);
/**
 * Get chi^2 from each item in a collection of Vertex.
 *
 * @param collection Collection of Vertex to look in
 *
 */
ROOT::VecOps::RVec<float>
getChi2(ROOT::VecOps::RVec<edm4hep::VertexData> collection);
/**
 * Get degrees of freedom from each item in a collection of Vertex.
 *
 * @param collection Collection of Vertex to look in
 *
 */
ROOT::VecOps::RVec<int>
getNdf(ROOT::VecOps::RVec<edm4hep::VertexData> collection);
/**
 * Get algorithm type from each item in a collection of Vertex.
 *
 * @param collection Collection of Vertex to look in
 *
 */
ROOT::VecOps::RVec<int>
getAlgorithmType(ROOT::VecOps::RVec<edm4hep::VertexData> collection);
/**
 * Get distance to origin from each item in a collection of Vertex.
 *
 * @param collection Collection of Vertex to look in
 *
 */
ROOT::VecOps::RVec<float>
getR(ROOT::VecOps::RVec<edm4hep::VertexData> collection);
/**
 * Get x coordinate from each item in a collection of Vertex.
 *
 * @param collection Collection of Vertex to look in
 *
 */
ROOT::VecOps::RVec<float>
getX(ROOT::VecOps::RVec<edm4hep::VertexData> collection);
/**
 * Get y coordinate from each item in a collection of Vertex.
 *
 * @param collection Collection of Vertex to look in
 *
 */
ROOT::VecOps::RVec<float>
getY(ROOT::VecOps::RVec<edm4hep::VertexData> collection);
/**
 * Get z coordinate from each item in a collection of Vertex.
 *
 * @param collection Collection of Vertex to look in
 *
 */
ROOT::VecOps::RVec<float>
getZ(ROOT::VecOps::RVec<edm4hep::VertexData> collection);
/**
 * Get type from each item in a collection of Vertex.
 *
 * @param collection Collection of Vertex to look in
 *
 */
ROOT::VecOps::RVec<int> getType(const edm4hep::VertexCollection &collection);
/**
 * Get chi^2 from each item in a collection of Vertex.
 *
 * @param collection Collection of Vertex to look in
 *
 */
ROOT::VecOps::RVec<float> getChi2(const edm4hep::VertexCollection &collection);
/**
 * Get degrees of freedom from each item in a collection of Vertex.
 *
 * @param collection Collection of Vertex to look in
 *
 */
ROOT::VecOps::RVec<int> getNdf(const edm4hep::VertexCollection &collection);
/**
 * Get algorithm type from each item in a collection of Vertex.
 *
 * @param collection Collection of Vertex to look in
 *
 */
ROOT::VecOps::RVec<int>
getAlgorithmType(const edm4hep::VertexCollection &collection);
/**
 * Get distance to origin from each item in a collection of Vertex.
 *
 * @param collection Collection of Vertex to look in
 *
 */
ROOT::VecOps::RVec<float> getR(const edm4hep::VertexCollection &collection);
/**
 * Get x coordinate from each item in a collection of Vertex.
 *
 * @param collection Collection of Vertex to look in
 *
 */
ROOT::VecOps::RVec<float> getX(const edm4hep::VertexCollection &collection);
/**
 * Get y coordinate from each item in a collection of Vertex.
 *
 * @param collection Collection of Vertex to look in
 *
 */
ROOT::VecOps::RVec<float> getY(const edm4hep::VertexCollection &collection);
/**
 * Get z coordinate from each item in a collection of Vertex.
 *
 * @param collection Collection of Vertex to look in
 *
 */
ROOT::VecOps::RVec<float> getZ(const edm4hep::VertexCollection &collection);
/**
 * Print type from each item in a collection of Vertex.
 *
 * @param collection Collection of Vertex to look in
 *
 */
int printType(ROOT::VecOps::RVec<edm4hep::VertexData> collection);
/**
 * Print chi^2 from each item in a collection of Vertex.
 *
 * @param collection Collection of Vertex to look in
 *
 */
int printChi2(ROOT::VecOps::RVec<edm4hep::VertexData> collection);
/**
 * Print degrees of freedom from each item in a collection of Vertex.
 *
 * @param collection Collection of Vertex to look in
 *
 */
int printNdf(ROOT::VecOps::RVec<edm4hep::VertexData> collection);
/**
 * Print algorithm type from each item in a collection of Vertex.
 *
 * @param collection Collection of Vertex to look in
 *
 */
int printAlgorithmType(ROOT::VecOps::RVec<edm4hep::VertexData> collection);
/**
 * Print distance to origin from each item in a collection of Vertex.
 *
 * @param collection Collection of Vertex to look in
 *
 */
int printR(ROOT::VecOps::RVec<edm4hep::VertexData> collection);
/**
 * Print x coordinate from each item in a collection of Vertex.
 *
 * @param collection Collection of Vertex to look in
 *
 */
int printX(ROOT::VecOps::RVec<edm4hep::VertexData> collection);
/**
 * Print y coordinate from each item in a collection of Vertex.
 *
 * @param collection Collection of Vertex to look in
 *
 */
int printY(ROOT::VecOps::RVec<edm4hep::VertexData> collection);
/**
 * Print z coordinate from each item in a collection of Vertex.
 *
 * @param collection Collection of Vertex to look in
 *
 */
int printZ(ROOT::VecOps::RVec<edm4hep::VertexData> collection);
/**
 * Print type from each item in a collection of Vertex.
 *
 * @param collection Collection of Vertex to look in
 *
 */
int printType(const edm4hep::VertexCollection &collection);
/**
 * Print chi^2 from each item in a collection of Vertex.
 *
 * @param collection Collection of Vertex to look in
 *
 */
int printChi2(const edm4hep::VertexCollection &collection);
/**
 * Print degrees of freedom from each item in a collection of Vertex.
 *
 * @param collection Collection of Vertex to look in
 *
 */
int printNdf(const edm4hep::VertexCollection &collection);
/**
 * Print algorithm type from each item in a collection of Vertex.
 *
 * @param collection Collection of Vertex to look in
 *
 */
int printAlgorithmType(const edm4hep::VertexCollection &collection);
/**
 * Print distance to origin from each item in a collection of Vertex.
 *
 * @param collection Collection of Vertex to look in
 *
 */
int printR(const edm4hep::VertexCollection &collection);
/**
 * Print x coordinate from each item in a collection of Vertex.
 *
 * @param collection Collection of Vertex to look in
 *
 */
int printX(const edm4hep::VertexCollection &collection);
/**
 * Print y coordinate from each item in a collection of Vertex.
 *
 * @param collection Collection of Vertex to look in
 *
 */
int printY(const edm4hep::VertexCollection &collection);
/**
 * Print z coordinate from each item in a collection of Vertex.
 *
 * @param collection Collection of Vertex to look in
 *
 */
int printZ(const edm4hep::VertexCollection &collection);
/**
 * Create boolean mask based on the value of type from each item in a collection
 * of Vertex.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Vertex to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskType(LogicalOperators::ComparisonOperator op, int val,
         ROOT::VecOps::RVec<edm4hep::VertexData> collection);
/**
 * Create boolean mask based on the value of chi^2 from each item in a
 * collection of Vertex.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Vertex to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskChi2(LogicalOperators::ComparisonOperator op, float val,
         ROOT::VecOps::RVec<edm4hep::VertexData> collection);
/**
 * Create boolean mask based on the value of degrees of freedom from each item
 * in a collection of Vertex.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Vertex to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskNdf(LogicalOperators::ComparisonOperator op, int val,
        ROOT::VecOps::RVec<edm4hep::VertexData> collection);
/**
 * Create boolean mask based on the value of algorithm type from each item in a
 * collection of Vertex.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Vertex to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskAlgorithmType(LogicalOperators::ComparisonOperator op, int val,
                  ROOT::VecOps::RVec<edm4hep::VertexData> collection);
/**
 * Create boolean mask based on the value of distance to origin from each item
 * in a collection of Vertex.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Vertex to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskR(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::VertexData> collection);
/**
 * Create boolean mask based on the value of x coordinate from each item in a
 * collection of Vertex.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Vertex to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskX(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::VertexData> collection);
/**
 * Create boolean mask based on the value of y coordinate from each item in a
 * collection of Vertex.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Vertex to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskY(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::VertexData> collection);
/**
 * Create boolean mask based on the value of z coordinate from each item in a
 * collection of Vertex.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Vertex to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskZ(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::VertexData> collection);
/**
 * Create boolean mask based on the value of type from each item in a collection
 * of Vertex.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Vertex to look in
 *
 */
ROOT::VecOps::RVec<bool> maskType(LogicalOperators::ComparisonOperator op,
                                  int val,
                                  const edm4hep::VertexCollection &collection);
/**
 * Create boolean mask based on the value of chi^2 from each item in a
 * collection of Vertex.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Vertex to look in
 *
 */
ROOT::VecOps::RVec<bool> maskChi2(LogicalOperators::ComparisonOperator op,
                                  float val,
                                  const edm4hep::VertexCollection &collection);
/**
 * Create boolean mask based on the value of degrees of freedom from each item
 * in a collection of Vertex.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Vertex to look in
 *
 */
ROOT::VecOps::RVec<bool> maskNdf(LogicalOperators::ComparisonOperator op,
                                 int val,
                                 const edm4hep::VertexCollection &collection);
/**
 * Create boolean mask based on the value of algorithm type from each item in a
 * collection of Vertex.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Vertex to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskAlgorithmType(LogicalOperators::ComparisonOperator op, int val,
                  const edm4hep::VertexCollection &collection);
/**
 * Create boolean mask based on the value of distance to origin from each item
 * in a collection of Vertex.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Vertex to look in
 *
 */
ROOT::VecOps::RVec<bool> maskR(LogicalOperators::ComparisonOperator op,
                               float val,
                               const edm4hep::VertexCollection &collection);
/**
 * Create boolean mask based on the value of x coordinate from each item in a
 * collection of Vertex.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Vertex to look in
 *
 */
ROOT::VecOps::RVec<bool> maskX(LogicalOperators::ComparisonOperator op,
                               float val,
                               const edm4hep::VertexCollection &collection);
/**
 * Create boolean mask based on the value of y coordinate from each item in a
 * collection of Vertex.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Vertex to look in
 *
 */
ROOT::VecOps::RVec<bool> maskY(LogicalOperators::ComparisonOperator op,
                               float val,
                               const edm4hep::VertexCollection &collection);
/**
 * Create boolean mask based on the value of z coordinate from each item in a
 * collection of Vertex.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Vertex to look in
 *
 */
ROOT::VecOps::RVec<bool> maskZ(LogicalOperators::ComparisonOperator op,
                               float val,
                               const edm4hep::VertexCollection &collection);
/**
 * Select a subgroup of Vertex based on the value of type.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Vertex to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::VertexData>
selType(LogicalOperators::ComparisonOperator op, int val,
        ROOT::VecOps::RVec<edm4hep::VertexData> collection);
/**
 * Select a subgroup of Vertex based on the value of chi^2.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Vertex to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::VertexData>
selChi2(LogicalOperators::ComparisonOperator op, float val,
        ROOT::VecOps::RVec<edm4hep::VertexData> collection);
/**
 * Select a subgroup of Vertex based on the value of degrees of freedom.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Vertex to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::VertexData>
selNdf(LogicalOperators::ComparisonOperator op, int val,
       ROOT::VecOps::RVec<edm4hep::VertexData> collection);
/**
 * Select a subgroup of Vertex based on the value of algorithm type.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Vertex to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::VertexData>
selAlgorithmType(LogicalOperators::ComparisonOperator op, int val,
                 ROOT::VecOps::RVec<edm4hep::VertexData> collection);
/**
 * Select a subgroup of Vertex based on the value of distance to origin.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Vertex to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::VertexData>
selR(LogicalOperators::ComparisonOperator op, float val,
     ROOT::VecOps::RVec<edm4hep::VertexData> collection);
/**
 * Select a subgroup of Vertex based on the value of x coordinate.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Vertex to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::VertexData>
selX(LogicalOperators::ComparisonOperator op, float val,
     ROOT::VecOps::RVec<edm4hep::VertexData> collection);
/**
 * Select a subgroup of Vertex based on the value of y coordinate.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Vertex to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::VertexData>
selY(LogicalOperators::ComparisonOperator op, float val,
     ROOT::VecOps::RVec<edm4hep::VertexData> collection);
/**
 * Select a subgroup of Vertex based on the value of z coordinate.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Vertex to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::VertexData>
selZ(LogicalOperators::ComparisonOperator op, float val,
     ROOT::VecOps::RVec<edm4hep::VertexData> collection);
/**
 * Select a subgroup of Vertex based on the value of type.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Vertex to look in
 *
 */
edm4hep::VertexCollection selType(LogicalOperators::ComparisonOperator op,
                                  int val,
                                  const edm4hep::VertexCollection &collection);
/**
 * Select a subgroup of Vertex based on the value of chi^2.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Vertex to look in
 *
 */
edm4hep::VertexCollection selChi2(LogicalOperators::ComparisonOperator op,
                                  float val,
                                  const edm4hep::VertexCollection &collection);
/**
 * Select a subgroup of Vertex based on the value of degrees of freedom.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Vertex to look in
 *
 */
edm4hep::VertexCollection selNdf(LogicalOperators::ComparisonOperator op,
                                 int val,
                                 const edm4hep::VertexCollection &collection);
/**
 * Select a subgroup of Vertex based on the value of algorithm type.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Vertex to look in
 *
 */
edm4hep::VertexCollection
selAlgorithmType(LogicalOperators::ComparisonOperator op, int val,
                 const edm4hep::VertexCollection &collection);
/**
 * Select a subgroup of Vertex based on the value of distance to origin.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Vertex to look in
 *
 */
edm4hep::VertexCollection selR(LogicalOperators::ComparisonOperator op,
                               float val,
                               const edm4hep::VertexCollection &collection);
/**
 * Select a subgroup of Vertex based on the value of x coordinate.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Vertex to look in
 *
 */
edm4hep::VertexCollection selX(LogicalOperators::ComparisonOperator op,
                               float val,
                               const edm4hep::VertexCollection &collection);
/**
 * Select a subgroup of Vertex based on the value of y coordinate.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Vertex to look in
 *
 */
edm4hep::VertexCollection selY(LogicalOperators::ComparisonOperator op,
                               float val,
                               const edm4hep::VertexCollection &collection);
/**
 * Select a subgroup of Vertex based on the value of z coordinate.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of Vertex to look in
 *
 */
edm4hep::VertexCollection selZ(LogicalOperators::ComparisonOperator op,
                               float val,
                               const edm4hep::VertexCollection &collection);
/**
 * Sort a collection of Vertex based on the value of type.
 *
 * @param collection Collection of Vertex to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::VertexData>
sortType(ROOT::VecOps::RVec<edm4hep::VertexData> collection,
         bool reverse = false);
/**
 * Sort a collection of Vertex based on the value of chi^2.
 *
 * @param collection Collection of Vertex to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::VertexData>
sortChi2(ROOT::VecOps::RVec<edm4hep::VertexData> collection,
         bool reverse = false);
/**
 * Sort a collection of Vertex based on the value of degrees of freedom.
 *
 * @param collection Collection of Vertex to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::VertexData>
sortNdf(ROOT::VecOps::RVec<edm4hep::VertexData> collection,
        bool reverse = false);
/**
 * Sort a collection of Vertex based on the value of algorithm type.
 *
 * @param collection Collection of Vertex to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::VertexData>
sortAlgorithmType(ROOT::VecOps::RVec<edm4hep::VertexData> collection,
                  bool reverse = false);
/**
 * Sort a collection of Vertex based on the value of distance to origin.
 *
 * @param collection Collection of Vertex to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::VertexData>
sortR(ROOT::VecOps::RVec<edm4hep::VertexData> collection, bool reverse = false);
/**
 * Sort a collection of Vertex based on the value of b.
 *
 * @param collection Collection of Vertex to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::VertexData>
sortX(ROOT::VecOps::RVec<edm4hep::VertexData> collection, bool reverse = false);
/**
 * Sort a collection of Vertex based on the value of b.
 *
 * @param collection Collection of Vertex to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::VertexData>
sortY(ROOT::VecOps::RVec<edm4hep::VertexData> collection, bool reverse = false);
/**
 * Sort a collection of Vertex based on the value of z coordinate.
 *
 * @param collection Collection of Vertex to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::VertexData>
sortZ(ROOT::VecOps::RVec<edm4hep::VertexData> collection, bool reverse = false);
/**
 * Sort a collection of Vertex based on the value of type.
 *
 * @param collection Collection of Vertex to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::VertexCollection sortType(edm4hep::VertexCollection &collection,
                                   bool reverse = false);
/**
 * Sort a collection of Vertex based on the value of chi^2.
 *
 * @param collection Collection of Vertex to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::VertexCollection sortChi2(edm4hep::VertexCollection &collection,
                                   bool reverse = false);
/**
 * Sort a collection of Vertex based on the value of degrees of freedom.
 *
 * @param collection Collection of Vertex to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::VertexCollection sortNdf(edm4hep::VertexCollection &collection,
                                  bool reverse = false);
/**
 * Sort a collection of Vertex based on the value of algorithm type.
 *
 * @param collection Collection of Vertex to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::VertexCollection
sortAlgorithmType(edm4hep::VertexCollection &collection, bool reverse = false);
/**
 * Sort a collection of Vertex based on the value of distance to origin.
 *
 * @param collection Collection of Vertex to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::VertexCollection sortR(edm4hep::VertexCollection &collection,
                                bool reverse = false);
/**
 * Sort a collection of Vertex based on the value of x coordinate.
 *
 * @param collection Collection of Vertex to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::VertexCollection sortX(edm4hep::VertexCollection &collection,
                                bool reverse = false);
/**
 * Sort a collection of Vertex based on the value of y coordinate.
 *
 * @param collection Collection of Vertex to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::VertexCollection sortY(edm4hep::VertexCollection &collection,
                                bool reverse = false);
/**
 * Sort a collection of Vertex based on the value of z coordinate.
 *
 * @param collection Collection of Vertex to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::VertexCollection sortZ(edm4hep::VertexCollection &collection,
                                bool reverse = false);
/**
 * Get the collection of ReconstructedParticle related to a Vertex.
 *
 * @param item Vertex from which to look for the related collection.
 * @param relatedCollection Complete collection of ReconstructedParticle to
 * filter
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> getParticles(
    edm4hep::VertexData item,
    ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> relatedCollection);
/**
 * Get the collection of ReconstructedParticle related to a Vertex.
 *
 * @param item Vertex to look in for related collection
 *
 */
edm4hep::ReconstructedParticleCollection
getParticles(const edm4hep::Vertex &item);
} // namespace Vertex
} // namespace k4::ral
