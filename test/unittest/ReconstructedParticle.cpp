#include <Math/Vector4Dfwd.h>
#include <ROOT/RVec.hxx>
#include <algorithm>
#include <random>
#include <cmath>
#include <catch2/catch_message.hpp>
#include <catch2/catch_test_macros.hpp>
#include <catch2/generators/catch_generators.hpp>
#include <catch2/matchers/catch_matchers_floating_point.hpp>

#include "ral/ReconstructedParticle.h"
#include "ral/LogicalOperators.h"
#include <Math/Vector3Dfwd.h>
#include <edm4hep/ReconstructedParticleData.h>

using namespace k4::ral;

edm4hep::ReconstructedParticleData generateRandomParticle(){
  std::random_device rd;  // Will be used to obtain a seed for the random number engine
  std::mt19937 gen(rd()); // Standard mersenne_twister_engine seeded with rd()
  std::uniform_real_distribution<> dis_real(-1000.0, 1000.0);
  std::uniform_int_distribution<> dis_int(-1000, 1000);
  edm4hep::ReconstructedParticleData data;
  data.PDG = dis_int(gen);
  data.mass = dis_real(gen);
  data.charge = dis_real(gen);
  data.energy = dis_real(gen);
  return data;
}

template<typename T>
void test_masking(LogicalOperators::ComparisonOperator op, T mask_value, T real_value, bool mask) {
  switch (op) {
    case LogicalOperators::ComparisonOperator::LESS:
      REQUIRE((real_value < mask_value) == mask);
      break;
    case LogicalOperators::ComparisonOperator::LESSEQ:
      REQUIRE((real_value <= mask_value) == mask);
      break;
    case LogicalOperators::ComparisonOperator::EQ:
      REQUIRE((real_value == mask_value) == mask);
      break;
    case LogicalOperators::ComparisonOperator::GREATEREQ:
      REQUIRE((real_value >= mask_value) == mask);
      break;
    case LogicalOperators::ComparisonOperator::GREATER:
      REQUIRE((real_value > mask_value) == mask);
      break;
  }
}


TEST_CASE("Getter analyzers from ReconstructedParticle", "[ReconstructedParticle]") {
  ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles(20, {});
  std::ranges::generate(particles.begin(), particles.end(), generateRandomParticle);

  SECTION("Getting momentum modulus"){
    auto vec = ReconstructedParticle::get_pmod(particles);
    REQUIRE(vec.size() == particles.size());
    for(size_t i = 0; i < charges.size(); i++){
      float px = particles[i].momentum.x;
      float py = particles[i].momentum.y;
      float pz = particles[i].momentum.z;
      float pmod = std::sqrt(px*px+py*py+pz*pz);
      REQUIRE(vec[i], Catch::Matchers::WithinRel(pmod, 0.001));
    }
  }

  SECTION("Getting transverse momentum"){
    auto vec = ReconstructedParticle::get_pt(particles);
    REQUIRE(vec.size() == particles.size());
    for(size_t i = 0; i < charges.size(); i++){
      ROOT::Math::PxPyPzMVector momentum(particles[i].momentum.x,
                                         particles[i].momentum.y,
                                         particles[i].momentum.z,
                                         particles[i].mass);
      REQUIRE(vec[i], Catch::Matchers::WithinRel(momentum.pt(), 0.001));
    }
  }

  SECTION("Getting x momentum"){
    auto vec = ReconstructedParticle::get_px(particles);
    REQUIRE(vec.size() == particles.size());
    for(size_t i = 0; i < charges.size(); i++){
      ROOT::Math::PxPyPzMVector momentum(particles[i].momentum.x,
                                         particles[i].momentum.y,
                                         particles[i].momentum.z,
                                         particles[i].mass);
      REQUIRE(vec[i], Catch::Matchers::WithinRel(momentum.px(), 0.001));
    }
  }

  SECTION("Getting y momentum"){
    auto vec = ReconstructedParticle::get_py(particles);
    REQUIRE(vec.size() == particles.size());
    for(size_t i = 0; i < charges.size(); i++){
      ROOT::Math::PxPyPzMVector momentum(particles[i].momentum.x,
                                         particles[i].momentum.y,
                                         particles[i].momentum.z,
                                         particles[i].mass);
      REQUIRE(vec[i], Catch::Matchers::WithinRel(momentum.py(), 0.001));
    }
  }

  SECTION("Getting z momentum"){
    auto vec = ReconstructedParticle::get_pz(particles);
    REQUIRE(vec.size() == particles.size());
    for(size_t i = 0; i < charges.size(); i++){
      ROOT::Math::PxPyPzMVector momentum(particles[i].momentum.x,
                                         particles[i].momentum.y,
                                         particles[i].momentum.z,
                                         particles[i].mass);
      REQUIRE(vec[i], Catch::Matchers::WithinRel(momentum.pz(), 0.001));
    }
  }

  SECTION("Getting Pseudorapidity"){
    auto vec = ReconstructedParticle::get_eta(particles);
    REQUIRE(vec.size() == particles.size());
    for(size_t i = 0; i < charges.size(); i++){
      ROOT::Math::PxPyPzMVector momentum(particles[i].momentum.x,
                                         particles[i].momentum.y,
                                         particles[i].momentum.z,
                                         particles[i].mass);
      REQUIRE(vec[i], Catch::Matchers::WithinRel(momentum.eta(), 0.001));
    }
  }

  SECTION("Getting rapidity"){
    auto vec = ReconstructedParticle::get_rapidity(particles);
    REQUIRE(vec.size() == particles.size());
    for(size_t i = 0; i < charges.size(); i++){
      ROOT::Math::PxPyPzMVector momentum(particles[i].momentum.x,
                                         particles[i].momentum.y,
                                         particles[i].momentum.z,
                                         particles[i].mass);
      REQUIRE(vec[i], Catch::Matchers::WithinRel(momentum.Rapidity(), 0.001));
    }
  }

  SECTION("Getting polar angle"){
    auto vec = ReconstructedParticle::get_theta(particles);
    REQUIRE(vec.size() == particles.size());
    for(size_t i = 0; i < charges.size(); i++){
      ROOT::Math::PxPyPzMVector momentum(particles[i].momentum.x,
                                         particles[i].momentum.y,
                                         particles[i].momentum.z,
                                         particles[i].mass);
      REQUIRE(vec[i], Catch::Matchers::WithinRel(momentum.theta(), 0.001));
    }
  }

  SECTION("Getting azimutal angle"){
    auto vec = ReconstructedParticle::get_phi(particles);
    REQUIRE(vec.size() == particles.size());
    for(size_t i = 0; i < charges.size(); i++){
      ROOT::Math::PxPyPzMVector momentum(particles[i].momentum.x,
                                         particles[i].momentum.y,
                                         particles[i].momentum.z,
                                         particles[i].mass);
      REQUIRE(vec[i], Catch::Matchers::WithinRel(momentum.phi(), 0.001));
    }
  }

  SECTION("Getting distance to origin"){
    auto vec = ReconstructedParticle::get_r(particles);
    REQUIRE(vec.size() == particles.size());
    for(size_t i = 0; i < charges.size(); i++){
      float x = particles[i].referencePoint.x;
      float y = particles[i].referencePoint.y;
      float z = particles[i].referencePoint.z;
      float r = std::sqrt(x*x+y*y+z*z);
      REQUIRE(vec[i], Catch::Matchers::WithinRel(r, 0.001));
    }
  }

  SECTION("Getting x distance to origin"){
    auto vec = ReconstructedParticle::get_x(particles);
    REQUIRE(vec.size() == particles.size());
    for(size_t i = 0; i < charges.size(); i++){
      float x = particles[i].referencePoint.x;
      REQUIRE(vec[i], Catch::Matchers::WithinRel(x, 0.001));
    }
  }

  SECTION("Getting charge"){
    ROOT::VecOps::RVec<float> charges = ReconstructedParticle::get_q(particles);
    REQUIRE(charges.size() == particles.size());
    for(size_t i = 0; i < charges.size(); i++){
      REQUIRE(charges.at(i) == particles.at(i).charge);
    }
  }

  SECTION("Getting mass"){
    ROOT::VecOps::RVec<float> mass = ReconstructedParticle::get_m(particles);
    REQUIRE(mass.size() == particles.size());
    for(size_t i = 0; i < mass.size(); i++){
      REQUIRE(mass.at(i) == particles.at(i).mass);
    }
  }

  SECTION("Getting energy"){
    ROOT::VecOps::RVec<float> energy = ReconstructedParticle::get_e(particles);
    REQUIRE(energy.size() == particles.size());
    for(size_t i = 0; i < energy.size(); i++){
      REQUIRE(energy.at(i) == particles.at(i).energy);
    }
  }

  SECTION("Getting goodnessOfPID"){
    ROOT::VecOps::RVec<float> goodnessOfPID = ReconstructedParticle::get_goodnessOfPID(particles);
    REQUIRE(goodnessOfPID.size() == particles.size());
    for(size_t i = 0; i < goodnessOfPID.size(); i++){
      REQUIRE(goodnessOfPID.at(i) == particles.at(i).goodnessOfPID);
    }
  }

  SECTION("Getting PDG"){
    ROOT::VecOps::RVec<int> PDG = ReconstructedParticle::get_pdg(particles);
    REQUIRE(PDG.size() == particles.size());
    for(size_t i = 0; i < PDG.size(); i++){
      REQUIRE(PDG.at(i) == particles.at(i).PDG);
    }
  }

  SECTION("Getting momentum"){
    ROOT::VecOps::RVec<ROOT::Math::PxPyPzMVector> momentum = ReconstructedParticle::get_p(particles);
    REQUIRE(momentum.size() == particles.size());
    for(size_t i = 0; i < momentum.size(); i++){
      REQUIRE(momentum.at(i).px() == particles.at(i).momentum.x);
      REQUIRE(momentum.at(i).py() == particles.at(i).momentum.y);
      REQUIRE(momentum.at(i).pz() == particles.at(i).momentum.z);
      REQUIRE(momentum.at(i).mass() == particles.at(i).mass);
    }
  }

  SECTION("Getting referencePoint"){
    ROOT::VecOps::RVec<ROOT::Math::XYZVector> referencePoint = ReconstructedParticle::get_referencePoint(particles);
    REQUIRE(referencePoint.size() == particles.size());
    for(size_t i = 0; i < referencePoint.size(); i++){
      REQUIRE(referencePoint.at(i).x() == particles.at(i).referencePoint.x);
      REQUIRE(referencePoint.at(i).y() == particles.at(i).referencePoint.y);
      REQUIRE(referencePoint.at(i).z() == particles.at(i).referencePoint.z);
    }
  }
}


TEST_CASE("Boolean masking analyzers from ReconstructedParticle", "[ReconstructedParticle]") {
  ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles(20, {});
  std::ranges::generate(particles.begin(), particles.end(), generateRandomParticle);
  auto op = GENERATE(
    LogicalOperators::ComparisonOperator::LESS,
    LogicalOperators::ComparisonOperator::LESSEQ,
    LogicalOperators::ComparisonOperator::EQ,
    LogicalOperators::ComparisonOperator::GREATEREQ,
    LogicalOperators::ComparisonOperator::GREATER);

  SECTION("Masking energy"){
    float n = GENERATE(0., 50.);
    auto mask = ReconstructedParticle::mask_e(op, n, particles);
    for(int i = 0; i < particles.size(); i++){
      test_masking(op, n, (float)particles[i].energy, mask[i]);
    }
    auto filtered_particles = LogicalOperators::filter<edm4hep::ReconstructedParticleData>(mask, particles);
    REQUIRE(ROOT::VecOps::Sum(mask) == filtered_particles.size());
  }

  SECTION("Masking momentum modulus"){
    float n = GENERATE(0., 100, 500);
    auto mask = ReconstructedParticle::mask_pmod(op, n, particles);
    for(int i = 0; i < particles.size(); i++){
      ROOT::Math::PxPyPzMVector momentum(particles[i].momentum.x,
                                         particles[i].momentum.y,
                                         particles[i].momentum.z,
                                         particles[i].mass);
      test_masking(op, n, (float)momentum.P(), mask[i]);
    }
    auto filtered_particles = LogicalOperators::filter<edm4hep::ReconstructedParticleData>(mask, particles);
    REQUIRE(ROOT::VecOps::Sum(mask) == filtered_particles.size());
  }

  SECTION("Masking transverse momentum"){
    float n = GENERATE(0., 100, 500);
    auto mask = ReconstructedParticle::mask_pt(op, n, particles);
    for(int i = 0; i < particles.size(); i++){
      ROOT::Math::PxPyPzMVector momentum(particles[i].momentum.x,
                                         particles[i].momentum.y,
                                         particles[i].momentum.z,
                                         particles[i].mass);
      test_masking(op, n, (float)momentum.pt(), mask[i]);
    }
    auto filtered_particles = LogicalOperators::filter<edm4hep::ReconstructedParticleData>(mask, particles);
    REQUIRE(ROOT::VecOps::Sum(mask) == filtered_particles.size());
  }

  SECTION("Masking x momentum"){
    float n = GENERATE(0., 100, 500);
    auto mask = ReconstructedParticle::mask_px(op, n, particles);
    for(int i = 0; i < particles.size(); i++){
      ROOT::Math::PxPyPzMVector momentum(particles[i].momentum.x,
                                         particles[i].momentum.y,
                                         particles[i].momentum.z,
                                         particles[i].mass);
      test_masking(op, n, (float)momentum.px(), mask[i]);
    }
    auto filtered_particles = LogicalOperators::filter<edm4hep::ReconstructedParticleData>(mask, particles);
    REQUIRE(ROOT::VecOps::Sum(mask) == filtered_particles.size());
  }

  SECTION("Masking y momentum"){
    float n = GENERATE(0., 100, 500);
    auto mask = ReconstructedParticle::mask_py(op, n, particles);
    for(int i = 0; i < particles.size(); i++){
      ROOT::Math::PxPyPzMVector momentum(particles[i].momentum.x,
                                         particles[i].momentum.y,
                                         particles[i].momentum.z,
                                         particles[i].mass);
      test_masking(op, n, (float)momentum.py(), mask[i]);
    }
    auto filtered_particles = LogicalOperators::filter<edm4hep::ReconstructedParticleData>(mask, particles);
    REQUIRE(ROOT::VecOps::Sum(mask) == filtered_particles.size());
  }

  SECTION("Masking z momentum"){
    float n = GENERATE(0., 100, 500);
    auto mask = ReconstructedParticle::mask_pz(op, n, particles);
    for(int i = 0; i < particles.size(); i++){
      ROOT::Math::PxPyPzMVector momentum(particles[i].momentum.x,
                                         particles[i].momentum.y,
                                         particles[i].momentum.z,
                                         particles[i].mass);
      test_masking(op, n, (float)momentum.pz(), mask[i]);
    }
    auto filtered_particles = LogicalOperators::filter<edm4hep::ReconstructedParticleData>(mask, particles);
    REQUIRE(ROOT::VecOps::Sum(mask) == filtered_particles.size());
  }

  SECTION("Masking pseudorapidity"){
    float n = GENERATE(0., 100, 500);
    auto mask = ReconstructedParticle::mask_eta(op, n, particles);
    for(int i = 0; i < particles.size(); i++){
      ROOT::Math::PxPyPzMVector momentum(particles[i].momentum.x,
                                         particles[i].momentum.y,
                                         particles[i].momentum.z,
                                         particles[i].mass);
      test_masking(op, n, (float)momentum.eta(), mask[i]);
    }
    auto filtered_particles = LogicalOperators::filter<edm4hep::ReconstructedParticleData>(mask, particles);
    REQUIRE(ROOT::VecOps::Sum(mask) == filtered_particles.size());
  }

  SECTION("Masking rapidity"){
    float n = GENERATE(0., 100, 500);
    auto mask = ReconstructedParticle::mask_rapidity(op, n, particles);
    for(int i = 0; i < particles.size(); i++){
      ROOT::Math::PxPyPzMVector momentum(particles[i].momentum.x,
                                         particles[i].momentum.y,
                                         particles[i].momentum.z,
                                         particles[i].mass);
      test_masking(op, n, (float)momentum.Rapidity(), mask[i]);
    }
    auto filtered_particles = LogicalOperators::filter<edm4hep::ReconstructedParticleData>(mask, particles);
    REQUIRE(ROOT::VecOps::Sum(mask) == filtered_particles.size());
  }


  SECTION("Masking polar angle"){
    float n = GENERATE(0., 3.14, 6.28);
    auto mask = ReconstructedParticle::mask_theta(op, n, particles);
    for(int i = 0; i < particles.size(); i++){
      ROOT::Math::PxPyPzMVector momentum(particles[i].momentum.x,
                                         particles[i].momentum.y,
                                         particles[i].momentum.z,
                                         particles[i].mass);
      test_masking(op, n, (float)momentum.theta(), mask[i]);
    }
    auto filtered_particles = LogicalOperators::filter<edm4hep::ReconstructedParticleData>(mask, particles);
    REQUIRE(ROOT::VecOps::Sum(mask) == filtered_particles.size());
  }

  SECTION("Masking azimutal angle"){
    float n = GENERATE(0., 3.14, 6.28);
    auto mask = ReconstructedParticle::mask_phi(op, n, particles);
    for(int i = 0; i < particles.size(); i++){
      ROOT::Math::PxPyPzMVector momentum(particles[i].momentum.x,
                                         particles[i].momentum.y,
                                         particles[i].momentum.z,
                                         particles[i].mass);
      test_masking(op, n, (float)momentum.phi(), mask[i]);
    }
    auto filtered_particles = LogicalOperators::filter<edm4hep::ReconstructedParticleData>(mask, particles);
    REQUIRE(ROOT::VecOps::Sum(mask) == filtered_particles.size());
  }

  SECTION("Masking distance to origin"){
    float n = GENERATE(0., 100., 500.);
    auto mask = ReconstructedParticle::mask_r(op, n, particles);
    for(int i = 0; i < particles.size(); i++){
      float x = particles[i].referencePoint.x;
      float y = particles[i].referencePoint.y;
      float z = particles[i].referencePoint.z;
      float r = std::sqrt(x * x + y * y + z * z);
      test_masking(op, n, r, mask[i]);
    }
    auto filtered_particles = LogicalOperators::filter<edm4hep::ReconstructedParticleData>(mask, particles);
    REQUIRE(ROOT::VecOps::Sum(mask) == filtered_particles.size());
  }

  SECTION("Masking x distance to origin"){
    float n = GENERATE(0., 100., 500.);
    auto mask = ReconstructedParticle::mask_x(op, n, particles);
    for(int i = 0; i < particles.size(); i++){
      float x = particles[i].referencePoint.x;
      test_masking(op, n, x, mask[i]);
    }
    auto filtered_particles = LogicalOperators::filter<edm4hep::ReconstructedParticleData>(mask, particles);
    REQUIRE(ROOT::VecOps::Sum(mask) == filtered_particles.size());
  }

  SECTION("Masking y distance to origin"){
    float n = GENERATE(0., 100., 500.);
    auto mask = ReconstructedParticle::mask_y(op, n, particles);
    for(int i = 0; i < particles.size(); i++){
      float y = particles[i].referencePoint.y;
      test_masking(op, n, y, mask[i]);
    }
    auto filtered_particles = LogicalOperators::filter<edm4hep::ReconstructedParticleData>(mask, particles);
    REQUIRE(ROOT::VecOps::Sum(mask) == filtered_particles.size());
  }

  SECTION("Masking z distance to origin"){
    float n = GENERATE(0., 100., 500.);
    auto mask = ReconstructedParticle::mask_z(op, n, particles);
    for(int i = 0; i < particles.size(); i++){
      float z = particles[i].referencePoint.z;
      test_masking(op, n, z, mask[i]);
    }
    auto filtered_particles = LogicalOperators::filter<edm4hep::ReconstructedParticleData>(mask, particles);
    REQUIRE(ROOT::VecOps::Sum(mask) == filtered_particles.size());
  }

  SECTION("Masking particle mass"){
    float n = GENERATE(0., 100., 500.);
    auto mask = ReconstructedParticle::mask_m(op, n, particles);
    for(int i = 0; i < particles.size(); i++){
      test_masking(op, n, particles[i].mass, mask[i]);
    }
    auto filtered_particles = LogicalOperators::filter<edm4hep::ReconstructedParticleData>(mask, particles);
    REQUIRE(ROOT::VecOps::Sum(mask) == filtered_particles.size());
  }

  SECTION("Masking particle charge"){
    float n = GENERATE(0., 100., 500.);
    auto mask = ReconstructedParticle::mask_q(op, n, particles);
    for(int i = 0; i < particles.size(); i++){
      test_masking(op, n, particles[i].charge, mask[i]);
    }
    auto filtered_particles = LogicalOperators::filter<edm4hep::ReconstructedParticleData>(mask, particles);
    REQUIRE(ROOT::VecOps::Sum(mask) == filtered_particles.size());
  }

  SECTION("Masking particle absolute charge"){
    float n = GENERATE(-100., 100., 500.);
    auto mask = ReconstructedParticle::mask_absq(op, std::abs(n), particles);
    for(int i = 0; i < particles.size(); i++){
      test_masking(op, std::abs(n), std::abs(particles[i].charge), mask[i]);
    }
    auto filtered_particles = LogicalOperators::filter<edm4hep::ReconstructedParticleData>(mask, particles);
    REQUIRE(ROOT::VecOps::Sum(mask) == filtered_particles.size());
  }

  SECTION("Masking particle pdg"){
    int n = GENERATE(-5, 0, 5);
    auto mask = ReconstructedParticle::mask_pdg(op, n, particles);
    for(int i = 0; i < particles.size(); i++){
      test_masking(op, n, particles[i].PDG, mask[i]);
    }
    auto filtered_particles = LogicalOperators::filter<edm4hep::ReconstructedParticleData>(mask, particles);
    REQUIRE(ROOT::VecOps::Sum(mask) == filtered_particles.size());
  }

  SECTION("Masking particle abspdg"){
    int n = GENERATE(-5, 0, 5);
    auto mask = ReconstructedParticle::mask_abspdg(op, std::abs(n), particles);
    for(int i = 0; i < particles.size(); i++){
      test_masking(op, std::abs(n), std::abs(particles[i].PDG), mask[i]);
    }
    auto filtered_particles = LogicalOperators::filter<edm4hep::ReconstructedParticleData>(mask, particles);
    REQUIRE(ROOT::VecOps::Sum(mask) == filtered_particles.size());
  }

}
