#include <Math/Vector3D.h>
#include <Math/Vector4D.h>
#include <cmath>
#include <edm4hep/MCParticleData.h>
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
get_p(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get transverse momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
get_pt(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get x momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
get_px(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get y momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
get_py(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get z momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
get_pz(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get pseudorapidity from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
get_eta(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get rapidity from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
get_rapidity(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get polar angle from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
get_theta(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get azimutal angle from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
get_phi(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
get_p_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get transverse momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
get_pt_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get x momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
get_px_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get y momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
get_py_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get z momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
get_pz_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get pseudorapidity from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
get_eta_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get rapidity from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
get_rapidity_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get polar angle from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
get_theta_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get azimutal angle from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
get_phi_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get distance to origin from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
get_r(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get x coordinate from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
get_x(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get y coordinate from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
get_y(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get z coordinate from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
get_z(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get distance to origin from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
get_r_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get x coordinate from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
get_x_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get y coordinate from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
get_y_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get z coordinate from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
get_z_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get energy from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
get_e(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get energy from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
get_e_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get mass from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
get_m(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get charge from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
get_q(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get absolute charge from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
get_absq(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get pdg from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<int>
get_pdg(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get absolute pdg from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<int>
get_abspdg(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get simulator status from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<int>
get_sim_stat(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Get generator status from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<int>
get_gen_stat(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int print_p(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print transverse momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int print_pt(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print x momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int print_px(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print y momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int print_py(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print z momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int print_pz(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print pseudorapidity from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int print_eta(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print rapidity from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int print_rapidity(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print polar angle from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int print_theta(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print azimutal angle from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int print_phi(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int print_p_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print transverse momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int print_pt_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print x momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int print_px_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print y momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int print_py_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print z momentum from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int print_pz_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print pseudorapidity from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int print_eta_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print rapidity from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int print_rapidity_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print polar angle from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int print_theta_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print azimutal angle from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int print_phi_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print distance to origin from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int print_r(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print x coordinate from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int print_x(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print y coordinate from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int print_y(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print z coordinate from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int print_z(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print distance to origin from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int print_r_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print x coordinate from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int print_x_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print y coordinate from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int print_y_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print z coordinate from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int print_z_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print energy from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int print_e(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print energy from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int print_e_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print mass from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int print_m(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print charge from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int print_q(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print absolute charge from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int print_absq(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print pdg from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int print_pdg(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print absolute pdg from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int print_abspdg(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print simulator status from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int print_sim_stat(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Print generator status from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
int print_gen_stat(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
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
mask_p(LogicalOperators::ComparisonOperator op, float val,
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
mask_pt(LogicalOperators::ComparisonOperator op, float val,
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
mask_px(LogicalOperators::ComparisonOperator op, float val,
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
mask_py(LogicalOperators::ComparisonOperator op, float val,
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
mask_pz(LogicalOperators::ComparisonOperator op, float val,
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
mask_eta(LogicalOperators::ComparisonOperator op, float val,
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
mask_rapidity(LogicalOperators::ComparisonOperator op, float val,
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
mask_theta(LogicalOperators::ComparisonOperator op, float val,
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
mask_phi(LogicalOperators::ComparisonOperator op, float val,
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
mask_p_end(LogicalOperators::ComparisonOperator op, float val,
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
mask_pt_end(LogicalOperators::ComparisonOperator op, float val,
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
mask_px_end(LogicalOperators::ComparisonOperator op, float val,
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
mask_py_end(LogicalOperators::ComparisonOperator op, float val,
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
mask_pz_end(LogicalOperators::ComparisonOperator op, float val,
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
mask_eta_end(LogicalOperators::ComparisonOperator op, float val,
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
mask_rapidity_end(LogicalOperators::ComparisonOperator op, float val,
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
mask_theta_end(LogicalOperators::ComparisonOperator op, float val,
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
mask_phi_end(LogicalOperators::ComparisonOperator op, float val,
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
mask_r(LogicalOperators::ComparisonOperator op, float val,
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
mask_x(LogicalOperators::ComparisonOperator op, float val,
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
mask_y(LogicalOperators::ComparisonOperator op, float val,
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
mask_z(LogicalOperators::ComparisonOperator op, float val,
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
mask_r_end(LogicalOperators::ComparisonOperator op, float val,
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
mask_x_end(LogicalOperators::ComparisonOperator op, float val,
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
mask_y_end(LogicalOperators::ComparisonOperator op, float val,
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
mask_z_end(LogicalOperators::ComparisonOperator op, float val,
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
mask_e(LogicalOperators::ComparisonOperator op, float val,
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
mask_e_end(LogicalOperators::ComparisonOperator op, float val,
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
mask_m(LogicalOperators::ComparisonOperator op, float val,
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
mask_q(LogicalOperators::ComparisonOperator op, float val,
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
mask_absq(LogicalOperators::ComparisonOperator op, float val,
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
mask_pdg(LogicalOperators::ComparisonOperator op, int val,
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
mask_abspdg(LogicalOperators::ComparisonOperator op, int val,
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
mask_sim_stat(LogicalOperators::ComparisonOperator op, int val,
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
mask_gen_stat(LogicalOperators::ComparisonOperator op, int val,
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
sel_p(LogicalOperators::ComparisonOperator op, float val,
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
sel_pt(LogicalOperators::ComparisonOperator op, float val,
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
sel_px(LogicalOperators::ComparisonOperator op, float val,
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
sel_py(LogicalOperators::ComparisonOperator op, float val,
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
sel_pz(LogicalOperators::ComparisonOperator op, float val,
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
sel_eta(LogicalOperators::ComparisonOperator op, float val,
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
sel_rapidity(LogicalOperators::ComparisonOperator op, float val,
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
sel_theta(LogicalOperators::ComparisonOperator op, float val,
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
sel_phi(LogicalOperators::ComparisonOperator op, float val,
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
sel_p_end(LogicalOperators::ComparisonOperator op, float val,
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
sel_pt_end(LogicalOperators::ComparisonOperator op, float val,
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
sel_px_end(LogicalOperators::ComparisonOperator op, float val,
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
sel_py_end(LogicalOperators::ComparisonOperator op, float val,
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
sel_pz_end(LogicalOperators::ComparisonOperator op, float val,
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
sel_eta_end(LogicalOperators::ComparisonOperator op, float val,
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
sel_rapidity_end(LogicalOperators::ComparisonOperator op, float val,
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
sel_theta_end(LogicalOperators::ComparisonOperator op, float val,
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
sel_phi_end(LogicalOperators::ComparisonOperator op, float val,
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
sel_r(LogicalOperators::ComparisonOperator op, float val,
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
sel_x(LogicalOperators::ComparisonOperator op, float val,
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
sel_y(LogicalOperators::ComparisonOperator op, float val,
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
sel_z(LogicalOperators::ComparisonOperator op, float val,
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
sel_r_end(LogicalOperators::ComparisonOperator op, float val,
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
sel_x_end(LogicalOperators::ComparisonOperator op, float val,
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
sel_y_end(LogicalOperators::ComparisonOperator op, float val,
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
sel_z_end(LogicalOperators::ComparisonOperator op, float val,
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
sel_e(LogicalOperators::ComparisonOperator op, float val,
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
sel_e_end(LogicalOperators::ComparisonOperator op, float val,
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
sel_m(LogicalOperators::ComparisonOperator op, float val,
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
sel_q(LogicalOperators::ComparisonOperator op, float val,
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
sel_absq(LogicalOperators::ComparisonOperator op, float val,
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
sel_pdg(LogicalOperators::ComparisonOperator op, int val,
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
sel_abspdg(LogicalOperators::ComparisonOperator op, int val,
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
sel_sim_stat(LogicalOperators::ComparisonOperator op, int val,
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
sel_gen_stat(LogicalOperators::ComparisonOperator op, int val,
             ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
/**
 * Sort a collection of MCParticle based on the value of momentum.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sort_p(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
       bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of transverse momentum.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sort_pt(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
        bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of x momentum.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sort_px(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
        bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of y momentum.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sort_py(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
        bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of z momentum.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sort_pz(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
        bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of pseudorapidity.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sort_eta(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
         bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of rapidity.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sort_rapidity(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
              bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of polar angle.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sort_theta(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
           bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of azimutal angle.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sort_phi(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
         bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of momentum.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sort_p_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
           bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of transverse momentum.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sort_pt_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
            bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of x momentum.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sort_px_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
            bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of y momentum.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sort_py_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
            bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of z momentum.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sort_pz_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
            bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of pseudorapidity.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sort_eta_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
             bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of rapidity.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sort_rapidity_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
                  bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of polar angle.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sort_theta_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
               bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of azimutal angle.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sort_phi_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
             bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of distance to origin.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sort_r(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
       bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of x coordinate.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sort_x(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
       bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of y coordinate.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sort_y(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
       bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of z coordinate.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sort_z(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
       bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of distance to origin.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sort_r_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
           bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of x coordinate.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sort_x_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
           bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of y coordinate.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sort_y_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
           bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of z coordinate.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sort_z_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
           bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of energy.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sort_e(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
       bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of energy.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sort_e_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
           bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of mass.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sort_m(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
       bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of charge.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sort_q(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
       bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of absolute charge.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sort_absq(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
          bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of pdg.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sort_pdg(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
         bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of absolute pdg.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sort_abspdg(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
            bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of simulator status.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sort_sim_stat(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
              bool reverse = false);
/**
 * Sort a collection of MCParticle based on the value of generator status.
 *
 * @param collection Collection of MCParticle to be sorted
 * @param reverse Change the order of sorting.
 *
 */
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sort_gen_stat(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
              bool reverse = false);
} // namespace ReconstructedParticle
} // namespace k4::ral
