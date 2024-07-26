#include <Math/Vector3Dfwd.h>
#include <algorithm>
#include <catch2/catch_message.hpp>
#include <random>
#include "catch2/catch_test_macros.hpp"

#include "ral/ReconstructedParticle.h"
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

TEST_CASE("Getter analyzers from ReconstructedParticle", "[ReconstructedParticle]") {
  ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> particles(20, {});
  std::ranges::generate(particles.begin(), particles.end(), generateRandomParticle);

  SECTION("Getting charge"){
    ROOT::VecOps::RVec<float> charges = ReconstructedParticle::get_charge(particles);
    REQUIRE(charges.size() == particles.size());
    for(size_t i = 0; i < charges.size(); i++){
      REQUIRE(charges.at(i) == particles.at(i).charge);
    }
  }

  SECTION("Getting mass"){
    ROOT::VecOps::RVec<float> mass = ReconstructedParticle::get_mass(particles);
    REQUIRE(mass.size() == particles.size());
    for(size_t i = 0; i < mass.size(); i++){
      REQUIRE(mass.at(i) == particles.at(i).mass);
    }
  }

  SECTION("Getting energy"){
    ROOT::VecOps::RVec<float> energy = ReconstructedParticle::get_energy(particles);
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
    ROOT::VecOps::RVec<int> PDG = ReconstructedParticle::get_PDG(particles);
    REQUIRE(PDG.size() == particles.size());
    for(size_t i = 0; i < PDG.size(); i++){
      REQUIRE(PDG.at(i) == particles.at(i).PDG);
    }
  }

  SECTION("Getting momentum"){
    ROOT::VecOps::RVec<ROOT::Math::XYZVector> momentum = ReconstructedParticle::get_momentum(particles);
    REQUIRE(momentum.size() == particles.size());
    for(size_t i = 0; i < momentum.size(); i++){
      REQUIRE(momentum.at(i).x() == particles.at(i).momentum.x);
      REQUIRE(momentum.at(i).y() == particles.at(i).momentum.y);
      REQUIRE(momentum.at(i).z() == particles.at(i).momentum.z);
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
