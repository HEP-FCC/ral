#include <Math/Vector3D.h>
#include <Math/Vector4D.h>
#include <cmath>
#include <edm4hep/ClusterCollection.h>
#include <edm4hep/ReconstructedParticleCollection.h>
#include <edm4hep/TrackCollection.h>
#include <iostream>
#include <ral/LogicalOperators.h>
namespace k4::ral {
namespace ReconstructedParticle {
/**
 * Get momentum from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getP(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Get transverse momentum from each item in a collection of
 * ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getPt(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Get x momentum from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getPx(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Get y momentum from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getPy(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Get z momentum from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getPz(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Get pseudorapidity from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getEta(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Get rapidity from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getRapidity(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Get polar angle from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getTheta(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Get azimutal angle from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getPhi(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Get distance to origin from each item in a collection of
 * ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getR(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Get x coordinate from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getX(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Get y coordinate from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getY(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Get z coordinate from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getZ(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Get energy from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getE(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Get mass from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getM(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Get charge from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getQ(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Get absolute charge from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getAbsq(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Get pdg from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<int>
getPdg(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Get absolute pdg from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<int>
getAbspdg(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Get momentum from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getP(const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Get transverse momentum from each item in a collection of
 * ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getPt(const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Get x momentum from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getPx(const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Get y momentum from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getPy(const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Get z momentum from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getPz(const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Get pseudorapidity from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getEta(const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Get rapidity from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getRapidity(const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Get polar angle from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getTheta(const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Get azimutal angle from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getPhi(const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Get distance to origin from each item in a collection of
 * ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getR(const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Get x coordinate from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getX(const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Get y coordinate from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getY(const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Get z coordinate from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getZ(const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Get energy from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getE(const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Get mass from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getM(const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Get charge from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getQ(const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Get absolute charge from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getAbsq(const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Get pdg from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<int>
getPdg(const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Get absolute pdg from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<int>
getAbspdg(const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Print momentum from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
int printP(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Print transverse momentum from each item in a collection of
 * ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
int printPt(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Print x momentum from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
int printPx(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Print y momentum from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
int printPy(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Print z momentum from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
int printPz(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Print pseudorapidity from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
int printEta(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Print rapidity from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
int printRapidity(
    ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Print polar angle from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
int printTheta(
    ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Print azimutal angle from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
int printPhi(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Print distance to origin from each item in a collection of
 * ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
int printR(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Print x coordinate from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
int printX(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Print y coordinate from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
int printY(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Print z coordinate from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
int printZ(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Print energy from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
int printE(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Print mass from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
int printM(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Print charge from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
int printQ(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Print absolute charge from each item in a collection of
 * ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
int printAbsq(
    ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Print pdg from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
int printPdg(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Print absolute pdg from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
int printAbspdg(
    ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Print momentum from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
int printP(const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Print transverse momentum from each item in a collection of
 * ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
int printPt(const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Print x momentum from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
int printPx(const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Print y momentum from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
int printPy(const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Print z momentum from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
int printPz(const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Print pseudorapidity from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
int printEta(const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Print rapidity from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
int printRapidity(const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Print polar angle from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
int printTheta(const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Print azimutal angle from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
int printPhi(const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Print distance to origin from each item in a collection of
 * ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
int printR(const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Print x coordinate from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
int printX(const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Print y coordinate from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
int printY(const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Print z coordinate from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
int printZ(const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Print energy from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
int printE(const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Print mass from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
int printM(const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Print charge from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
int printQ(const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Print absolute charge from each item in a collection of
 * ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
int printAbsq(const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Print pdg from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
int printPdg(const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Print absolute pdg from each item in a collection of ReconstructedParticle.
 *
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
int printAbspdg(const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Create boolean mask based on the value of momentum from each item in a
 * collection of ReconstructedParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskP(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Create boolean mask based on the value of transverse momentum from each item
 * in a collection of ReconstructedParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskPt(LogicalOperators::ComparisonOperator op, float val,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Create boolean mask based on the value of x momentum from each item in a
 * collection of ReconstructedParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskPx(LogicalOperators::ComparisonOperator op, float val,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Create boolean mask based on the value of y momentum from each item in a
 * collection of ReconstructedParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskPy(LogicalOperators::ComparisonOperator op, float val,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Create boolean mask based on the value of z momentum from each item in a
 * collection of ReconstructedParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskPz(LogicalOperators::ComparisonOperator op, float val,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Create boolean mask based on the value of pseudorapidity from each item in a
 * collection of ReconstructedParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskEta(LogicalOperators::ComparisonOperator op, float val,
        ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Create boolean mask based on the value of rapidity from each item in a
 * collection of ReconstructedParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskRapidity(LogicalOperators::ComparisonOperator op, float val,
             ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Create boolean mask based on the value of polar angle from each item in a
 * collection of ReconstructedParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskTheta(LogicalOperators::ComparisonOperator op, float val,
          ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Create boolean mask based on the value of azimutal angle from each item in a
 * collection of ReconstructedParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskPhi(LogicalOperators::ComparisonOperator op, float val,
        ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Create boolean mask based on the value of distance to origin from each item
 * in a collection of ReconstructedParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskR(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Create boolean mask based on the value of x coordinate from each item in a
 * collection of ReconstructedParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskX(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Create boolean mask based on the value of y coordinate from each item in a
 * collection of ReconstructedParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskY(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Create boolean mask based on the value of z coordinate from each item in a
 * collection of ReconstructedParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskZ(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Create boolean mask based on the value of energy from each item in a
 * collection of ReconstructedParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskE(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Create boolean mask based on the value of mass from each item in a collection
 * of ReconstructedParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskM(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Create boolean mask based on the value of charge from each item in a
 * collection of ReconstructedParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskQ(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Create boolean mask based on the value of absolute charge from each item in a
 * collection of ReconstructedParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskAbsq(LogicalOperators::ComparisonOperator op, float val,
         ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Create boolean mask based on the value of pdg from each item in a collection
 * of ReconstructedParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskPdg(LogicalOperators::ComparisonOperator op, int val,
        ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Create boolean mask based on the value of absolute pdg from each item in a
 * collection of ReconstructedParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskAbspdg(LogicalOperators::ComparisonOperator op, int val,
           ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Create boolean mask based on the value of momentum from each item in a
 * collection of ReconstructedParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskP(LogicalOperators::ComparisonOperator op, float val,
      const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Create boolean mask based on the value of transverse momentum from each item
 * in a collection of ReconstructedParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskPt(LogicalOperators::ComparisonOperator op, float val,
       const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Create boolean mask based on the value of x momentum from each item in a
 * collection of ReconstructedParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskPx(LogicalOperators::ComparisonOperator op, float val,
       const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Create boolean mask based on the value of y momentum from each item in a
 * collection of ReconstructedParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskPy(LogicalOperators::ComparisonOperator op, float val,
       const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Create boolean mask based on the value of z momentum from each item in a
 * collection of ReconstructedParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskPz(LogicalOperators::ComparisonOperator op, float val,
       const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Create boolean mask based on the value of pseudorapidity from each item in a
 * collection of ReconstructedParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskEta(LogicalOperators::ComparisonOperator op, float val,
        const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Create boolean mask based on the value of rapidity from each item in a
 * collection of ReconstructedParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskRapidity(LogicalOperators::ComparisonOperator op, float val,
             const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Create boolean mask based on the value of polar angle from each item in a
 * collection of ReconstructedParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskTheta(LogicalOperators::ComparisonOperator op, float val,
          const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Create boolean mask based on the value of azimutal angle from each item in a
 * collection of ReconstructedParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskPhi(LogicalOperators::ComparisonOperator op, float val,
        const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Create boolean mask based on the value of distance to origin from each item
 * in a collection of ReconstructedParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskR(LogicalOperators::ComparisonOperator op, float val,
      const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Create boolean mask based on the value of x coordinate from each item in a
 * collection of ReconstructedParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskX(LogicalOperators::ComparisonOperator op, float val,
      const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Create boolean mask based on the value of y coordinate from each item in a
 * collection of ReconstructedParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskY(LogicalOperators::ComparisonOperator op, float val,
      const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Create boolean mask based on the value of z coordinate from each item in a
 * collection of ReconstructedParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskZ(LogicalOperators::ComparisonOperator op, float val,
      const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Create boolean mask based on the value of energy from each item in a
 * collection of ReconstructedParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskE(LogicalOperators::ComparisonOperator op, float val,
      const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Create boolean mask based on the value of mass from each item in a collection
 * of ReconstructedParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskM(LogicalOperators::ComparisonOperator op, float val,
      const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Create boolean mask based on the value of charge from each item in a
 * collection of ReconstructedParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskQ(LogicalOperators::ComparisonOperator op, float val,
      const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Create boolean mask based on the value of absolute charge from each item in a
 * collection of ReconstructedParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskAbsq(LogicalOperators::ComparisonOperator op, float val,
         const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Create boolean mask based on the value of pdg from each item in a collection
 * of ReconstructedParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskPdg(LogicalOperators::ComparisonOperator op, int val,
        const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Create boolean mask based on the value of absolute pdg from each item in a
 * collection of ReconstructedParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskAbspdg(LogicalOperators::ComparisonOperator op, int val,
           const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Select a subgroup of ReconstructedParticle based on the value of momentum.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
selP(LogicalOperators::ComparisonOperator op, float val,
     ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Select a subgroup of ReconstructedParticle based on the value of transverse
 * momentum.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
selPt(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Select a subgroup of ReconstructedParticle based on the value of x momentum.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
selPx(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Select a subgroup of ReconstructedParticle based on the value of y momentum.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
selPy(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Select a subgroup of ReconstructedParticle based on the value of z momentum.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
selPz(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Select a subgroup of ReconstructedParticle based on the value of
 * pseudorapidity.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
selEta(LogicalOperators::ComparisonOperator op, float val,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Select a subgroup of ReconstructedParticle based on the value of rapidity.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
selRapidity(LogicalOperators::ComparisonOperator op, float val,
            ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Select a subgroup of ReconstructedParticle based on the value of polar angle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
selTheta(LogicalOperators::ComparisonOperator op, float val,
         ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Select a subgroup of ReconstructedParticle based on the value of azimutal
 * angle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
selPhi(LogicalOperators::ComparisonOperator op, float val,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Select a subgroup of ReconstructedParticle based on the value of distance to
 * origin.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
selR(LogicalOperators::ComparisonOperator op, float val,
     ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Select a subgroup of ReconstructedParticle based on the value of x
 * coordinate.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
selX(LogicalOperators::ComparisonOperator op, float val,
     ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Select a subgroup of ReconstructedParticle based on the value of y
 * coordinate.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
selY(LogicalOperators::ComparisonOperator op, float val,
     ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Select a subgroup of ReconstructedParticle based on the value of z
 * coordinate.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
selZ(LogicalOperators::ComparisonOperator op, float val,
     ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Select a subgroup of ReconstructedParticle based on the value of energy.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
selE(LogicalOperators::ComparisonOperator op, float val,
     ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Select a subgroup of ReconstructedParticle based on the value of mass.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
selM(LogicalOperators::ComparisonOperator op, float val,
     ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Select a subgroup of ReconstructedParticle based on the value of charge.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
selQ(LogicalOperators::ComparisonOperator op, float val,
     ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Select a subgroup of ReconstructedParticle based on the value of absolute
 * charge.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
selAbsq(LogicalOperators::ComparisonOperator op, float val,
        ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Select a subgroup of ReconstructedParticle based on the value of pdg.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
selPdg(LogicalOperators::ComparisonOperator op, int val,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Select a subgroup of ReconstructedParticle based on the value of absolute
 * pdg.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
selAbspdg(LogicalOperators::ComparisonOperator op, int val,
          ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection);
/**
 * Select a subgroup of ReconstructedParticle based on the value of momentum.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
edm4hep::ReconstructedParticleCollection
selP(LogicalOperators::ComparisonOperator op, float val,
     const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Select a subgroup of ReconstructedParticle based on the value of transverse
 * momentum.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
edm4hep::ReconstructedParticleCollection
selPt(LogicalOperators::ComparisonOperator op, float val,
      const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Select a subgroup of ReconstructedParticle based on the value of x momentum.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
edm4hep::ReconstructedParticleCollection
selPx(LogicalOperators::ComparisonOperator op, float val,
      const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Select a subgroup of ReconstructedParticle based on the value of y momentum.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
edm4hep::ReconstructedParticleCollection
selPy(LogicalOperators::ComparisonOperator op, float val,
      const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Select a subgroup of ReconstructedParticle based on the value of z momentum.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
edm4hep::ReconstructedParticleCollection
selPz(LogicalOperators::ComparisonOperator op, float val,
      const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Select a subgroup of ReconstructedParticle based on the value of
 * pseudorapidity.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
edm4hep::ReconstructedParticleCollection
selEta(LogicalOperators::ComparisonOperator op, float val,
       const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Select a subgroup of ReconstructedParticle based on the value of rapidity.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
edm4hep::ReconstructedParticleCollection
selRapidity(LogicalOperators::ComparisonOperator op, float val,
            const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Select a subgroup of ReconstructedParticle based on the value of polar angle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
edm4hep::ReconstructedParticleCollection
selTheta(LogicalOperators::ComparisonOperator op, float val,
         const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Select a subgroup of ReconstructedParticle based on the value of azimutal
 * angle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
edm4hep::ReconstructedParticleCollection
selPhi(LogicalOperators::ComparisonOperator op, float val,
       const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Select a subgroup of ReconstructedParticle based on the value of distance to
 * origin.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
edm4hep::ReconstructedParticleCollection
selR(LogicalOperators::ComparisonOperator op, float val,
     const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Select a subgroup of ReconstructedParticle based on the value of x
 * coordinate.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
edm4hep::ReconstructedParticleCollection
selX(LogicalOperators::ComparisonOperator op, float val,
     const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Select a subgroup of ReconstructedParticle based on the value of y
 * coordinate.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
edm4hep::ReconstructedParticleCollection
selY(LogicalOperators::ComparisonOperator op, float val,
     const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Select a subgroup of ReconstructedParticle based on the value of z
 * coordinate.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
edm4hep::ReconstructedParticleCollection
selZ(LogicalOperators::ComparisonOperator op, float val,
     const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Select a subgroup of ReconstructedParticle based on the value of energy.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
edm4hep::ReconstructedParticleCollection
selE(LogicalOperators::ComparisonOperator op, float val,
     const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Select a subgroup of ReconstructedParticle based on the value of mass.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
edm4hep::ReconstructedParticleCollection
selM(LogicalOperators::ComparisonOperator op, float val,
     const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Select a subgroup of ReconstructedParticle based on the value of charge.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
edm4hep::ReconstructedParticleCollection
selQ(LogicalOperators::ComparisonOperator op, float val,
     const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Select a subgroup of ReconstructedParticle based on the value of absolute
 * charge.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
edm4hep::ReconstructedParticleCollection
selAbsq(LogicalOperators::ComparisonOperator op, float val,
        const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Select a subgroup of ReconstructedParticle based on the value of pdg.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
edm4hep::ReconstructedParticleCollection
selPdg(LogicalOperators::ComparisonOperator op, int val,
       const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Select a subgroup of ReconstructedParticle based on the value of absolute
 * pdg.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of ReconstructedParticle to look in
 *
 */
edm4hep::ReconstructedParticleCollection
selAbspdg(LogicalOperators::ComparisonOperator op, int val,
          const edm4hep::ReconstructedParticleCollection &collection);
/**
 * Sort a collection of ReconstructedParticle based on the value of momentum.
 *
 * @param collection Collection of ReconstructedParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
sortP(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection,
      bool reverse = false);
/**
 * Sort a collection of ReconstructedParticle based on the value of transverse
 * momentum.
 *
 * @param collection Collection of ReconstructedParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
sortPt(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection,
       bool reverse = false);
/**
 * Sort a collection of ReconstructedParticle based on the value of x momentum.
 *
 * @param collection Collection of ReconstructedParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
sortPx(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection,
       bool reverse = false);
/**
 * Sort a collection of ReconstructedParticle based on the value of y momentum.
 *
 * @param collection Collection of ReconstructedParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
sortPy(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection,
       bool reverse = false);
/**
 * Sort a collection of ReconstructedParticle based on the value of z momentum.
 *
 * @param collection Collection of ReconstructedParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
sortPz(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection,
       bool reverse = false);
/**
 * Sort a collection of ReconstructedParticle based on the value of
 * pseudorapidity.
 *
 * @param collection Collection of ReconstructedParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
sortEta(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection,
        bool reverse = false);
/**
 * Sort a collection of ReconstructedParticle based on the value of rapidity.
 *
 * @param collection Collection of ReconstructedParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
sortRapidity(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection,
             bool reverse = false);
/**
 * Sort a collection of ReconstructedParticle based on the value of polar angle.
 *
 * @param collection Collection of ReconstructedParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
sortTheta(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection,
          bool reverse = false);
/**
 * Sort a collection of ReconstructedParticle based on the value of azimutal
 * angle.
 *
 * @param collection Collection of ReconstructedParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
sortPhi(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection,
        bool reverse = false);
/**
 * Sort a collection of ReconstructedParticle based on the value of distance to
 * origin.
 *
 * @param collection Collection of ReconstructedParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
sortR(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection,
      bool reverse = false);
/**
 * Sort a collection of ReconstructedParticle based on the value of x
 * coordinate.
 *
 * @param collection Collection of ReconstructedParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
sortX(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection,
      bool reverse = false);
/**
 * Sort a collection of ReconstructedParticle based on the value of y
 * coordinate.
 *
 * @param collection Collection of ReconstructedParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
sortY(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection,
      bool reverse = false);
/**
 * Sort a collection of ReconstructedParticle based on the value of z
 * coordinate.
 *
 * @param collection Collection of ReconstructedParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
sortZ(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection,
      bool reverse = false);
/**
 * Sort a collection of ReconstructedParticle based on the value of energy.
 *
 * @param collection Collection of ReconstructedParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
sortE(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection,
      bool reverse = false);
/**
 * Sort a collection of ReconstructedParticle based on the value of mass.
 *
 * @param collection Collection of ReconstructedParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
sortM(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection,
      bool reverse = false);
/**
 * Sort a collection of ReconstructedParticle based on the value of charge.
 *
 * @param collection Collection of ReconstructedParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
sortQ(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection,
      bool reverse = false);
/**
 * Sort a collection of ReconstructedParticle based on the value of absolute
 * charge.
 *
 * @param collection Collection of ReconstructedParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
sortAbsq(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection,
         bool reverse = false);
/**
 * Sort a collection of ReconstructedParticle based on the value of pdg.
 *
 * @param collection Collection of ReconstructedParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
sortPdg(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection,
        bool reverse = false);
/**
 * Sort a collection of ReconstructedParticle based on the value of momentum.
 *
 * @param collection Collection of ReconstructedParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::ReconstructedParticleCollection
sortP(edm4hep::ReconstructedParticleCollection &collection,
      bool reverse = false);
/**
 * Sort a collection of ReconstructedParticle based on the value of transverse
 * momentum.
 *
 * @param collection Collection of ReconstructedParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::ReconstructedParticleCollection
sortPt(edm4hep::ReconstructedParticleCollection &collection,
       bool reverse = false);
/**
 * Sort a collection of ReconstructedParticle based on the value of x momentum.
 *
 * @param collection Collection of ReconstructedParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::ReconstructedParticleCollection
sortPx(edm4hep::ReconstructedParticleCollection &collection,
       bool reverse = false);
/**
 * Sort a collection of ReconstructedParticle based on the value of y momentum.
 *
 * @param collection Collection of ReconstructedParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::ReconstructedParticleCollection
sortPy(edm4hep::ReconstructedParticleCollection &collection,
       bool reverse = false);
/**
 * Sort a collection of ReconstructedParticle based on the value of z momentum.
 *
 * @param collection Collection of ReconstructedParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::ReconstructedParticleCollection
sortPz(edm4hep::ReconstructedParticleCollection &collection,
       bool reverse = false);
/**
 * Sort a collection of ReconstructedParticle based on the value of
 * pseudorapidity.
 *
 * @param collection Collection of ReconstructedParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::ReconstructedParticleCollection
sortEta(edm4hep::ReconstructedParticleCollection &collection,
        bool reverse = false);
/**
 * Sort a collection of ReconstructedParticle based on the value of rapidity.
 *
 * @param collection Collection of ReconstructedParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::ReconstructedParticleCollection
sortRapidity(edm4hep::ReconstructedParticleCollection &collection,
             bool reverse = false);
/**
 * Sort a collection of ReconstructedParticle based on the value of polar angle.
 *
 * @param collection Collection of ReconstructedParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::ReconstructedParticleCollection
sortTheta(edm4hep::ReconstructedParticleCollection &collection,
          bool reverse = false);
/**
 * Sort a collection of ReconstructedParticle based on the value of azimutal
 * angle.
 *
 * @param collection Collection of ReconstructedParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::ReconstructedParticleCollection
sortPhi(edm4hep::ReconstructedParticleCollection &collection,
        bool reverse = false);
/**
 * Sort a collection of ReconstructedParticle based on the value of distance to
 * origin.
 *
 * @param collection Collection of ReconstructedParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::ReconstructedParticleCollection
sortR(edm4hep::ReconstructedParticleCollection &collection,
      bool reverse = false);
/**
 * Sort a collection of ReconstructedParticle based on the value of x
 * coordinate.
 *
 * @param collection Collection of ReconstructedParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::ReconstructedParticleCollection
sortX(edm4hep::ReconstructedParticleCollection &collection,
      bool reverse = false);
/**
 * Sort a collection of ReconstructedParticle based on the value of y
 * coordinate.
 *
 * @param collection Collection of ReconstructedParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::ReconstructedParticleCollection
sortY(edm4hep::ReconstructedParticleCollection &collection,
      bool reverse = false);
/**
 * Sort a collection of ReconstructedParticle based on the value of z
 * coordinate.
 *
 * @param collection Collection of ReconstructedParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::ReconstructedParticleCollection
sortZ(edm4hep::ReconstructedParticleCollection &collection,
      bool reverse = false);
/**
 * Sort a collection of ReconstructedParticle based on the value of energy.
 *
 * @param collection Collection of ReconstructedParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::ReconstructedParticleCollection
sortE(edm4hep::ReconstructedParticleCollection &collection,
      bool reverse = false);
/**
 * Sort a collection of ReconstructedParticle based on the value of mass.
 *
 * @param collection Collection of ReconstructedParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::ReconstructedParticleCollection
sortM(edm4hep::ReconstructedParticleCollection &collection,
      bool reverse = false);
/**
 * Sort a collection of ReconstructedParticle based on the value of charge.
 *
 * @param collection Collection of ReconstructedParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::ReconstructedParticleCollection
sortQ(edm4hep::ReconstructedParticleCollection &collection,
      bool reverse = false);
/**
 * Sort a collection of ReconstructedParticle based on the value of absolute
 * charge.
 *
 * @param collection Collection of ReconstructedParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::ReconstructedParticleCollection
sortAbsq(edm4hep::ReconstructedParticleCollection &collection,
         bool reverse = false);
/**
 * Sort a collection of ReconstructedParticle based on the value of pdg.
 *
 * @param collection Collection of ReconstructedParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::ReconstructedParticleCollection
sortPdg(edm4hep::ReconstructedParticleCollection &collection,
        bool reverse = false);
/**
 * Get the collection of ReconstructedParticle related to a
 * ReconstructedParticle.
 *
 * @param item ReconstructedParticle from which to look for the related
 * collection.
 * @param relatedCollection Complete collection of ReconstructedParticle to
 * filter
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> getParticles(
    edm4hep::ReconstructedParticleData item,
    ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> relatedCollection);
/**
 * Get the collection of Track related to a ReconstructedParticle.
 *
 * @param item ReconstructedParticle from which to look for the related
 * collection.
 * @param relatedCollection Complete collection of Track to filter
 *
 */
ROOT::VecOps::RVec<edm4hep::TrackData>
getTracks(edm4hep::ReconstructedParticleData item,
          ROOT::VecOps::RVec<edm4hep::TrackData> relatedCollection);
/**
 * Get the collection of Cluster related to a ReconstructedParticle.
 *
 * @param item ReconstructedParticle from which to look for the related
 * collection.
 * @param relatedCollection Complete collection of Cluster to filter
 *
 */
ROOT::VecOps::RVec<edm4hep::ClusterData>
getClusters(edm4hep::ReconstructedParticleData item,
            ROOT::VecOps::RVec<edm4hep::ClusterData> relatedCollection);
/**
 * Get the collection of ReconstructedParticle related to a
 * ReconstructedParticle.
 *
 * @param item ReconstructedParticle to look in for related collection
 *
 */
edm4hep::ReconstructedParticleCollection
getParticles(const edm4hep::ReconstructedParticle &item);
/**
 * Get the collection of Track related to a ReconstructedParticle.
 *
 * @param item ReconstructedParticle to look in for related collection
 *
 */
edm4hep::TrackCollection getTracks(const edm4hep::ReconstructedParticle &item);
/**
 * Get the collection of Cluster related to a ReconstructedParticle.
 *
 * @param item ReconstructedParticle to look in for related collection
 *
 */
edm4hep::ClusterCollection
getClusters(const edm4hep::ReconstructedParticle &item);
} // namespace ReconstructedParticle
} // namespace k4::ral
