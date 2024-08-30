#include <Math/Vector3D.h>
#include <Math/Vector4D.h>
#include <cmath>
#include <edm4hep/MCParticleData.h>
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
 * Get energy from each item in a collection of MCParticle.
 *
 * @param collection Collection of MCParticle to look in
 *
 */
ROOT::VecOps::RVec<float>
get_e(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection);
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
} // namespace ReconstructedParticle
} // namespace k4::ral
