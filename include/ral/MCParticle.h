#include <Math/Vector3D.h>
#include <Math/Vector4D.h>
#include <cmath>
#include <edm4hep/MCParticleCollection.h>
#include <iostream>
#include <ral/LogicalOperators.h>
namespace k4::ral {
namespace ReconstructedParticle {
/**
 * Get momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getP(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get transverse momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getPt(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get x momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getPx(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get y momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getPy(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get z momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getPz(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get pseudorapidity from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getEta(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get rapidity from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getRapidity(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get polar angle from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getTheta(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get azimutal angle from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getPhi(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getPEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get transverse momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getPtEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get x momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getPxEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get y momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getPyEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get z momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getPzEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get pseudorapidity from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getEtaEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get rapidity from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getRapidityEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get polar angle from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getThetaEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get azimutal angle from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getPhiEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get distance to origin from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getR(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get x coordinate from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getX(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get y coordinate from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getY(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get z coordinate from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getZ(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get distance to origin from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getREnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get x coordinate from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getXEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get y coordinate from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getYEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get z coordinate from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getZEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get energy from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getE(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get energy from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getEEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get mass from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getM(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get charge from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getQ(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get absolute charge from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getAbsq(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get pdg from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<int>
getPdg(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get absolute pdg from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<int>
getAbspdg(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get simulator status from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<int>
getSimStat(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get generator status from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<int>
getGenStat(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float> getP(const edm4hep::MCParticleCollection &collection);
/**
 * Get transverse momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getPt(const edm4hep::MCParticleCollection &collection);
/**
 * Get x momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getPx(const edm4hep::MCParticleCollection &collection);
/**
 * Get y momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getPy(const edm4hep::MCParticleCollection &collection);
/**
 * Get z momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getPz(const edm4hep::MCParticleCollection &collection);
/**
 * Get pseudorapidity from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getEta(const edm4hep::MCParticleCollection &collection);
/**
 * Get rapidity from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getRapidity(const edm4hep::MCParticleCollection &collection);
/**
 * Get polar angle from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getTheta(const edm4hep::MCParticleCollection &collection);
/**
 * Get azimutal angle from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getPhi(const edm4hep::MCParticleCollection &collection);
/**
 * Get momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getPEnd(const edm4hep::MCParticleCollection &collection);
/**
 * Get transverse momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getPtEnd(const edm4hep::MCParticleCollection &collection);
/**
 * Get x momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getPxEnd(const edm4hep::MCParticleCollection &collection);
/**
 * Get y momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getPyEnd(const edm4hep::MCParticleCollection &collection);
/**
 * Get z momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getPzEnd(const edm4hep::MCParticleCollection &collection);
/**
 * Get pseudorapidity from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getEtaEnd(const edm4hep::MCParticleCollection &collection);
/**
 * Get rapidity from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getRapidityEnd(const edm4hep::MCParticleCollection &collection);
/**
 * Get polar angle from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getThetaEnd(const edm4hep::MCParticleCollection &collection);
/**
 * Get azimutal angle from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getPhiEnd(const edm4hep::MCParticleCollection &collection);
/**
 * Get distance to origin from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float> getR(const edm4hep::MCParticleCollection &collection);
/**
 * Get x coordinate from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float> getX(const edm4hep::MCParticleCollection &collection);
/**
 * Get y coordinate from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float> getY(const edm4hep::MCParticleCollection &collection);
/**
 * Get z coordinate from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float> getZ(const edm4hep::MCParticleCollection &collection);
/**
 * Get distance to origin from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getREnd(const edm4hep::MCParticleCollection &collection);
/**
 * Get x coordinate from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getXEnd(const edm4hep::MCParticleCollection &collection);
/**
 * Get y coordinate from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getYEnd(const edm4hep::MCParticleCollection &collection);
/**
 * Get z coordinate from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getZEnd(const edm4hep::MCParticleCollection &collection);
/**
 * Get energy from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float> getE(const edm4hep::MCParticleCollection &collection);
/**
 * Get energy from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getEEnd(const edm4hep::MCParticleCollection &collection);
/**
 * Get mass from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float> getM(const edm4hep::MCParticleCollection &collection);
/**
 * Get charge from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float> getQ(const edm4hep::MCParticleCollection &collection);
/**
 * Get absolute charge from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
getAbsq(const edm4hep::MCParticleCollection &collection);
/**
 * Get pdg from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<int> getPdg(const edm4hep::MCParticleCollection &collection);
/**
 * Get absolute pdg from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<int>
getAbspdg(const edm4hep::MCParticleCollection &collection);
/**
 * Get simulator status from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<int>
getSimStat(const edm4hep::MCParticleCollection &collection);
/**
 * Get generator status from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<int>
getGenStat(const edm4hep::MCParticleCollection &collection);
/**
 * Print momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printP(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print transverse momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printPt(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print x momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printPx(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print y momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printPy(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print z momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printPz(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print pseudorapidity from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printEta(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print rapidity from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printRapidity(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print polar angle from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printTheta(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print azimutal angle from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printPhi(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printPEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print transverse momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printPtEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print x momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printPxEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print y momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printPyEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print z momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printPzEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print pseudorapidity from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printEtaEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print rapidity from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printRapidityEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print polar angle from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printThetaEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print azimutal angle from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printPhiEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print distance to origin from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printR(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print x coordinate from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printX(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print y coordinate from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printY(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print z coordinate from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printZ(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print distance to origin from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printREnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print x coordinate from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printXEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print y coordinate from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printYEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print z coordinate from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printZEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print energy from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printE(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print energy from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printEEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print mass from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printM(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print charge from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printQ(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print absolute charge from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printAbsq(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print pdg from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printPdg(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print absolute pdg from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printAbspdg(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print simulator status from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printSimStat(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print generator status from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printGenStat(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printP(const edm4hep::MCParticleCollection &collection);
/**
 * Print transverse momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printPt(const edm4hep::MCParticleCollection &collection);
/**
 * Print x momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printPx(const edm4hep::MCParticleCollection &collection);
/**
 * Print y momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printPy(const edm4hep::MCParticleCollection &collection);
/**
 * Print z momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printPz(const edm4hep::MCParticleCollection &collection);
/**
 * Print pseudorapidity from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printEta(const edm4hep::MCParticleCollection &collection);
/**
 * Print rapidity from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printRapidity(const edm4hep::MCParticleCollection &collection);
/**
 * Print polar angle from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printTheta(const edm4hep::MCParticleCollection &collection);
/**
 * Print azimutal angle from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printPhi(const edm4hep::MCParticleCollection &collection);
/**
 * Print momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printPEnd(const edm4hep::MCParticleCollection &collection);
/**
 * Print transverse momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printPtEnd(const edm4hep::MCParticleCollection &collection);
/**
 * Print x momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printPxEnd(const edm4hep::MCParticleCollection &collection);
/**
 * Print y momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printPyEnd(const edm4hep::MCParticleCollection &collection);
/**
 * Print z momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printPzEnd(const edm4hep::MCParticleCollection &collection);
/**
 * Print pseudorapidity from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printEtaEnd(const edm4hep::MCParticleCollection &collection);
/**
 * Print rapidity from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printRapidityEnd(const edm4hep::MCParticleCollection &collection);
/**
 * Print polar angle from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printThetaEnd(const edm4hep::MCParticleCollection &collection);
/**
 * Print azimutal angle from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printPhiEnd(const edm4hep::MCParticleCollection &collection);
/**
 * Print distance to origin from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printR(const edm4hep::MCParticleCollection &collection);
/**
 * Print x coordinate from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printX(const edm4hep::MCParticleCollection &collection);
/**
 * Print y coordinate from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printY(const edm4hep::MCParticleCollection &collection);
/**
 * Print z coordinate from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printZ(const edm4hep::MCParticleCollection &collection);
/**
 * Print distance to origin from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printREnd(const edm4hep::MCParticleCollection &collection);
/**
 * Print x coordinate from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printXEnd(const edm4hep::MCParticleCollection &collection);
/**
 * Print y coordinate from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printYEnd(const edm4hep::MCParticleCollection &collection);
/**
 * Print z coordinate from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printZEnd(const edm4hep::MCParticleCollection &collection);
/**
 * Print energy from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printE(const edm4hep::MCParticleCollection &collection);
/**
 * Print energy from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printEEnd(const edm4hep::MCParticleCollection &collection);
/**
 * Print mass from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printM(const edm4hep::MCParticleCollection &collection);
/**
 * Print charge from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printQ(const edm4hep::MCParticleCollection &collection);
/**
 * Print absolute charge from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printAbsq(const edm4hep::MCParticleCollection &collection);
/**
 * Print pdg from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printPdg(const edm4hep::MCParticleCollection &collection);
/**
 * Print absolute pdg from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printAbspdg(const edm4hep::MCParticleCollection &collection);
/**
 * Print simulator status from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printSimStat(const edm4hep::MCParticleCollection &collection);
/**
 * Print generator status from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int printGenStat(const edm4hep::MCParticleCollection &collection);
/**
 * Create boolean mask based on the value of momentum from each item in a
 * collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskP(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Create boolean mask based on the value of transverse momentum from each item
 * in a collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskPt(LogicalOperators::ComparisonOperator op, float val,
       ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Create boolean mask based on the value of x momentum from each item in a
 * collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskPx(LogicalOperators::ComparisonOperator op, float val,
       ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Create boolean mask based on the value of y momentum from each item in a
 * collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskPy(LogicalOperators::ComparisonOperator op, float val,
       ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Create boolean mask based on the value of z momentum from each item in a
 * collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskPz(LogicalOperators::ComparisonOperator op, float val,
       ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Create boolean mask based on the value of pseudorapidity from each item in a
 * collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskEta(LogicalOperators::ComparisonOperator op, float val,
        ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Create boolean mask based on the value of rapidity from each item in a
 * collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskRapidity(LogicalOperators::ComparisonOperator op, float val,
             ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Create boolean mask based on the value of polar angle from each item in a
 * collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskTheta(LogicalOperators::ComparisonOperator op, float val,
          ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Create boolean mask based on the value of azimutal angle from each item in a
 * collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskPhi(LogicalOperators::ComparisonOperator op, float val,
        ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Create boolean mask based on the value of momentum from each item in a
 * collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskPEnd(LogicalOperators::ComparisonOperator op, float val,
         ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Create boolean mask based on the value of transverse momentum from each item
 * in a collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskPtEnd(LogicalOperators::ComparisonOperator op, float val,
          ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Create boolean mask based on the value of x momentum from each item in a
 * collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskPxEnd(LogicalOperators::ComparisonOperator op, float val,
          ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Create boolean mask based on the value of y momentum from each item in a
 * collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskPyEnd(LogicalOperators::ComparisonOperator op, float val,
          ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Create boolean mask based on the value of z momentum from each item in a
 * collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskPzEnd(LogicalOperators::ComparisonOperator op, float val,
          ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Create boolean mask based on the value of pseudorapidity from each item in a
 * collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskEtaEnd(LogicalOperators::ComparisonOperator op, float val,
           ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Create boolean mask based on the value of rapidity from each item in a
 * collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskRapidityEnd(LogicalOperators::ComparisonOperator op, float val,
                ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Create boolean mask based on the value of polar angle from each item in a
 * collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskThetaEnd(LogicalOperators::ComparisonOperator op, float val,
             ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Create boolean mask based on the value of azimutal angle from each item in a
 * collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskPhiEnd(LogicalOperators::ComparisonOperator op, float val,
           ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Create boolean mask based on the value of distance to origin from each item
 * in a collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskR(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Create boolean mask based on the value of x coordinate from each item in a
 * collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskX(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Create boolean mask based on the value of y coordinate from each item in a
 * collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskY(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Create boolean mask based on the value of z coordinate from each item in a
 * collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskZ(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Create boolean mask based on the value of distance to origin from each item
 * in a collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskREnd(LogicalOperators::ComparisonOperator op, float val,
         ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Create boolean mask based on the value of x coordinate from each item in a
 * collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskXEnd(LogicalOperators::ComparisonOperator op, float val,
         ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Create boolean mask based on the value of y coordinate from each item in a
 * collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskYEnd(LogicalOperators::ComparisonOperator op, float val,
         ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Create boolean mask based on the value of z coordinate from each item in a
 * collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskZEnd(LogicalOperators::ComparisonOperator op, float val,
         ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Create boolean mask based on the value of energy from each item in a
 * collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskE(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Create boolean mask based on the value of energy from each item in a
 * collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskEEnd(LogicalOperators::ComparisonOperator op, float val,
         ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Create boolean mask based on the value of mass from each item in a collection
 * of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskM(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Create boolean mask based on the value of charge from each item in a
 * collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskQ(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Create boolean mask based on the value of absolute charge from each item in a
 * collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskAbsq(LogicalOperators::ComparisonOperator op, float val,
         ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Create boolean mask based on the value of pdg from each item in a collection
 * of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskPdg(LogicalOperators::ComparisonOperator op, int val,
        ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Create boolean mask based on the value of absolute pdg from each item in a
 * collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskAbspdg(LogicalOperators::ComparisonOperator op, int val,
           ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Create boolean mask based on the value of simulator status from each item in
 * a collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskSimStat(LogicalOperators::ComparisonOperator op, int val,
            ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Create boolean mask based on the value of generator status from each item in
 * a collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskGenStat(LogicalOperators::ComparisonOperator op, int val,
            ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Create boolean mask based on the value of momentum from each item in a
 * collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool> maskP(LogicalOperators::ComparisonOperator op,
                               float val,
                               const edm4hep::MCParticleCollection &collection);
/**
 * Create boolean mask based on the value of transverse momentum from each item
 * in a collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskPt(LogicalOperators::ComparisonOperator op, float val,
       const edm4hep::MCParticleCollection &collection);
/**
 * Create boolean mask based on the value of x momentum from each item in a
 * collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskPx(LogicalOperators::ComparisonOperator op, float val,
       const edm4hep::MCParticleCollection &collection);
/**
 * Create boolean mask based on the value of y momentum from each item in a
 * collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskPy(LogicalOperators::ComparisonOperator op, float val,
       const edm4hep::MCParticleCollection &collection);
/**
 * Create boolean mask based on the value of z momentum from each item in a
 * collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskPz(LogicalOperators::ComparisonOperator op, float val,
       const edm4hep::MCParticleCollection &collection);
/**
 * Create boolean mask based on the value of pseudorapidity from each item in a
 * collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskEta(LogicalOperators::ComparisonOperator op, float val,
        const edm4hep::MCParticleCollection &collection);
/**
 * Create boolean mask based on the value of rapidity from each item in a
 * collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskRapidity(LogicalOperators::ComparisonOperator op, float val,
             const edm4hep::MCParticleCollection &collection);
/**
 * Create boolean mask based on the value of polar angle from each item in a
 * collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskTheta(LogicalOperators::ComparisonOperator op, float val,
          const edm4hep::MCParticleCollection &collection);
/**
 * Create boolean mask based on the value of azimutal angle from each item in a
 * collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskPhi(LogicalOperators::ComparisonOperator op, float val,
        const edm4hep::MCParticleCollection &collection);
/**
 * Create boolean mask based on the value of momentum from each item in a
 * collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskPEnd(LogicalOperators::ComparisonOperator op, float val,
         const edm4hep::MCParticleCollection &collection);
/**
 * Create boolean mask based on the value of transverse momentum from each item
 * in a collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskPtEnd(LogicalOperators::ComparisonOperator op, float val,
          const edm4hep::MCParticleCollection &collection);
/**
 * Create boolean mask based on the value of x momentum from each item in a
 * collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskPxEnd(LogicalOperators::ComparisonOperator op, float val,
          const edm4hep::MCParticleCollection &collection);
/**
 * Create boolean mask based on the value of y momentum from each item in a
 * collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskPyEnd(LogicalOperators::ComparisonOperator op, float val,
          const edm4hep::MCParticleCollection &collection);
/**
 * Create boolean mask based on the value of z momentum from each item in a
 * collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskPzEnd(LogicalOperators::ComparisonOperator op, float val,
          const edm4hep::MCParticleCollection &collection);
/**
 * Create boolean mask based on the value of pseudorapidity from each item in a
 * collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskEtaEnd(LogicalOperators::ComparisonOperator op, float val,
           const edm4hep::MCParticleCollection &collection);
/**
 * Create boolean mask based on the value of rapidity from each item in a
 * collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskRapidityEnd(LogicalOperators::ComparisonOperator op, float val,
                const edm4hep::MCParticleCollection &collection);
/**
 * Create boolean mask based on the value of polar angle from each item in a
 * collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskThetaEnd(LogicalOperators::ComparisonOperator op, float val,
             const edm4hep::MCParticleCollection &collection);
/**
 * Create boolean mask based on the value of azimutal angle from each item in a
 * collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskPhiEnd(LogicalOperators::ComparisonOperator op, float val,
           const edm4hep::MCParticleCollection &collection);
/**
 * Create boolean mask based on the value of distance to origin from each item
 * in a collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool> maskR(LogicalOperators::ComparisonOperator op,
                               float val,
                               const edm4hep::MCParticleCollection &collection);
/**
 * Create boolean mask based on the value of x coordinate from each item in a
 * collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool> maskX(LogicalOperators::ComparisonOperator op,
                               float val,
                               const edm4hep::MCParticleCollection &collection);
/**
 * Create boolean mask based on the value of y coordinate from each item in a
 * collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool> maskY(LogicalOperators::ComparisonOperator op,
                               float val,
                               const edm4hep::MCParticleCollection &collection);
/**
 * Create boolean mask based on the value of z coordinate from each item in a
 * collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool> maskZ(LogicalOperators::ComparisonOperator op,
                               float val,
                               const edm4hep::MCParticleCollection &collection);
/**
 * Create boolean mask based on the value of distance to origin from each item
 * in a collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskREnd(LogicalOperators::ComparisonOperator op, float val,
         const edm4hep::MCParticleCollection &collection);
/**
 * Create boolean mask based on the value of x coordinate from each item in a
 * collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskXEnd(LogicalOperators::ComparisonOperator op, float val,
         const edm4hep::MCParticleCollection &collection);
/**
 * Create boolean mask based on the value of y coordinate from each item in a
 * collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskYEnd(LogicalOperators::ComparisonOperator op, float val,
         const edm4hep::MCParticleCollection &collection);
/**
 * Create boolean mask based on the value of z coordinate from each item in a
 * collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskZEnd(LogicalOperators::ComparisonOperator op, float val,
         const edm4hep::MCParticleCollection &collection);
/**
 * Create boolean mask based on the value of energy from each item in a
 * collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool> maskE(LogicalOperators::ComparisonOperator op,
                               float val,
                               const edm4hep::MCParticleCollection &collection);
/**
 * Create boolean mask based on the value of energy from each item in a
 * collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskEEnd(LogicalOperators::ComparisonOperator op, float val,
         const edm4hep::MCParticleCollection &collection);
/**
 * Create boolean mask based on the value of mass from each item in a collection
 * of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool> maskM(LogicalOperators::ComparisonOperator op,
                               float val,
                               const edm4hep::MCParticleCollection &collection);
/**
 * Create boolean mask based on the value of charge from each item in a
 * collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool> maskQ(LogicalOperators::ComparisonOperator op,
                               float val,
                               const edm4hep::MCParticleCollection &collection);
/**
 * Create boolean mask based on the value of absolute charge from each item in a
 * collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskAbsq(LogicalOperators::ComparisonOperator op, float val,
         const edm4hep::MCParticleCollection &collection);
/**
 * Create boolean mask based on the value of pdg from each item in a collection
 * of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskPdg(LogicalOperators::ComparisonOperator op, int val,
        const edm4hep::MCParticleCollection &collection);
/**
 * Create boolean mask based on the value of absolute pdg from each item in a
 * collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskAbspdg(LogicalOperators::ComparisonOperator op, int val,
           const edm4hep::MCParticleCollection &collection);
/**
 * Create boolean mask based on the value of simulator status from each item in
 * a collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskSimStat(LogicalOperators::ComparisonOperator op, int val,
            const edm4hep::MCParticleCollection &collection);
/**
 * Create boolean mask based on the value of generator status from each item in
 * a collection of MCParticle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<bool>
maskGenStat(LogicalOperators::ComparisonOperator op, int val,
            const edm4hep::MCParticleCollection &collection);
/**
 * Select a subgroup of MCParticle based on the value of momentum.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selP(LogicalOperators::ComparisonOperator op, float val,
     ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Select a subgroup of MCParticle based on the value of transverse momentum.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selPt(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Select a subgroup of MCParticle based on the value of x momentum.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selPx(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Select a subgroup of MCParticle based on the value of y momentum.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selPy(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Select a subgroup of MCParticle based on the value of z momentum.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selPz(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Select a subgroup of MCParticle based on the value of pseudorapidity.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selEta(LogicalOperators::ComparisonOperator op, float val,
       ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Select a subgroup of MCParticle based on the value of rapidity.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selRapidity(LogicalOperators::ComparisonOperator op, float val,
            ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Select a subgroup of MCParticle based on the value of polar angle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selTheta(LogicalOperators::ComparisonOperator op, float val,
         ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Select a subgroup of MCParticle based on the value of azimutal angle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selPhi(LogicalOperators::ComparisonOperator op, float val,
       ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Select a subgroup of MCParticle based on the value of momentum.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selPEnd(LogicalOperators::ComparisonOperator op, float val,
        ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Select a subgroup of MCParticle based on the value of transverse momentum.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selPtEnd(LogicalOperators::ComparisonOperator op, float val,
         ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Select a subgroup of MCParticle based on the value of x momentum.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selPxEnd(LogicalOperators::ComparisonOperator op, float val,
         ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Select a subgroup of MCParticle based on the value of y momentum.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selPyEnd(LogicalOperators::ComparisonOperator op, float val,
         ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Select a subgroup of MCParticle based on the value of z momentum.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selPzEnd(LogicalOperators::ComparisonOperator op, float val,
         ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Select a subgroup of MCParticle based on the value of pseudorapidity.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selEtaEnd(LogicalOperators::ComparisonOperator op, float val,
          ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Select a subgroup of MCParticle based on the value of rapidity.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selRapidityEnd(LogicalOperators::ComparisonOperator op, float val,
               ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Select a subgroup of MCParticle based on the value of polar angle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selThetaEnd(LogicalOperators::ComparisonOperator op, float val,
            ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Select a subgroup of MCParticle based on the value of azimutal angle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selPhiEnd(LogicalOperators::ComparisonOperator op, float val,
          ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Select a subgroup of MCParticle based on the value of distance to origin.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selR(LogicalOperators::ComparisonOperator op, float val,
     ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Select a subgroup of MCParticle based on the value of x coordinate.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selX(LogicalOperators::ComparisonOperator op, float val,
     ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Select a subgroup of MCParticle based on the value of y coordinate.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selY(LogicalOperators::ComparisonOperator op, float val,
     ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Select a subgroup of MCParticle based on the value of z coordinate.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selZ(LogicalOperators::ComparisonOperator op, float val,
     ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Select a subgroup of MCParticle based on the value of distance to origin.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selREnd(LogicalOperators::ComparisonOperator op, float val,
        ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Select a subgroup of MCParticle based on the value of x coordinate.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selXEnd(LogicalOperators::ComparisonOperator op, float val,
        ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Select a subgroup of MCParticle based on the value of y coordinate.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selYEnd(LogicalOperators::ComparisonOperator op, float val,
        ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Select a subgroup of MCParticle based on the value of z coordinate.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selZEnd(LogicalOperators::ComparisonOperator op, float val,
        ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Select a subgroup of MCParticle based on the value of energy.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selE(LogicalOperators::ComparisonOperator op, float val,
     ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Select a subgroup of MCParticle based on the value of energy.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selEEnd(LogicalOperators::ComparisonOperator op, float val,
        ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Select a subgroup of MCParticle based on the value of mass.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selM(LogicalOperators::ComparisonOperator op, float val,
     ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Select a subgroup of MCParticle based on the value of charge.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selQ(LogicalOperators::ComparisonOperator op, float val,
     ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Select a subgroup of MCParticle based on the value of absolute charge.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selAbsq(LogicalOperators::ComparisonOperator op, float val,
        ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Select a subgroup of MCParticle based on the value of pdg.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selPdg(LogicalOperators::ComparisonOperator op, int val,
       ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Select a subgroup of MCParticle based on the value of absolute pdg.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selAbspdg(LogicalOperators::ComparisonOperator op, int val,
          ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Select a subgroup of MCParticle based on the value of simulator status.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selSimStat(LogicalOperators::ComparisonOperator op, int val,
           ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Select a subgroup of MCParticle based on the value of generator status.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selGenStat(LogicalOperators::ComparisonOperator op, int val,
           ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Select a subgroup of MCParticle based on the value of momentum.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
edm4hep::MCParticleCollection
selP(LogicalOperators::ComparisonOperator op, float val,
     const edm4hep::MCParticleCollection &collection);
/**
 * Select a subgroup of MCParticle based on the value of transverse momentum.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
edm4hep::MCParticleCollection
selPt(LogicalOperators::ComparisonOperator op, float val,
      const edm4hep::MCParticleCollection &collection);
/**
 * Select a subgroup of MCParticle based on the value of x momentum.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
edm4hep::MCParticleCollection
selPx(LogicalOperators::ComparisonOperator op, float val,
      const edm4hep::MCParticleCollection &collection);
/**
 * Select a subgroup of MCParticle based on the value of y momentum.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
edm4hep::MCParticleCollection
selPy(LogicalOperators::ComparisonOperator op, float val,
      const edm4hep::MCParticleCollection &collection);
/**
 * Select a subgroup of MCParticle based on the value of z momentum.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
edm4hep::MCParticleCollection
selPz(LogicalOperators::ComparisonOperator op, float val,
      const edm4hep::MCParticleCollection &collection);
/**
 * Select a subgroup of MCParticle based on the value of pseudorapidity.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
edm4hep::MCParticleCollection
selEta(LogicalOperators::ComparisonOperator op, float val,
       const edm4hep::MCParticleCollection &collection);
/**
 * Select a subgroup of MCParticle based on the value of rapidity.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
edm4hep::MCParticleCollection
selRapidity(LogicalOperators::ComparisonOperator op, float val,
            const edm4hep::MCParticleCollection &collection);
/**
 * Select a subgroup of MCParticle based on the value of polar angle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
edm4hep::MCParticleCollection
selTheta(LogicalOperators::ComparisonOperator op, float val,
         const edm4hep::MCParticleCollection &collection);
/**
 * Select a subgroup of MCParticle based on the value of azimutal angle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
edm4hep::MCParticleCollection
selPhi(LogicalOperators::ComparisonOperator op, float val,
       const edm4hep::MCParticleCollection &collection);
/**
 * Select a subgroup of MCParticle based on the value of momentum.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
edm4hep::MCParticleCollection
selPEnd(LogicalOperators::ComparisonOperator op, float val,
        const edm4hep::MCParticleCollection &collection);
/**
 * Select a subgroup of MCParticle based on the value of transverse momentum.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
edm4hep::MCParticleCollection
selPtEnd(LogicalOperators::ComparisonOperator op, float val,
         const edm4hep::MCParticleCollection &collection);
/**
 * Select a subgroup of MCParticle based on the value of x momentum.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
edm4hep::MCParticleCollection
selPxEnd(LogicalOperators::ComparisonOperator op, float val,
         const edm4hep::MCParticleCollection &collection);
/**
 * Select a subgroup of MCParticle based on the value of y momentum.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
edm4hep::MCParticleCollection
selPyEnd(LogicalOperators::ComparisonOperator op, float val,
         const edm4hep::MCParticleCollection &collection);
/**
 * Select a subgroup of MCParticle based on the value of z momentum.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
edm4hep::MCParticleCollection
selPzEnd(LogicalOperators::ComparisonOperator op, float val,
         const edm4hep::MCParticleCollection &collection);
/**
 * Select a subgroup of MCParticle based on the value of pseudorapidity.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
edm4hep::MCParticleCollection
selEtaEnd(LogicalOperators::ComparisonOperator op, float val,
          const edm4hep::MCParticleCollection &collection);
/**
 * Select a subgroup of MCParticle based on the value of rapidity.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
edm4hep::MCParticleCollection
selRapidityEnd(LogicalOperators::ComparisonOperator op, float val,
               const edm4hep::MCParticleCollection &collection);
/**
 * Select a subgroup of MCParticle based on the value of polar angle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
edm4hep::MCParticleCollection
selThetaEnd(LogicalOperators::ComparisonOperator op, float val,
            const edm4hep::MCParticleCollection &collection);
/**
 * Select a subgroup of MCParticle based on the value of azimutal angle.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
edm4hep::MCParticleCollection
selPhiEnd(LogicalOperators::ComparisonOperator op, float val,
          const edm4hep::MCParticleCollection &collection);
/**
 * Select a subgroup of MCParticle based on the value of distance to origin.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
edm4hep::MCParticleCollection
selR(LogicalOperators::ComparisonOperator op, float val,
     const edm4hep::MCParticleCollection &collection);
/**
 * Select a subgroup of MCParticle based on the value of x coordinate.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
edm4hep::MCParticleCollection
selX(LogicalOperators::ComparisonOperator op, float val,
     const edm4hep::MCParticleCollection &collection);
/**
 * Select a subgroup of MCParticle based on the value of y coordinate.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
edm4hep::MCParticleCollection
selY(LogicalOperators::ComparisonOperator op, float val,
     const edm4hep::MCParticleCollection &collection);
/**
 * Select a subgroup of MCParticle based on the value of z coordinate.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
edm4hep::MCParticleCollection
selZ(LogicalOperators::ComparisonOperator op, float val,
     const edm4hep::MCParticleCollection &collection);
/**
 * Select a subgroup of MCParticle based on the value of distance to origin.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
edm4hep::MCParticleCollection
selREnd(LogicalOperators::ComparisonOperator op, float val,
        const edm4hep::MCParticleCollection &collection);
/**
 * Select a subgroup of MCParticle based on the value of x coordinate.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
edm4hep::MCParticleCollection
selXEnd(LogicalOperators::ComparisonOperator op, float val,
        const edm4hep::MCParticleCollection &collection);
/**
 * Select a subgroup of MCParticle based on the value of y coordinate.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
edm4hep::MCParticleCollection
selYEnd(LogicalOperators::ComparisonOperator op, float val,
        const edm4hep::MCParticleCollection &collection);
/**
 * Select a subgroup of MCParticle based on the value of z coordinate.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
edm4hep::MCParticleCollection
selZEnd(LogicalOperators::ComparisonOperator op, float val,
        const edm4hep::MCParticleCollection &collection);
/**
 * Select a subgroup of MCParticle based on the value of energy.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
edm4hep::MCParticleCollection
selE(LogicalOperators::ComparisonOperator op, float val,
     const edm4hep::MCParticleCollection &collection);
/**
 * Select a subgroup of MCParticle based on the value of energy.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
edm4hep::MCParticleCollection
selEEnd(LogicalOperators::ComparisonOperator op, float val,
        const edm4hep::MCParticleCollection &collection);
/**
 * Select a subgroup of MCParticle based on the value of mass.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
edm4hep::MCParticleCollection
selM(LogicalOperators::ComparisonOperator op, float val,
     const edm4hep::MCParticleCollection &collection);
/**
 * Select a subgroup of MCParticle based on the value of charge.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
edm4hep::MCParticleCollection
selQ(LogicalOperators::ComparisonOperator op, float val,
     const edm4hep::MCParticleCollection &collection);
/**
 * Select a subgroup of MCParticle based on the value of absolute charge.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
edm4hep::MCParticleCollection
selAbsq(LogicalOperators::ComparisonOperator op, float val,
        const edm4hep::MCParticleCollection &collection);
/**
 * Select a subgroup of MCParticle based on the value of pdg.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
edm4hep::MCParticleCollection
selPdg(LogicalOperators::ComparisonOperator op, int val,
       const edm4hep::MCParticleCollection &collection);
/**
 * Select a subgroup of MCParticle based on the value of absolute pdg.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
edm4hep::MCParticleCollection
selAbspdg(LogicalOperators::ComparisonOperator op, int val,
          const edm4hep::MCParticleCollection &collection);
/**
 * Select a subgroup of MCParticle based on the value of simulator status.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
edm4hep::MCParticleCollection
selSimStat(LogicalOperators::ComparisonOperator op, int val,
           const edm4hep::MCParticleCollection &collection);
/**
 * Select a subgroup of MCParticle based on the value of generator status.
 *
 * @param op Logical operation applied to create the mask.
 * @param val Value to compare with.
 * @param collection Collection of MCParticle to look in
 *
 */
edm4hep::MCParticleCollection
selGenStat(LogicalOperators::ComparisonOperator op, int val,
           const edm4hep::MCParticleCollection &collection);
/**
 * Sort a collection of MCParticle based on the value of momentum.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortP(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
      bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of transverse momentum.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortPt(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
       bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of x momentum.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortPx(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
       bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of y momentum.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortPy(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
       bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of z momentum.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortPz(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
       bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of pseudorapidity.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortEta(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
        bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of rapidity.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortRapidity(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
             bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of polar angle.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortTheta(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
          bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of azimutal angle.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortPhi(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
        bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of momentum.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortPEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
         bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of transverse momentum.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortPtEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
          bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of x momentum.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortPxEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
          bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of y momentum.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortPyEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
          bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of z momentum.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortPzEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
          bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of pseudorapidity.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortEtaEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
           bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of rapidity.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortRapidityEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
                bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of polar angle.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortThetaEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
             bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of azimutal angle.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortPhiEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
           bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of distance to origin.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortR(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
      bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of x coordinate.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortX(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
      bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of y coordinate.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortY(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
      bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of z coordinate.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortZ(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
      bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of distance to origin.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortREnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
         bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of x coordinate.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortXEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
         bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of y coordinate.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortYEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
         bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of z coordinate.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortZEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
         bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of energy.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortE(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
      bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of energy.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortEEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
         bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of mass.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortM(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
      bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of charge.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortQ(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
      bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of absolute charge.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortAbsq(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
         bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of pdg.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortPdg(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
        bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of absolute pdg.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortAbspdg(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
           bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of simulator status.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortSimStat(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
            bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of generator status.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortGenStat(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
            bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of momentum.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::MCParticleCollection sortP(edm4hep::MCParticleCollection &collection,
                                    bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of transverse momentum.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::MCParticleCollection sortPt(edm4hep::MCParticleCollection &collection,
                                     bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of x momentum.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::MCParticleCollection sortPx(edm4hep::MCParticleCollection &collection,
                                     bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of y momentum.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::MCParticleCollection sortPy(edm4hep::MCParticleCollection &collection,
                                     bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of z momentum.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::MCParticleCollection sortPz(edm4hep::MCParticleCollection &collection,
                                     bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of pseudorapidity.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::MCParticleCollection sortEta(edm4hep::MCParticleCollection &collection,
                                      bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of rapidity.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::MCParticleCollection
sortRapidity(edm4hep::MCParticleCollection &collection, bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of polar angle.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::MCParticleCollection
sortTheta(edm4hep::MCParticleCollection &collection, bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of azimutal angle.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::MCParticleCollection sortPhi(edm4hep::MCParticleCollection &collection,
                                      bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of momentum.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::MCParticleCollection
sortPEnd(edm4hep::MCParticleCollection &collection, bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of transverse momentum.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::MCParticleCollection
sortPtEnd(edm4hep::MCParticleCollection &collection, bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of x momentum.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::MCParticleCollection
sortPxEnd(edm4hep::MCParticleCollection &collection, bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of y momentum.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::MCParticleCollection
sortPyEnd(edm4hep::MCParticleCollection &collection, bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of z momentum.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::MCParticleCollection
sortPzEnd(edm4hep::MCParticleCollection &collection, bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of pseudorapidity.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::MCParticleCollection
sortEtaEnd(edm4hep::MCParticleCollection &collection, bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of rapidity.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::MCParticleCollection
sortRapidityEnd(edm4hep::MCParticleCollection &collection,
                bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of polar angle.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::MCParticleCollection
sortThetaEnd(edm4hep::MCParticleCollection &collection, bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of azimutal angle.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::MCParticleCollection
sortPhiEnd(edm4hep::MCParticleCollection &collection, bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of distance to origin.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::MCParticleCollection sortR(edm4hep::MCParticleCollection &collection,
                                    bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of x coordinate.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::MCParticleCollection sortX(edm4hep::MCParticleCollection &collection,
                                    bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of y coordinate.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::MCParticleCollection sortY(edm4hep::MCParticleCollection &collection,
                                    bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of z coordinate.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::MCParticleCollection sortZ(edm4hep::MCParticleCollection &collection,
                                    bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of distance to origin.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::MCParticleCollection
sortREnd(edm4hep::MCParticleCollection &collection, bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of x coordinate.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::MCParticleCollection
sortXEnd(edm4hep::MCParticleCollection &collection, bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of y coordinate.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::MCParticleCollection
sortYEnd(edm4hep::MCParticleCollection &collection, bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of z coordinate.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::MCParticleCollection
sortZEnd(edm4hep::MCParticleCollection &collection, bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of energy.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::MCParticleCollection sortE(edm4hep::MCParticleCollection &collection,
                                    bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of energy.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::MCParticleCollection
sortEEnd(edm4hep::MCParticleCollection &collection, bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of mass.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::MCParticleCollection sortM(edm4hep::MCParticleCollection &collection,
                                    bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of charge.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::MCParticleCollection sortQ(edm4hep::MCParticleCollection &collection,
                                    bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of absolute charge.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::MCParticleCollection
sortAbsq(edm4hep::MCParticleCollection &collection, bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of pdg.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::MCParticleCollection sortPdg(edm4hep::MCParticleCollection &collection,
                                      bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of absolute pdg.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::MCParticleCollection
sortAbspdg(edm4hep::MCParticleCollection &collection, bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of simulator status.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::MCParticleCollection
sortSimStat(edm4hep::MCParticleCollection &collection, bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of generator status.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
edm4hep::MCParticleCollection
sortGenStat(edm4hep::MCParticleCollection &collection, bool reverse = false);
/**
 * Get the collection of MCParticle related to a MCParticle.
 *
 * @param item MCParticle from which to look for the related collection.
 * @param relatedCollection Complete collection of MCParticle to filter
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
getParents(edm4hep::MCParticleData item,
           ROOT::VecOps::RVec<edm4hep::MCParticleData> relatedCollection);
/**
 * Get the collection of MCParticle related to a MCParticle.
 *
 * @param item MCParticle to look in for related collection
 *
 */
edm4hep::MCParticleCollection getParents(const edm4hep::MCParticle &item);
/**
 * Get the collection of MCParticle related to a MCParticle.
 *
 * @param item MCParticle from which to look for the related collection.
 * @param relatedCollection Complete collection of MCParticle to filter
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
getDaughters(edm4hep::MCParticleData item,
             ROOT::VecOps::RVec<edm4hep::MCParticleData> relatedCollection);
/**
 * Get the collection of MCParticle related to a MCParticle.
 *
 * @param item MCParticle to look in for related collection
 *
 */
edm4hep::MCParticleCollection getDaughters(const edm4hep::MCParticle &item);
} // namespace ReconstructedParticle
} // namespace k4::ral
