#ifndef RECONSTRUCTEDPARTICLE_ANALYZERS_H
#define RECONSTRUCTEDPARTICLE_ANALYZERS_H

#include "Math/Vector3D.h"
#include "Math/Vector4D.h"
#include "ROOT/RVec.hxx"
#include "edm4hep/ReconstructedParticleData.h"
#include "ral/LogicalOperators.h"
#include <Math/GenVector/PxPyPzM4D.h>
#include <Math/Vector4Dfwd.h>

/**
 * Main namespace of the library
 */
namespace k4::ral {

/**
 * Englobe analyzers that acts on the ReconstructedParticle class
 */
namespace ReconstructedParticle {

/**
 * Get number of elements in ReconstructedParticles
 *
 * @param particles List of reconstructed particles in an event
 *
 */
int get_n(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Get PDG member from ReconstructedParticles
 *
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<int>
get_pdg(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Get absolute PDG value from ReconstructedParticles
 *
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<int>
get_abspdg(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Get energy member from ReconstructedParticles
 *
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<float>
get_e(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Get the 4 momentum from the ReconstructedParticles
 *
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<ROOT::Math::PxPyPzMVector>
get_p(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Get the modulus of the spatial momentum from the ReconstructedParticles
 *
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<float>
get_pmod(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Get transverse momentum of ReconstructedParticles
 *
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<float> get_pt(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Get x component momentum of ReconstructedParticles
 *
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<float> get_px(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);


/**
 * Get y component momentum of ReconstructedParticles
 *
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<float> get_py(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Get z component momentum of ReconstructedParticles
 *
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<float> get_pz(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Get the pseudo-rapidity of ReconstructedParticles
 *
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<float> get_eta(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Get the rapidity of ReconstructedParticles
 *
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<float> get_rapidity(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Get the polar angle of ReconstructedParticles
 *
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<float> get_theta(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Get the azimutal angle of ReconstructedParticles
 *
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<float> get_phi(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Get referencePoint member from ReconstructedParticles
 *
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<ROOT::Math::XYZVector> get_referencePoint(
    ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Get the distance to the origin from ReconstructedParticles
 *
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<float> get_r(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Get x coordinate of the position from ReconstructedParticles
 *
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<float> get_x(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Get y coordinate of the position from ReconstructedParticles
 *
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<float> get_y(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Get z coordinate of the position from ReconstructedParticles
 *
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<float> get_z(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Get charge member from ReconstructedParticles
 *
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<float>
get_q(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Get absolute charge from ReconstructedParticles
 *
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<float>
get_absq(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Get mass member from ReconstructedParticles
 *
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<float>
get_m(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Get goodnessOfPID member from ReconstructedParticles
 *
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<float> get_goodnessOfPID(
    ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Struct that can print the pdg of collection of ReconstructedParticles.
 */
struct print_pdg {
  int m_n_events;
  int m_n_printed;
  print_pdg(int n_events);
  int operator()(
      ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);
};

struct print_e {
  int m_n_events;
  int m_n_printed;
  print_e(int n_events);
  int operator()(
      ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);
};

struct print_p {
  int m_n_events;
  int m_n_printed;
  print_p(int n_events);
  int operator()(
      ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);
};

struct print_referencePoint {
  int m_n_events;
  int m_n_printed;
  print_referencePoint(int n_events);
  int operator()(
      ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);
};

struct print_m {
  int m_n_events;
  int m_n_printed;
  print_m(int n_events);
  int operator()(
      ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);
};

struct print_q {
  int m_n_events;
  int m_n_printed;
  print_q(int n_events);
  int operator()(
      ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);
};

struct print_goodnessOfPID {
  int m_n_events;
  int m_n_printed;
  print_goodnessOfPID(int n_events);
  int operator()(
      ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);
};

/**
 * Creates a boolean mask based on the energy for later filtering.
 *
 * @param op Comparison operator to apply with the value
 * @param value Value of the energy that is used in the comparison
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<bool>
mask_e(LogicalOperators::ComparisonOperator op, float value,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Creates a boolean mask based on the momentum modulus for later filtering.
 *
 * @param op Comparison operator to apply with the value
 * @param value Value of the momentum that is used in the comparison
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<bool>
mask_pmod(LogicalOperators::ComparisonOperator op, float value,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Creates a boolean mask based on the transverse momentum for later filtering.
 *
 * @param op Comparison operator to apply with the value
 * @param value Value of the momentum that is used in the comparison
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<bool>
mask_pt(LogicalOperators::ComparisonOperator op, float value,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Creates a boolean mask based on the x momentum coordinate for later filtering.
 *
 * @param op Comparison operator to apply with the value
 * @param value Value of the momentum that is used in the comparison
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<bool>
mask_px(LogicalOperators::ComparisonOperator op, float value,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Creates a boolean mask based on the y momentum coordinate  for later filtering.
 *
 * @param op Comparison operator to apply with the value
 * @param value Value of the momentum that is used in the comparison
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<bool>
mask_py(LogicalOperators::ComparisonOperator op, float value,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Creates a boolean mask based on the z momentum coordinate  for later filtering.
 *
 * @param op Comparison operator to apply with the value
 * @param value Value of the momentum that is used in the comparison
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<bool>
mask_pz(LogicalOperators::ComparisonOperator op, float value,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Creates a boolean mask based on the pseudorapidity for later filtering.
 *
 * @param op Comparison operator to apply with the value
 * @param value Value of the pseudorapidity that is used in the comparison
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<bool>
mask_eta(LogicalOperators::ComparisonOperator op, float value,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Creates a boolean mask based on the rapidity for later filtering.
 *
 * @param op Comparison operator to apply with the value
 * @param value Value of the rapidity that is used in the comparison
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<bool>
mask_rapidity(LogicalOperators::ComparisonOperator op, float value,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Creates a boolean mask based on the polar angle for later filtering.
 *
 * @param op Comparison operator to apply with the value
 * @param value Value of the angle that is used in the comparison
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<bool>
mask_theta(LogicalOperators::ComparisonOperator op, float value,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Creates a boolean mask based on the azimutal angle for later filtering.
 *
 * @param op Comparison operator to apply with the value
 * @param value Value of the angle that is used in the comparison
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<bool>
mask_phi(LogicalOperators::ComparisonOperator op, float value,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Creates a boolean mask based on the distance to origin for later filtering.
 *
 * @param op Comparison operator to apply with the value
 * @param value Value of the distance that is used in the comparison
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<bool>
mask_r(LogicalOperators::ComparisonOperator op, float value,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Creates a boolean mask based on the x coordinate of position for later filtering.
 *
 * @param op Comparison operator to apply with the value
 * @param value Value of the distance that is used in the comparison
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<bool>
mask_x(LogicalOperators::ComparisonOperator op, float value,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Creates a boolean mask based on the y coordinate of position for later filtering.
 *
 * @param op Comparison operator to apply with the value
 * @param value Value of the distance that is used in the comparison
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<bool>
mask_y(LogicalOperators::ComparisonOperator op, float value,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Creates a boolean mask based on the z coordinate of position for later filtering.
 *
 * @param op Comparison operator to apply with the value
 * @param value Value of the distance that is used in the comparison
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<bool>
mask_z(LogicalOperators::ComparisonOperator op, float value,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Creates a boolean mask based on the mass for later filtering.
 *
 * @param op Comparison operator to apply with the value
 * @param value Value of the mass that is used in the comparison
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<bool>
mask_m(LogicalOperators::ComparisonOperator op, float value,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);
/**
 * Creates a boolean mask based on the charge for later filtering.
 *
 * @param op Comparison operator to apply with the value
 * @param value Value of the charge that is used in the comparison
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<bool>
mask_q(LogicalOperators::ComparisonOperator op, float value,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Creates a boolean mask based on the absolute charge for later filtering.
 *
 * @param op Comparison operator to apply with the value
 * @param value Value of the charge that is used in the comparison
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<bool>
mask_absq(LogicalOperators::ComparisonOperator op, float value,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Creates a boolean mask based on the PDG for later filtering.
 *
 * @param op Comparison operator to apply with the value
 * @param value Value of the pdg that is used in the comparison
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<bool>
mask_pdg(LogicalOperators::ComparisonOperator op, int value,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Creates a boolean mask based on the absolute pdg for later filtering.
 *
 * @param op Comparison operator to apply with the value
 * @param value Value of the pdg that is used in the comparison
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<bool>
mask_abspdg(LogicalOperators::ComparisonOperator op, int value,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Select a subcollection of ReconstructedParticles based on the energy
 *
 * @param op Comparison operator to apply with the value
 * @param value Value of the energy that is used in the comparison
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
sel_e(LogicalOperators::ComparisonOperator op, float value,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Select a subcollection of ReconstructedParticles based on the 3D momentum modulus
 *
 * @param op Comparison operator to apply with the value
 * @param value Value of the momentum that is used in the comparison
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
sel_pmod(LogicalOperators::ComparisonOperator op, float value,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Select a subcollection of ReconstructedParticles based on the transverse momentum modulus
 *
 * @param op Comparison operator to apply with the value
 * @param value Value of the momentum that is used in the comparison
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
sel_pt(LogicalOperators::ComparisonOperator op, float value,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Select a subcollection of ReconstructedParticles based on the x momentum 
 *
 * @param op Comparison operator to apply with the value
 * @param value Value of the momentum that is used in the comparison
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
sel_px(LogicalOperators::ComparisonOperator op, float value,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Select a subcollection of ReconstructedParticles based on the y momentum 
 *
 * @param op Comparison operator to apply with the value
 * @param value Value of the momentum that is used in the comparison
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
sel_py(LogicalOperators::ComparisonOperator op, float value,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Select a subcollection of ReconstructedParticles based on the z momentum 
 *
 * @param op Comparison operator to apply with the value
 * @param value Value of the momentum that is used in the comparison
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
sel_pz(LogicalOperators::ComparisonOperator op, float value,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Select a subcollection of ReconstructedParticles based on the pseudorapidity
 *
 * @param op Comparison operator to apply with the value
 * @param value Value of the pseudorapidity that is used in the comparison
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
sel_eta(LogicalOperators::ComparisonOperator op, float value,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Select a subcollection of ReconstructedParticles based on the rapidity
 *
 * @param op Comparison operator to apply with the value
 * @param value Value of the rapidity that is used in the comparison
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
sel_rapidity(LogicalOperators::ComparisonOperator op, float value,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Select a subcollection of ReconstructedParticles based on the polar angle
 *
 * @param op Comparison operator to apply with the value
 * @param value Value of the angle that is used in the comparison
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
sel_theta(LogicalOperators::ComparisonOperator op, float value,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Select a subcollection of ReconstructedParticles based on the azimutal angle
 *
 * @param op Comparison operator to apply with the value
 * @param value Value of the angle that is used in the comparison
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
sel_phi(LogicalOperators::ComparisonOperator op, float value,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Select a subcollection of ReconstructedParticles based on the distance to origin
 *
 * @param op Comparison operator to apply with the value
 * @param value Value of the distance that is used in the comparison
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
sel_r(LogicalOperators::ComparisonOperator op, float value,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Select a subcollection of ReconstructedParticles based on the x distance
 *
 * @param op Comparison operator to apply with the value
 * @param value Value of the distance that is used in the comparison
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
sel_x(LogicalOperators::ComparisonOperator op, float value,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Select a subcollection of ReconstructedParticles based on the y distance
 *
 * @param op Comparison operator to apply with the value
 * @param value Value of the distance that is used in the comparison
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
sel_y(LogicalOperators::ComparisonOperator op, float value,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Select a subcollection of ReconstructedParticles based on the z distance
 *
 * @param op Comparison operator to apply with the value
 * @param value Value of the distance that is used in the comparison
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
sel_z(LogicalOperators::ComparisonOperator op, float value,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Select a subcollection of ReconstructedParticles based on the mass
 *
 * @param op Comparison operator to apply with the value
 * @param value Value of the mass that is used in the comparison
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
sel_m(LogicalOperators::ComparisonOperator op, float value,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Select a subcollection of ReconstructedParticles based on the charge
 *
 * @param op Comparison operator to apply with the value
 * @param value Value of the charge that is used in the comparison
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
sel_q(LogicalOperators::ComparisonOperator op, float value,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Select a subcollection of ReconstructedParticles based on the absolute charge
 *
 * @param op Comparison operator to apply with the value
 * @param value Value of the charge that is used in the comparison
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
sel_absq(LogicalOperators::ComparisonOperator op, float value,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Select a subcollection of ReconstructedParticles based on the pdg
 *
 * @param op Comparison operator to apply with the value
 * @param value Value of the pdg that is used in the comparison
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
sel_pdg(LogicalOperators::ComparisonOperator op, int value,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

/**
 * Select a subcollection of ReconstructedParticles based on the absolute pdg
 *
 * @param op Comparison operator to apply with the value
 * @param value Value of the pdg that is used in the comparison
 * @param particles List of reconstructed particles in an event
 *
 */
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
sel_abspdg(LogicalOperators::ComparisonOperator op, int value,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles);

} // namespace ReconstructedParticle
} // namespace k4::ral

#endif
