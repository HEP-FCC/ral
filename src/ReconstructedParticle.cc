#include <ral/ReconstructedParticle.h>
namespace k4::ral {
namespace ReconstructedParticle {
ROOT::VecOps::RVec<float>
getP(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::ReconstructedParticleData &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(item.momentum.x, item.momentum.y,
                                      item.momentum.z, item.mass);
    result = presult.P();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getPt(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::ReconstructedParticleData &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(item.momentum.x, item.momentum.y,
                                      item.momentum.z, item.mass);
    result = presult.pt();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getPx(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::ReconstructedParticleData &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(item.momentum.x, item.momentum.y,
                                      item.momentum.z, item.mass);
    result = presult.px();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getPy(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::ReconstructedParticleData &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(item.momentum.x, item.momentum.y,
                                      item.momentum.z, item.mass);
    result = presult.py();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getPz(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::ReconstructedParticleData &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(item.momentum.x, item.momentum.y,
                                      item.momentum.z, item.mass);
    result = presult.pz();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getEta(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::ReconstructedParticleData &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(item.momentum.x, item.momentum.y,
                                      item.momentum.z, item.mass);
    result = presult.eta();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getRapidity(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::ReconstructedParticleData &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(item.momentum.x, item.momentum.y,
                                      item.momentum.z, item.mass);
    result = presult.Rapidity();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getTheta(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::ReconstructedParticleData &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(item.momentum.x, item.momentum.y,
                                      item.momentum.z, item.mass);
    result = presult.theta();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getPhi(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::ReconstructedParticleData &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(item.momentum.x, item.momentum.y,
                                      item.momentum.z, item.mass);
    result = presult.phi();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getR(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::ReconstructedParticleData &item : collection) {
    float result;
    ROOT::Math::XYZVector rresult(item.referencePoint.x, item.referencePoint.y,
                                  item.referencePoint.z);
    result = rresult.r();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getX(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::ReconstructedParticleData &item : collection) {
    float result;
    ROOT::Math::XYZVector rresult(item.referencePoint.x, item.referencePoint.y,
                                  item.referencePoint.z);
    result = rresult.x();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getY(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::ReconstructedParticleData &item : collection) {
    float result;
    ROOT::Math::XYZVector rresult(item.referencePoint.x, item.referencePoint.y,
                                  item.referencePoint.z);
    result = rresult.y();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getZ(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::ReconstructedParticleData &item : collection) {
    float result;
    ROOT::Math::XYZVector rresult(item.referencePoint.x, item.referencePoint.y,
                                  item.referencePoint.z);
    result = rresult.z();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getE(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::ReconstructedParticleData &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(item.momentum.x, item.momentum.y,
                                      item.momentum.z, item.mass);
    result = presult.e();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getM(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::ReconstructedParticleData &item : collection) {
    float result;
    result = (item.mass);
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getQ(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::ReconstructedParticleData &item : collection) {
    float result;
    result = (item.charge);
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getAbsq(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::ReconstructedParticleData &item : collection) {
    float result;
    result = std::abs(item.charge);
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<int>
getPdg(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<int> vec;
  vec.reserve(collection.size());
  for (const edm4hep::ReconstructedParticleData &item : collection) {
    int result;
    result = (item.PDG);
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<int>
getAbspdg(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<int> vec;
  vec.reserve(collection.size());
  for (const edm4hep::ReconstructedParticleData &item : collection) {
    int result;
    result = std::abs(item.PDG);
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getP(const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::ReconstructedParticle &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(item.getMomentum().x,
                                      item.getMomentum().y,
                                      item.getMomentum().z, item.getMass());
    result = presult.P();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getPt(const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::ReconstructedParticle &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(item.getMomentum().x,
                                      item.getMomentum().y,
                                      item.getMomentum().z, item.getMass());
    result = presult.pt();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getPx(const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::ReconstructedParticle &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(item.getMomentum().x,
                                      item.getMomentum().y,
                                      item.getMomentum().z, item.getMass());
    result = presult.px();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getPy(const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::ReconstructedParticle &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(item.getMomentum().x,
                                      item.getMomentum().y,
                                      item.getMomentum().z, item.getMass());
    result = presult.py();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getPz(const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::ReconstructedParticle &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(item.getMomentum().x,
                                      item.getMomentum().y,
                                      item.getMomentum().z, item.getMass());
    result = presult.pz();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getEta(const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::ReconstructedParticle &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(item.getMomentum().x,
                                      item.getMomentum().y,
                                      item.getMomentum().z, item.getMass());
    result = presult.eta();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getRapidity(const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::ReconstructedParticle &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(item.getMomentum().x,
                                      item.getMomentum().y,
                                      item.getMomentum().z, item.getMass());
    result = presult.Rapidity();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getTheta(const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::ReconstructedParticle &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(item.getMomentum().x,
                                      item.getMomentum().y,
                                      item.getMomentum().z, item.getMass());
    result = presult.theta();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getPhi(const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::ReconstructedParticle &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(item.getMomentum().x,
                                      item.getMomentum().y,
                                      item.getMomentum().z, item.getMass());
    result = presult.phi();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getR(const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::ReconstructedParticle &item : collection) {
    float result;
    ROOT::Math::XYZVector rresult(item.getReferencePoint().x,
                                  item.getReferencePoint().y,
                                  item.getReferencePoint().z);
    result = rresult.r();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getX(const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::ReconstructedParticle &item : collection) {
    float result;
    ROOT::Math::XYZVector rresult(item.getReferencePoint().x,
                                  item.getReferencePoint().y,
                                  item.getReferencePoint().z);
    result = rresult.x();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getY(const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::ReconstructedParticle &item : collection) {
    float result;
    ROOT::Math::XYZVector rresult(item.getReferencePoint().x,
                                  item.getReferencePoint().y,
                                  item.getReferencePoint().z);
    result = rresult.y();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getZ(const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::ReconstructedParticle &item : collection) {
    float result;
    ROOT::Math::XYZVector rresult(item.getReferencePoint().x,
                                  item.getReferencePoint().y,
                                  item.getReferencePoint().z);
    result = rresult.z();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getE(const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::ReconstructedParticle &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(item.getMomentum().x,
                                      item.getMomentum().y,
                                      item.getMomentum().z, item.getMass());
    result = presult.e();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getM(const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::ReconstructedParticle &item : collection) {
    float result;
    result = (item.getMass());
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getQ(const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::ReconstructedParticle &item : collection) {
    float result;
    result = (item.getCharge());
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getAbsq(const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::ReconstructedParticle &item : collection) {
    float result;
    result = std::abs(item.getCharge());
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<int>
getPdg(const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<int> vec;
  vec.reserve(collection.size());
  for (const edm4hep::ReconstructedParticle &item : collection) {
    int result;
    result = (item.getPDG());
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<int>
getAbspdg(const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<int> vec;
  vec.reserve(collection.size());
  for (const edm4hep::ReconstructedParticle &item : collection) {
    int result;
    result = std::abs(item.getPDG());
    vec.emplace_back(result);
  }
  return vec;
}
int printP(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<float> vec = getP(collection);
  std::cout << "Momentum: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printPt(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<float> vec = getPt(collection);
  std::cout << "Transverse momentum: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printPx(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<float> vec = getPx(collection);
  std::cout << "X momentum: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printPy(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<float> vec = getPy(collection);
  std::cout << "Y momentum: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printPz(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<float> vec = getPz(collection);
  std::cout << "Z momentum: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printEta(
    ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<float> vec = getEta(collection);
  std::cout << "Pseudorapidity: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printRapidity(
    ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<float> vec = getRapidity(collection);
  std::cout << "Rapidity: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printTheta(
    ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<float> vec = getTheta(collection);
  std::cout << "Polar angle: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printPhi(
    ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<float> vec = getPhi(collection);
  std::cout << "Azimutal angle: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printR(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<float> vec = getR(collection);
  std::cout << "Distance to origin: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printX(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<float> vec = getX(collection);
  std::cout << "X coordinate: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printY(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<float> vec = getY(collection);
  std::cout << "Y coordinate: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printZ(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<float> vec = getZ(collection);
  std::cout << "Z coordinate: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printE(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<float> vec = getE(collection);
  std::cout << "Energy: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printM(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<float> vec = getM(collection);
  std::cout << "Mass: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printQ(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<float> vec = getQ(collection);
  std::cout << "Charge: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printAbsq(
    ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<float> vec = getAbsq(collection);
  std::cout << "Absolute charge: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printPdg(
    ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<int> vec = getPdg(collection);
  std::cout << "Pdg: ";
  for (const int &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printAbspdg(
    ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<int> vec = getAbspdg(collection);
  std::cout << "Absolute pdg: ";
  for (const int &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printP(const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getP(collection);
  std::cout << "Momentum: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printPt(const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getPt(collection);
  std::cout << "Transverse momentum: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printPx(const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getPx(collection);
  std::cout << "X momentum: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printPy(const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getPy(collection);
  std::cout << "Y momentum: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printPz(const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getPz(collection);
  std::cout << "Z momentum: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printEta(const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getEta(collection);
  std::cout << "Pseudorapidity: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printRapidity(const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getRapidity(collection);
  std::cout << "Rapidity: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printTheta(const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getTheta(collection);
  std::cout << "Polar angle: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printPhi(const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getPhi(collection);
  std::cout << "Azimutal angle: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printR(const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getR(collection);
  std::cout << "Distance to origin: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printX(const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getX(collection);
  std::cout << "X coordinate: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printY(const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getY(collection);
  std::cout << "Y coordinate: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printZ(const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getZ(collection);
  std::cout << "Z coordinate: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printE(const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getE(collection);
  std::cout << "Energy: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printM(const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getM(collection);
  std::cout << "Mass: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printQ(const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getQ(collection);
  std::cout << "Charge: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printAbsq(const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getAbsq(collection);
  std::cout << "Absolute charge: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printPdg(const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<int> vec = getPdg(collection);
  std::cout << "Pdg: ";
  for (const int &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printAbspdg(const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<int> vec = getAbspdg(collection);
  std::cout << "Absolute pdg: ";
  for (const int &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
ROOT::VecOps::RVec<bool>
maskP(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getP(collection);
  for (const float &item : vals) {
    switch (op) {
    case LogicalOperators::ComparisonOperator::LESS:
      vec.emplace_back(item < val);
      break;
    case LogicalOperators::ComparisonOperator::LESSEQ:
      vec.emplace_back(item <= val);
      break;
    case LogicalOperators::ComparisonOperator::EQ:
      vec.emplace_back(item == val);
      break;
    case LogicalOperators::ComparisonOperator::GREATEREQ:
      vec.emplace_back(item >= val);
      break;
    case LogicalOperators::ComparisonOperator::GREATER:
      vec.emplace_back(item > val);
      break;
    }
  }
  return vec;
}
ROOT::VecOps::RVec<bool>
maskPt(LogicalOperators::ComparisonOperator op, float val,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getPt(collection);
  for (const float &item : vals) {
    switch (op) {
    case LogicalOperators::ComparisonOperator::LESS:
      vec.emplace_back(item < val);
      break;
    case LogicalOperators::ComparisonOperator::LESSEQ:
      vec.emplace_back(item <= val);
      break;
    case LogicalOperators::ComparisonOperator::EQ:
      vec.emplace_back(item == val);
      break;
    case LogicalOperators::ComparisonOperator::GREATEREQ:
      vec.emplace_back(item >= val);
      break;
    case LogicalOperators::ComparisonOperator::GREATER:
      vec.emplace_back(item > val);
      break;
    }
  }
  return vec;
}
ROOT::VecOps::RVec<bool>
maskPx(LogicalOperators::ComparisonOperator op, float val,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getPx(collection);
  for (const float &item : vals) {
    switch (op) {
    case LogicalOperators::ComparisonOperator::LESS:
      vec.emplace_back(item < val);
      break;
    case LogicalOperators::ComparisonOperator::LESSEQ:
      vec.emplace_back(item <= val);
      break;
    case LogicalOperators::ComparisonOperator::EQ:
      vec.emplace_back(item == val);
      break;
    case LogicalOperators::ComparisonOperator::GREATEREQ:
      vec.emplace_back(item >= val);
      break;
    case LogicalOperators::ComparisonOperator::GREATER:
      vec.emplace_back(item > val);
      break;
    }
  }
  return vec;
}
ROOT::VecOps::RVec<bool>
maskPy(LogicalOperators::ComparisonOperator op, float val,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getPy(collection);
  for (const float &item : vals) {
    switch (op) {
    case LogicalOperators::ComparisonOperator::LESS:
      vec.emplace_back(item < val);
      break;
    case LogicalOperators::ComparisonOperator::LESSEQ:
      vec.emplace_back(item <= val);
      break;
    case LogicalOperators::ComparisonOperator::EQ:
      vec.emplace_back(item == val);
      break;
    case LogicalOperators::ComparisonOperator::GREATEREQ:
      vec.emplace_back(item >= val);
      break;
    case LogicalOperators::ComparisonOperator::GREATER:
      vec.emplace_back(item > val);
      break;
    }
  }
  return vec;
}
ROOT::VecOps::RVec<bool>
maskPz(LogicalOperators::ComparisonOperator op, float val,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getPz(collection);
  for (const float &item : vals) {
    switch (op) {
    case LogicalOperators::ComparisonOperator::LESS:
      vec.emplace_back(item < val);
      break;
    case LogicalOperators::ComparisonOperator::LESSEQ:
      vec.emplace_back(item <= val);
      break;
    case LogicalOperators::ComparisonOperator::EQ:
      vec.emplace_back(item == val);
      break;
    case LogicalOperators::ComparisonOperator::GREATEREQ:
      vec.emplace_back(item >= val);
      break;
    case LogicalOperators::ComparisonOperator::GREATER:
      vec.emplace_back(item > val);
      break;
    }
  }
  return vec;
}
ROOT::VecOps::RVec<bool>
maskEta(LogicalOperators::ComparisonOperator op, float val,
        ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getEta(collection);
  for (const float &item : vals) {
    switch (op) {
    case LogicalOperators::ComparisonOperator::LESS:
      vec.emplace_back(item < val);
      break;
    case LogicalOperators::ComparisonOperator::LESSEQ:
      vec.emplace_back(item <= val);
      break;
    case LogicalOperators::ComparisonOperator::EQ:
      vec.emplace_back(item == val);
      break;
    case LogicalOperators::ComparisonOperator::GREATEREQ:
      vec.emplace_back(item >= val);
      break;
    case LogicalOperators::ComparisonOperator::GREATER:
      vec.emplace_back(item > val);
      break;
    }
  }
  return vec;
}
ROOT::VecOps::RVec<bool> maskRapidity(
    LogicalOperators::ComparisonOperator op, float val,
    ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getRapidity(collection);
  for (const float &item : vals) {
    switch (op) {
    case LogicalOperators::ComparisonOperator::LESS:
      vec.emplace_back(item < val);
      break;
    case LogicalOperators::ComparisonOperator::LESSEQ:
      vec.emplace_back(item <= val);
      break;
    case LogicalOperators::ComparisonOperator::EQ:
      vec.emplace_back(item == val);
      break;
    case LogicalOperators::ComparisonOperator::GREATEREQ:
      vec.emplace_back(item >= val);
      break;
    case LogicalOperators::ComparisonOperator::GREATER:
      vec.emplace_back(item > val);
      break;
    }
  }
  return vec;
}
ROOT::VecOps::RVec<bool>
maskTheta(LogicalOperators::ComparisonOperator op, float val,
          ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getTheta(collection);
  for (const float &item : vals) {
    switch (op) {
    case LogicalOperators::ComparisonOperator::LESS:
      vec.emplace_back(item < val);
      break;
    case LogicalOperators::ComparisonOperator::LESSEQ:
      vec.emplace_back(item <= val);
      break;
    case LogicalOperators::ComparisonOperator::EQ:
      vec.emplace_back(item == val);
      break;
    case LogicalOperators::ComparisonOperator::GREATEREQ:
      vec.emplace_back(item >= val);
      break;
    case LogicalOperators::ComparisonOperator::GREATER:
      vec.emplace_back(item > val);
      break;
    }
  }
  return vec;
}
ROOT::VecOps::RVec<bool>
maskPhi(LogicalOperators::ComparisonOperator op, float val,
        ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getPhi(collection);
  for (const float &item : vals) {
    switch (op) {
    case LogicalOperators::ComparisonOperator::LESS:
      vec.emplace_back(item < val);
      break;
    case LogicalOperators::ComparisonOperator::LESSEQ:
      vec.emplace_back(item <= val);
      break;
    case LogicalOperators::ComparisonOperator::EQ:
      vec.emplace_back(item == val);
      break;
    case LogicalOperators::ComparisonOperator::GREATEREQ:
      vec.emplace_back(item >= val);
      break;
    case LogicalOperators::ComparisonOperator::GREATER:
      vec.emplace_back(item > val);
      break;
    }
  }
  return vec;
}
ROOT::VecOps::RVec<bool>
maskR(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getR(collection);
  for (const float &item : vals) {
    switch (op) {
    case LogicalOperators::ComparisonOperator::LESS:
      vec.emplace_back(item < val);
      break;
    case LogicalOperators::ComparisonOperator::LESSEQ:
      vec.emplace_back(item <= val);
      break;
    case LogicalOperators::ComparisonOperator::EQ:
      vec.emplace_back(item == val);
      break;
    case LogicalOperators::ComparisonOperator::GREATEREQ:
      vec.emplace_back(item >= val);
      break;
    case LogicalOperators::ComparisonOperator::GREATER:
      vec.emplace_back(item > val);
      break;
    }
  }
  return vec;
}
ROOT::VecOps::RVec<bool>
maskX(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getX(collection);
  for (const float &item : vals) {
    switch (op) {
    case LogicalOperators::ComparisonOperator::LESS:
      vec.emplace_back(item < val);
      break;
    case LogicalOperators::ComparisonOperator::LESSEQ:
      vec.emplace_back(item <= val);
      break;
    case LogicalOperators::ComparisonOperator::EQ:
      vec.emplace_back(item == val);
      break;
    case LogicalOperators::ComparisonOperator::GREATEREQ:
      vec.emplace_back(item >= val);
      break;
    case LogicalOperators::ComparisonOperator::GREATER:
      vec.emplace_back(item > val);
      break;
    }
  }
  return vec;
}
ROOT::VecOps::RVec<bool>
maskY(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getY(collection);
  for (const float &item : vals) {
    switch (op) {
    case LogicalOperators::ComparisonOperator::LESS:
      vec.emplace_back(item < val);
      break;
    case LogicalOperators::ComparisonOperator::LESSEQ:
      vec.emplace_back(item <= val);
      break;
    case LogicalOperators::ComparisonOperator::EQ:
      vec.emplace_back(item == val);
      break;
    case LogicalOperators::ComparisonOperator::GREATEREQ:
      vec.emplace_back(item >= val);
      break;
    case LogicalOperators::ComparisonOperator::GREATER:
      vec.emplace_back(item > val);
      break;
    }
  }
  return vec;
}
ROOT::VecOps::RVec<bool>
maskZ(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getZ(collection);
  for (const float &item : vals) {
    switch (op) {
    case LogicalOperators::ComparisonOperator::LESS:
      vec.emplace_back(item < val);
      break;
    case LogicalOperators::ComparisonOperator::LESSEQ:
      vec.emplace_back(item <= val);
      break;
    case LogicalOperators::ComparisonOperator::EQ:
      vec.emplace_back(item == val);
      break;
    case LogicalOperators::ComparisonOperator::GREATEREQ:
      vec.emplace_back(item >= val);
      break;
    case LogicalOperators::ComparisonOperator::GREATER:
      vec.emplace_back(item > val);
      break;
    }
  }
  return vec;
}
ROOT::VecOps::RVec<bool>
maskE(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getE(collection);
  for (const float &item : vals) {
    switch (op) {
    case LogicalOperators::ComparisonOperator::LESS:
      vec.emplace_back(item < val);
      break;
    case LogicalOperators::ComparisonOperator::LESSEQ:
      vec.emplace_back(item <= val);
      break;
    case LogicalOperators::ComparisonOperator::EQ:
      vec.emplace_back(item == val);
      break;
    case LogicalOperators::ComparisonOperator::GREATEREQ:
      vec.emplace_back(item >= val);
      break;
    case LogicalOperators::ComparisonOperator::GREATER:
      vec.emplace_back(item > val);
      break;
    }
  }
  return vec;
}
ROOT::VecOps::RVec<bool>
maskM(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getM(collection);
  for (const float &item : vals) {
    switch (op) {
    case LogicalOperators::ComparisonOperator::LESS:
      vec.emplace_back(item < val);
      break;
    case LogicalOperators::ComparisonOperator::LESSEQ:
      vec.emplace_back(item <= val);
      break;
    case LogicalOperators::ComparisonOperator::EQ:
      vec.emplace_back(item == val);
      break;
    case LogicalOperators::ComparisonOperator::GREATEREQ:
      vec.emplace_back(item >= val);
      break;
    case LogicalOperators::ComparisonOperator::GREATER:
      vec.emplace_back(item > val);
      break;
    }
  }
  return vec;
}
ROOT::VecOps::RVec<bool>
maskQ(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getQ(collection);
  for (const float &item : vals) {
    switch (op) {
    case LogicalOperators::ComparisonOperator::LESS:
      vec.emplace_back(item < val);
      break;
    case LogicalOperators::ComparisonOperator::LESSEQ:
      vec.emplace_back(item <= val);
      break;
    case LogicalOperators::ComparisonOperator::EQ:
      vec.emplace_back(item == val);
      break;
    case LogicalOperators::ComparisonOperator::GREATEREQ:
      vec.emplace_back(item >= val);
      break;
    case LogicalOperators::ComparisonOperator::GREATER:
      vec.emplace_back(item > val);
      break;
    }
  }
  return vec;
}
ROOT::VecOps::RVec<bool>
maskAbsq(LogicalOperators::ComparisonOperator op, float val,
         ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getAbsq(collection);
  for (const float &item : vals) {
    switch (op) {
    case LogicalOperators::ComparisonOperator::LESS:
      vec.emplace_back(item < val);
      break;
    case LogicalOperators::ComparisonOperator::LESSEQ:
      vec.emplace_back(item <= val);
      break;
    case LogicalOperators::ComparisonOperator::EQ:
      vec.emplace_back(item == val);
      break;
    case LogicalOperators::ComparisonOperator::GREATEREQ:
      vec.emplace_back(item >= val);
      break;
    case LogicalOperators::ComparisonOperator::GREATER:
      vec.emplace_back(item > val);
      break;
    }
  }
  return vec;
}
ROOT::VecOps::RVec<bool>
maskPdg(LogicalOperators::ComparisonOperator op, int val,
        ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<int> vals = getPdg(collection);
  for (const int &item : vals) {
    switch (op) {
    case LogicalOperators::ComparisonOperator::LESS:
      vec.emplace_back(item < val);
      break;
    case LogicalOperators::ComparisonOperator::LESSEQ:
      vec.emplace_back(item <= val);
      break;
    case LogicalOperators::ComparisonOperator::EQ:
      vec.emplace_back(item == val);
      break;
    case LogicalOperators::ComparisonOperator::GREATEREQ:
      vec.emplace_back(item >= val);
      break;
    case LogicalOperators::ComparisonOperator::GREATER:
      vec.emplace_back(item > val);
      break;
    }
  }
  return vec;
}
ROOT::VecOps::RVec<bool>
maskAbspdg(LogicalOperators::ComparisonOperator op, int val,
           ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<int> vals = getAbspdg(collection);
  for (const int &item : vals) {
    switch (op) {
    case LogicalOperators::ComparisonOperator::LESS:
      vec.emplace_back(item < val);
      break;
    case LogicalOperators::ComparisonOperator::LESSEQ:
      vec.emplace_back(item <= val);
      break;
    case LogicalOperators::ComparisonOperator::EQ:
      vec.emplace_back(item == val);
      break;
    case LogicalOperators::ComparisonOperator::GREATEREQ:
      vec.emplace_back(item >= val);
      break;
    case LogicalOperators::ComparisonOperator::GREATER:
      vec.emplace_back(item > val);
      break;
    }
  }
  return vec;
}
ROOT::VecOps::RVec<bool>
maskP(LogicalOperators::ComparisonOperator op, float val,
      const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getP(collection);
  for (const float &item : vals) {
    switch (op) {
    case LogicalOperators::ComparisonOperator::LESS:
      vec.emplace_back(item < val);
      break;
    case LogicalOperators::ComparisonOperator::LESSEQ:
      vec.emplace_back(item <= val);
      break;
    case LogicalOperators::ComparisonOperator::EQ:
      vec.emplace_back(item == val);
      break;
    case LogicalOperators::ComparisonOperator::GREATEREQ:
      vec.emplace_back(item >= val);
      break;
    case LogicalOperators::ComparisonOperator::GREATER:
      vec.emplace_back(item > val);
      break;
    }
  }
  return vec;
}
ROOT::VecOps::RVec<bool>
maskPt(LogicalOperators::ComparisonOperator op, float val,
       const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getPt(collection);
  for (const float &item : vals) {
    switch (op) {
    case LogicalOperators::ComparisonOperator::LESS:
      vec.emplace_back(item < val);
      break;
    case LogicalOperators::ComparisonOperator::LESSEQ:
      vec.emplace_back(item <= val);
      break;
    case LogicalOperators::ComparisonOperator::EQ:
      vec.emplace_back(item == val);
      break;
    case LogicalOperators::ComparisonOperator::GREATEREQ:
      vec.emplace_back(item >= val);
      break;
    case LogicalOperators::ComparisonOperator::GREATER:
      vec.emplace_back(item > val);
      break;
    }
  }
  return vec;
}
ROOT::VecOps::RVec<bool>
maskPx(LogicalOperators::ComparisonOperator op, float val,
       const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getPx(collection);
  for (const float &item : vals) {
    switch (op) {
    case LogicalOperators::ComparisonOperator::LESS:
      vec.emplace_back(item < val);
      break;
    case LogicalOperators::ComparisonOperator::LESSEQ:
      vec.emplace_back(item <= val);
      break;
    case LogicalOperators::ComparisonOperator::EQ:
      vec.emplace_back(item == val);
      break;
    case LogicalOperators::ComparisonOperator::GREATEREQ:
      vec.emplace_back(item >= val);
      break;
    case LogicalOperators::ComparisonOperator::GREATER:
      vec.emplace_back(item > val);
      break;
    }
  }
  return vec;
}
ROOT::VecOps::RVec<bool>
maskPy(LogicalOperators::ComparisonOperator op, float val,
       const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getPy(collection);
  for (const float &item : vals) {
    switch (op) {
    case LogicalOperators::ComparisonOperator::LESS:
      vec.emplace_back(item < val);
      break;
    case LogicalOperators::ComparisonOperator::LESSEQ:
      vec.emplace_back(item <= val);
      break;
    case LogicalOperators::ComparisonOperator::EQ:
      vec.emplace_back(item == val);
      break;
    case LogicalOperators::ComparisonOperator::GREATEREQ:
      vec.emplace_back(item >= val);
      break;
    case LogicalOperators::ComparisonOperator::GREATER:
      vec.emplace_back(item > val);
      break;
    }
  }
  return vec;
}
ROOT::VecOps::RVec<bool>
maskPz(LogicalOperators::ComparisonOperator op, float val,
       const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getPz(collection);
  for (const float &item : vals) {
    switch (op) {
    case LogicalOperators::ComparisonOperator::LESS:
      vec.emplace_back(item < val);
      break;
    case LogicalOperators::ComparisonOperator::LESSEQ:
      vec.emplace_back(item <= val);
      break;
    case LogicalOperators::ComparisonOperator::EQ:
      vec.emplace_back(item == val);
      break;
    case LogicalOperators::ComparisonOperator::GREATEREQ:
      vec.emplace_back(item >= val);
      break;
    case LogicalOperators::ComparisonOperator::GREATER:
      vec.emplace_back(item > val);
      break;
    }
  }
  return vec;
}
ROOT::VecOps::RVec<bool>
maskEta(LogicalOperators::ComparisonOperator op, float val,
        const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getEta(collection);
  for (const float &item : vals) {
    switch (op) {
    case LogicalOperators::ComparisonOperator::LESS:
      vec.emplace_back(item < val);
      break;
    case LogicalOperators::ComparisonOperator::LESSEQ:
      vec.emplace_back(item <= val);
      break;
    case LogicalOperators::ComparisonOperator::EQ:
      vec.emplace_back(item == val);
      break;
    case LogicalOperators::ComparisonOperator::GREATEREQ:
      vec.emplace_back(item >= val);
      break;
    case LogicalOperators::ComparisonOperator::GREATER:
      vec.emplace_back(item > val);
      break;
    }
  }
  return vec;
}
ROOT::VecOps::RVec<bool>
maskRapidity(LogicalOperators::ComparisonOperator op, float val,
             const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getRapidity(collection);
  for (const float &item : vals) {
    switch (op) {
    case LogicalOperators::ComparisonOperator::LESS:
      vec.emplace_back(item < val);
      break;
    case LogicalOperators::ComparisonOperator::LESSEQ:
      vec.emplace_back(item <= val);
      break;
    case LogicalOperators::ComparisonOperator::EQ:
      vec.emplace_back(item == val);
      break;
    case LogicalOperators::ComparisonOperator::GREATEREQ:
      vec.emplace_back(item >= val);
      break;
    case LogicalOperators::ComparisonOperator::GREATER:
      vec.emplace_back(item > val);
      break;
    }
  }
  return vec;
}
ROOT::VecOps::RVec<bool>
maskTheta(LogicalOperators::ComparisonOperator op, float val,
          const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getTheta(collection);
  for (const float &item : vals) {
    switch (op) {
    case LogicalOperators::ComparisonOperator::LESS:
      vec.emplace_back(item < val);
      break;
    case LogicalOperators::ComparisonOperator::LESSEQ:
      vec.emplace_back(item <= val);
      break;
    case LogicalOperators::ComparisonOperator::EQ:
      vec.emplace_back(item == val);
      break;
    case LogicalOperators::ComparisonOperator::GREATEREQ:
      vec.emplace_back(item >= val);
      break;
    case LogicalOperators::ComparisonOperator::GREATER:
      vec.emplace_back(item > val);
      break;
    }
  }
  return vec;
}
ROOT::VecOps::RVec<bool>
maskPhi(LogicalOperators::ComparisonOperator op, float val,
        const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getPhi(collection);
  for (const float &item : vals) {
    switch (op) {
    case LogicalOperators::ComparisonOperator::LESS:
      vec.emplace_back(item < val);
      break;
    case LogicalOperators::ComparisonOperator::LESSEQ:
      vec.emplace_back(item <= val);
      break;
    case LogicalOperators::ComparisonOperator::EQ:
      vec.emplace_back(item == val);
      break;
    case LogicalOperators::ComparisonOperator::GREATEREQ:
      vec.emplace_back(item >= val);
      break;
    case LogicalOperators::ComparisonOperator::GREATER:
      vec.emplace_back(item > val);
      break;
    }
  }
  return vec;
}
ROOT::VecOps::RVec<bool>
maskR(LogicalOperators::ComparisonOperator op, float val,
      const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getR(collection);
  for (const float &item : vals) {
    switch (op) {
    case LogicalOperators::ComparisonOperator::LESS:
      vec.emplace_back(item < val);
      break;
    case LogicalOperators::ComparisonOperator::LESSEQ:
      vec.emplace_back(item <= val);
      break;
    case LogicalOperators::ComparisonOperator::EQ:
      vec.emplace_back(item == val);
      break;
    case LogicalOperators::ComparisonOperator::GREATEREQ:
      vec.emplace_back(item >= val);
      break;
    case LogicalOperators::ComparisonOperator::GREATER:
      vec.emplace_back(item > val);
      break;
    }
  }
  return vec;
}
ROOT::VecOps::RVec<bool>
maskX(LogicalOperators::ComparisonOperator op, float val,
      const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getX(collection);
  for (const float &item : vals) {
    switch (op) {
    case LogicalOperators::ComparisonOperator::LESS:
      vec.emplace_back(item < val);
      break;
    case LogicalOperators::ComparisonOperator::LESSEQ:
      vec.emplace_back(item <= val);
      break;
    case LogicalOperators::ComparisonOperator::EQ:
      vec.emplace_back(item == val);
      break;
    case LogicalOperators::ComparisonOperator::GREATEREQ:
      vec.emplace_back(item >= val);
      break;
    case LogicalOperators::ComparisonOperator::GREATER:
      vec.emplace_back(item > val);
      break;
    }
  }
  return vec;
}
ROOT::VecOps::RVec<bool>
maskY(LogicalOperators::ComparisonOperator op, float val,
      const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getY(collection);
  for (const float &item : vals) {
    switch (op) {
    case LogicalOperators::ComparisonOperator::LESS:
      vec.emplace_back(item < val);
      break;
    case LogicalOperators::ComparisonOperator::LESSEQ:
      vec.emplace_back(item <= val);
      break;
    case LogicalOperators::ComparisonOperator::EQ:
      vec.emplace_back(item == val);
      break;
    case LogicalOperators::ComparisonOperator::GREATEREQ:
      vec.emplace_back(item >= val);
      break;
    case LogicalOperators::ComparisonOperator::GREATER:
      vec.emplace_back(item > val);
      break;
    }
  }
  return vec;
}
ROOT::VecOps::RVec<bool>
maskZ(LogicalOperators::ComparisonOperator op, float val,
      const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getZ(collection);
  for (const float &item : vals) {
    switch (op) {
    case LogicalOperators::ComparisonOperator::LESS:
      vec.emplace_back(item < val);
      break;
    case LogicalOperators::ComparisonOperator::LESSEQ:
      vec.emplace_back(item <= val);
      break;
    case LogicalOperators::ComparisonOperator::EQ:
      vec.emplace_back(item == val);
      break;
    case LogicalOperators::ComparisonOperator::GREATEREQ:
      vec.emplace_back(item >= val);
      break;
    case LogicalOperators::ComparisonOperator::GREATER:
      vec.emplace_back(item > val);
      break;
    }
  }
  return vec;
}
ROOT::VecOps::RVec<bool>
maskE(LogicalOperators::ComparisonOperator op, float val,
      const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getE(collection);
  for (const float &item : vals) {
    switch (op) {
    case LogicalOperators::ComparisonOperator::LESS:
      vec.emplace_back(item < val);
      break;
    case LogicalOperators::ComparisonOperator::LESSEQ:
      vec.emplace_back(item <= val);
      break;
    case LogicalOperators::ComparisonOperator::EQ:
      vec.emplace_back(item == val);
      break;
    case LogicalOperators::ComparisonOperator::GREATEREQ:
      vec.emplace_back(item >= val);
      break;
    case LogicalOperators::ComparisonOperator::GREATER:
      vec.emplace_back(item > val);
      break;
    }
  }
  return vec;
}
ROOT::VecOps::RVec<bool>
maskM(LogicalOperators::ComparisonOperator op, float val,
      const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getM(collection);
  for (const float &item : vals) {
    switch (op) {
    case LogicalOperators::ComparisonOperator::LESS:
      vec.emplace_back(item < val);
      break;
    case LogicalOperators::ComparisonOperator::LESSEQ:
      vec.emplace_back(item <= val);
      break;
    case LogicalOperators::ComparisonOperator::EQ:
      vec.emplace_back(item == val);
      break;
    case LogicalOperators::ComparisonOperator::GREATEREQ:
      vec.emplace_back(item >= val);
      break;
    case LogicalOperators::ComparisonOperator::GREATER:
      vec.emplace_back(item > val);
      break;
    }
  }
  return vec;
}
ROOT::VecOps::RVec<bool>
maskQ(LogicalOperators::ComparisonOperator op, float val,
      const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getQ(collection);
  for (const float &item : vals) {
    switch (op) {
    case LogicalOperators::ComparisonOperator::LESS:
      vec.emplace_back(item < val);
      break;
    case LogicalOperators::ComparisonOperator::LESSEQ:
      vec.emplace_back(item <= val);
      break;
    case LogicalOperators::ComparisonOperator::EQ:
      vec.emplace_back(item == val);
      break;
    case LogicalOperators::ComparisonOperator::GREATEREQ:
      vec.emplace_back(item >= val);
      break;
    case LogicalOperators::ComparisonOperator::GREATER:
      vec.emplace_back(item > val);
      break;
    }
  }
  return vec;
}
ROOT::VecOps::RVec<bool>
maskAbsq(LogicalOperators::ComparisonOperator op, float val,
         const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getAbsq(collection);
  for (const float &item : vals) {
    switch (op) {
    case LogicalOperators::ComparisonOperator::LESS:
      vec.emplace_back(item < val);
      break;
    case LogicalOperators::ComparisonOperator::LESSEQ:
      vec.emplace_back(item <= val);
      break;
    case LogicalOperators::ComparisonOperator::EQ:
      vec.emplace_back(item == val);
      break;
    case LogicalOperators::ComparisonOperator::GREATEREQ:
      vec.emplace_back(item >= val);
      break;
    case LogicalOperators::ComparisonOperator::GREATER:
      vec.emplace_back(item > val);
      break;
    }
  }
  return vec;
}
ROOT::VecOps::RVec<bool>
maskPdg(LogicalOperators::ComparisonOperator op, int val,
        const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<int> vals = getPdg(collection);
  for (const int &item : vals) {
    switch (op) {
    case LogicalOperators::ComparisonOperator::LESS:
      vec.emplace_back(item < val);
      break;
    case LogicalOperators::ComparisonOperator::LESSEQ:
      vec.emplace_back(item <= val);
      break;
    case LogicalOperators::ComparisonOperator::EQ:
      vec.emplace_back(item == val);
      break;
    case LogicalOperators::ComparisonOperator::GREATEREQ:
      vec.emplace_back(item >= val);
      break;
    case LogicalOperators::ComparisonOperator::GREATER:
      vec.emplace_back(item > val);
      break;
    }
  }
  return vec;
}
ROOT::VecOps::RVec<bool>
maskAbspdg(LogicalOperators::ComparisonOperator op, int val,
           const edm4hep::ReconstructedParticleCollection &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<int> vals = getAbspdg(collection);
  for (const int &item : vals) {
    switch (op) {
    case LogicalOperators::ComparisonOperator::LESS:
      vec.emplace_back(item < val);
      break;
    case LogicalOperators::ComparisonOperator::LESSEQ:
      vec.emplace_back(item <= val);
      break;
    case LogicalOperators::ComparisonOperator::EQ:
      vec.emplace_back(item == val);
      break;
    case LogicalOperators::ComparisonOperator::GREATEREQ:
      vec.emplace_back(item >= val);
      break;
    case LogicalOperators::ComparisonOperator::GREATER:
      vec.emplace_back(item > val);
      break;
    }
  }
  return vec;
}
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
selP(LogicalOperators::ComparisonOperator op, float val,
     ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  auto mask = maskP(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
selPt(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  auto mask = maskPt(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
selPx(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  auto mask = maskPx(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
selPy(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  auto mask = maskPy(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
selPz(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  auto mask = maskPz(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
selEta(LogicalOperators::ComparisonOperator op, float val,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  auto mask = maskEta(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
selRapidity(LogicalOperators::ComparisonOperator op, float val,
            ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  auto mask = maskRapidity(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
selTheta(LogicalOperators::ComparisonOperator op, float val,
         ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  auto mask = maskTheta(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
selPhi(LogicalOperators::ComparisonOperator op, float val,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  auto mask = maskPhi(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
selR(LogicalOperators::ComparisonOperator op, float val,
     ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  auto mask = maskR(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
selX(LogicalOperators::ComparisonOperator op, float val,
     ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  auto mask = maskX(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
selY(LogicalOperators::ComparisonOperator op, float val,
     ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  auto mask = maskY(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
selZ(LogicalOperators::ComparisonOperator op, float val,
     ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  auto mask = maskZ(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
selE(LogicalOperators::ComparisonOperator op, float val,
     ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  auto mask = maskE(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
selM(LogicalOperators::ComparisonOperator op, float val,
     ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  auto mask = maskM(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
selQ(LogicalOperators::ComparisonOperator op, float val,
     ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  auto mask = maskQ(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
selAbsq(LogicalOperators::ComparisonOperator op, float val,
        ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  auto mask = maskAbsq(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
selPdg(LogicalOperators::ComparisonOperator op, int val,
       ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  auto mask = maskPdg(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
selAbspdg(LogicalOperators::ComparisonOperator op, int val,
          ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection) {
  auto mask = maskAbspdg(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::ReconstructedParticleCollection
selP(LogicalOperators::ComparisonOperator op, float val,
     const edm4hep::ReconstructedParticleCollection &collection) {
  auto mask = maskP(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::ReconstructedParticleCollection
selPt(LogicalOperators::ComparisonOperator op, float val,
      const edm4hep::ReconstructedParticleCollection &collection) {
  auto mask = maskPt(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::ReconstructedParticleCollection
selPx(LogicalOperators::ComparisonOperator op, float val,
      const edm4hep::ReconstructedParticleCollection &collection) {
  auto mask = maskPx(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::ReconstructedParticleCollection
selPy(LogicalOperators::ComparisonOperator op, float val,
      const edm4hep::ReconstructedParticleCollection &collection) {
  auto mask = maskPy(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::ReconstructedParticleCollection
selPz(LogicalOperators::ComparisonOperator op, float val,
      const edm4hep::ReconstructedParticleCollection &collection) {
  auto mask = maskPz(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::ReconstructedParticleCollection
selEta(LogicalOperators::ComparisonOperator op, float val,
       const edm4hep::ReconstructedParticleCollection &collection) {
  auto mask = maskEta(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::ReconstructedParticleCollection
selRapidity(LogicalOperators::ComparisonOperator op, float val,
            const edm4hep::ReconstructedParticleCollection &collection) {
  auto mask = maskRapidity(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::ReconstructedParticleCollection
selTheta(LogicalOperators::ComparisonOperator op, float val,
         const edm4hep::ReconstructedParticleCollection &collection) {
  auto mask = maskTheta(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::ReconstructedParticleCollection
selPhi(LogicalOperators::ComparisonOperator op, float val,
       const edm4hep::ReconstructedParticleCollection &collection) {
  auto mask = maskPhi(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::ReconstructedParticleCollection
selR(LogicalOperators::ComparisonOperator op, float val,
     const edm4hep::ReconstructedParticleCollection &collection) {
  auto mask = maskR(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::ReconstructedParticleCollection
selX(LogicalOperators::ComparisonOperator op, float val,
     const edm4hep::ReconstructedParticleCollection &collection) {
  auto mask = maskX(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::ReconstructedParticleCollection
selY(LogicalOperators::ComparisonOperator op, float val,
     const edm4hep::ReconstructedParticleCollection &collection) {
  auto mask = maskY(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::ReconstructedParticleCollection
selZ(LogicalOperators::ComparisonOperator op, float val,
     const edm4hep::ReconstructedParticleCollection &collection) {
  auto mask = maskZ(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::ReconstructedParticleCollection
selE(LogicalOperators::ComparisonOperator op, float val,
     const edm4hep::ReconstructedParticleCollection &collection) {
  auto mask = maskE(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::ReconstructedParticleCollection
selM(LogicalOperators::ComparisonOperator op, float val,
     const edm4hep::ReconstructedParticleCollection &collection) {
  auto mask = maskM(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::ReconstructedParticleCollection
selQ(LogicalOperators::ComparisonOperator op, float val,
     const edm4hep::ReconstructedParticleCollection &collection) {
  auto mask = maskQ(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::ReconstructedParticleCollection
selAbsq(LogicalOperators::ComparisonOperator op, float val,
        const edm4hep::ReconstructedParticleCollection &collection) {
  auto mask = maskAbsq(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::ReconstructedParticleCollection
selPdg(LogicalOperators::ComparisonOperator op, int val,
       const edm4hep::ReconstructedParticleCollection &collection) {
  auto mask = maskPdg(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::ReconstructedParticleCollection
selAbspdg(LogicalOperators::ComparisonOperator op, int val,
          const edm4hep::ReconstructedParticleCollection &collection) {
  auto mask = maskAbspdg(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
sortP(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection,
      bool reverse) {
  auto lambda = [reverse](edm4hep::ReconstructedParticleData x,
                          edm4hep::ReconstructedParticleData y) {
    float a, b;
    ROOT::Math::PxPyPzMVector pa(x.momentum.x, x.momentum.y, x.momentum.z,
                                 x.mass);
    a = pa.P();
    ROOT::Math::PxPyPzMVector pb(y.momentum.x, y.momentum.y, y.momentum.z,
                                 y.mass);
    b = pb.P();
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
sortPt(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection,
       bool reverse) {
  auto lambda = [reverse](edm4hep::ReconstructedParticleData x,
                          edm4hep::ReconstructedParticleData y) {
    float a, b;
    ROOT::Math::PxPyPzMVector pa(x.momentum.x, x.momentum.y, x.momentum.z,
                                 x.mass);
    a = pa.pt();
    ROOT::Math::PxPyPzMVector pb(y.momentum.x, y.momentum.y, y.momentum.z,
                                 y.mass);
    b = pb.pt();
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
sortPx(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection,
       bool reverse) {
  auto lambda = [reverse](edm4hep::ReconstructedParticleData x,
                          edm4hep::ReconstructedParticleData y) {
    float a, b;
    ROOT::Math::PxPyPzMVector pa(x.momentum.x, x.momentum.y, x.momentum.z,
                                 x.mass);
    a = pa.px();
    ROOT::Math::PxPyPzMVector pb(y.momentum.x, y.momentum.y, y.momentum.z,
                                 y.mass);
    b = pb.px();
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
sortPy(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection,
       bool reverse) {
  auto lambda = [reverse](edm4hep::ReconstructedParticleData x,
                          edm4hep::ReconstructedParticleData y) {
    float a, b;
    ROOT::Math::PxPyPzMVector pa(x.momentum.x, x.momentum.y, x.momentum.z,
                                 x.mass);
    a = pa.py();
    ROOT::Math::PxPyPzMVector pb(y.momentum.x, y.momentum.y, y.momentum.z,
                                 y.mass);
    b = pb.py();
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
sortPz(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection,
       bool reverse) {
  auto lambda = [reverse](edm4hep::ReconstructedParticleData x,
                          edm4hep::ReconstructedParticleData y) {
    float a, b;
    ROOT::Math::PxPyPzMVector pa(x.momentum.x, x.momentum.y, x.momentum.z,
                                 x.mass);
    a = pa.pz();
    ROOT::Math::PxPyPzMVector pb(y.momentum.x, y.momentum.y, y.momentum.z,
                                 y.mass);
    b = pb.pz();
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
sortEta(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection,
        bool reverse) {
  auto lambda = [reverse](edm4hep::ReconstructedParticleData x,
                          edm4hep::ReconstructedParticleData y) {
    float a, b;
    ROOT::Math::PxPyPzMVector pa(x.momentum.x, x.momentum.y, x.momentum.z,
                                 x.mass);
    a = pa.eta();
    ROOT::Math::PxPyPzMVector pb(y.momentum.x, y.momentum.y, y.momentum.z,
                                 y.mass);
    b = pb.eta();
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
sortRapidity(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection,
             bool reverse) {
  auto lambda = [reverse](edm4hep::ReconstructedParticleData x,
                          edm4hep::ReconstructedParticleData y) {
    float a, b;
    ROOT::Math::PxPyPzMVector pa(x.momentum.x, x.momentum.y, x.momentum.z,
                                 x.mass);
    a = pa.Rapidity();
    ROOT::Math::PxPyPzMVector pb(y.momentum.x, y.momentum.y, y.momentum.z,
                                 y.mass);
    b = pb.Rapidity();
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
sortTheta(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection,
          bool reverse) {
  auto lambda = [reverse](edm4hep::ReconstructedParticleData x,
                          edm4hep::ReconstructedParticleData y) {
    float a, b;
    ROOT::Math::PxPyPzMVector pa(x.momentum.x, x.momentum.y, x.momentum.z,
                                 x.mass);
    a = pa.theta();
    ROOT::Math::PxPyPzMVector pb(y.momentum.x, y.momentum.y, y.momentum.z,
                                 y.mass);
    b = pb.theta();
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
sortPhi(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection,
        bool reverse) {
  auto lambda = [reverse](edm4hep::ReconstructedParticleData x,
                          edm4hep::ReconstructedParticleData y) {
    float a, b;
    ROOT::Math::PxPyPzMVector pa(x.momentum.x, x.momentum.y, x.momentum.z,
                                 x.mass);
    a = pa.phi();
    ROOT::Math::PxPyPzMVector pb(y.momentum.x, y.momentum.y, y.momentum.z,
                                 y.mass);
    b = pb.phi();
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
sortR(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection,
      bool reverse) {
  auto lambda = [reverse](edm4hep::ReconstructedParticleData x,
                          edm4hep::ReconstructedParticleData y) {
    float a, b;
    ROOT::Math::XYZVector ra(x.referencePoint.x, x.referencePoint.y,
                             x.referencePoint.z);
    a = ra.r();
    ROOT::Math::XYZVector rb(y.referencePoint.x, y.referencePoint.y,
                             y.referencePoint.z);
    b = rb.r();
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
sortX(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection,
      bool reverse) {
  auto lambda = [reverse](edm4hep::ReconstructedParticleData x,
                          edm4hep::ReconstructedParticleData y) {
    float a, b;
    ROOT::Math::XYZVector ra(x.referencePoint.x, x.referencePoint.y,
                             x.referencePoint.z);
    a = ra.x();
    ROOT::Math::XYZVector rb(y.referencePoint.x, y.referencePoint.y,
                             y.referencePoint.z);
    b = rb.x();
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
sortY(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection,
      bool reverse) {
  auto lambda = [reverse](edm4hep::ReconstructedParticleData x,
                          edm4hep::ReconstructedParticleData y) {
    float a, b;
    ROOT::Math::XYZVector ra(x.referencePoint.x, x.referencePoint.y,
                             x.referencePoint.z);
    a = ra.y();
    ROOT::Math::XYZVector rb(y.referencePoint.x, y.referencePoint.y,
                             y.referencePoint.z);
    b = rb.y();
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
sortZ(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection,
      bool reverse) {
  auto lambda = [reverse](edm4hep::ReconstructedParticleData x,
                          edm4hep::ReconstructedParticleData y) {
    float a, b;
    ROOT::Math::XYZVector ra(x.referencePoint.x, x.referencePoint.y,
                             x.referencePoint.z);
    a = ra.z();
    ROOT::Math::XYZVector rb(y.referencePoint.x, y.referencePoint.y,
                             y.referencePoint.z);
    b = rb.z();
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
sortE(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection,
      bool reverse) {
  auto lambda = [reverse](edm4hep::ReconstructedParticleData x,
                          edm4hep::ReconstructedParticleData y) {
    float a, b;
    a = (x.energy);
    b = (y.energy);
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
sortM(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection,
      bool reverse) {
  auto lambda = [reverse](edm4hep::ReconstructedParticleData x,
                          edm4hep::ReconstructedParticleData y) {
    float a, b;
    a = (x.mass);
    b = (y.mass);
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
sortQ(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection,
      bool reverse) {
  auto lambda = [reverse](edm4hep::ReconstructedParticleData x,
                          edm4hep::ReconstructedParticleData y) {
    float a, b;
    a = (x.charge);
    b = (y.charge);
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
sortAbsq(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection,
         bool reverse) {
  auto lambda = [reverse](edm4hep::ReconstructedParticleData x,
                          edm4hep::ReconstructedParticleData y) {
    float a, b;
    a = std::abs(x.charge);
    b = std::abs(y.charge);
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData>
sortPdg(ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> collection,
        bool reverse) {
  auto lambda = [reverse](edm4hep::ReconstructedParticleData x,
                          edm4hep::ReconstructedParticleData y) {
    int a, b;
    a = (x.PDG);
    b = (y.PDG);
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
edm4hep::ReconstructedParticleCollection
sortP(edm4hep::ReconstructedParticleCollection &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::ReconstructedParticle x,
                          edm4hep::ReconstructedParticle y) {
    float a, b;
    ROOT::Math::PxPyPzMVector pa(x.getMomentum().x, x.getMomentum().y,
                                 x.getMomentum().z, x.getMass());
    a = pa.P();
    ROOT::Math::PxPyPzMVector pb(y.getMomentum().x, y.getMomentum().y,
                                 y.getMomentum().z, y.getMass());
    b = pb.P();
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::ReconstructedParticle> vec;
  for (const edm4hep::ReconstructedParticle &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::ReconstructedParticleCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::ReconstructedParticle &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::ReconstructedParticleCollection
sortPt(edm4hep::ReconstructedParticleCollection &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::ReconstructedParticle x,
                          edm4hep::ReconstructedParticle y) {
    float a, b;
    ROOT::Math::PxPyPzMVector pa(x.getMomentum().x, x.getMomentum().y,
                                 x.getMomentum().z, x.getMass());
    a = pa.pt();
    ROOT::Math::PxPyPzMVector pb(y.getMomentum().x, y.getMomentum().y,
                                 y.getMomentum().z, y.getMass());
    b = pb.pt();
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::ReconstructedParticle> vec;
  for (const edm4hep::ReconstructedParticle &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::ReconstructedParticleCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::ReconstructedParticle &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::ReconstructedParticleCollection
sortPx(edm4hep::ReconstructedParticleCollection &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::ReconstructedParticle x,
                          edm4hep::ReconstructedParticle y) {
    float a, b;
    ROOT::Math::PxPyPzMVector pa(x.getMomentum().x, x.getMomentum().y,
                                 x.getMomentum().z, x.getMass());
    a = pa.px();
    ROOT::Math::PxPyPzMVector pb(y.getMomentum().x, y.getMomentum().y,
                                 y.getMomentum().z, y.getMass());
    b = pb.px();
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::ReconstructedParticle> vec;
  for (const edm4hep::ReconstructedParticle &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::ReconstructedParticleCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::ReconstructedParticle &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::ReconstructedParticleCollection
sortPy(edm4hep::ReconstructedParticleCollection &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::ReconstructedParticle x,
                          edm4hep::ReconstructedParticle y) {
    float a, b;
    ROOT::Math::PxPyPzMVector pa(x.getMomentum().x, x.getMomentum().y,
                                 x.getMomentum().z, x.getMass());
    a = pa.py();
    ROOT::Math::PxPyPzMVector pb(y.getMomentum().x, y.getMomentum().y,
                                 y.getMomentum().z, y.getMass());
    b = pb.py();
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::ReconstructedParticle> vec;
  for (const edm4hep::ReconstructedParticle &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::ReconstructedParticleCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::ReconstructedParticle &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::ReconstructedParticleCollection
sortPz(edm4hep::ReconstructedParticleCollection &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::ReconstructedParticle x,
                          edm4hep::ReconstructedParticle y) {
    float a, b;
    ROOT::Math::PxPyPzMVector pa(x.getMomentum().x, x.getMomentum().y,
                                 x.getMomentum().z, x.getMass());
    a = pa.pz();
    ROOT::Math::PxPyPzMVector pb(y.getMomentum().x, y.getMomentum().y,
                                 y.getMomentum().z, y.getMass());
    b = pb.pz();
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::ReconstructedParticle> vec;
  for (const edm4hep::ReconstructedParticle &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::ReconstructedParticleCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::ReconstructedParticle &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::ReconstructedParticleCollection
sortEta(edm4hep::ReconstructedParticleCollection &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::ReconstructedParticle x,
                          edm4hep::ReconstructedParticle y) {
    float a, b;
    ROOT::Math::PxPyPzMVector pa(x.getMomentum().x, x.getMomentum().y,
                                 x.getMomentum().z, x.getMass());
    a = pa.eta();
    ROOT::Math::PxPyPzMVector pb(y.getMomentum().x, y.getMomentum().y,
                                 y.getMomentum().z, y.getMass());
    b = pb.eta();
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::ReconstructedParticle> vec;
  for (const edm4hep::ReconstructedParticle &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::ReconstructedParticleCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::ReconstructedParticle &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::ReconstructedParticleCollection
sortRapidity(edm4hep::ReconstructedParticleCollection &collection,
             bool reverse) {
  auto lambda = [reverse](edm4hep::ReconstructedParticle x,
                          edm4hep::ReconstructedParticle y) {
    float a, b;
    ROOT::Math::PxPyPzMVector pa(x.getMomentum().x, x.getMomentum().y,
                                 x.getMomentum().z, x.getMass());
    a = pa.Rapidity();
    ROOT::Math::PxPyPzMVector pb(y.getMomentum().x, y.getMomentum().y,
                                 y.getMomentum().z, y.getMass());
    b = pb.Rapidity();
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::ReconstructedParticle> vec;
  for (const edm4hep::ReconstructedParticle &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::ReconstructedParticleCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::ReconstructedParticle &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::ReconstructedParticleCollection
sortTheta(edm4hep::ReconstructedParticleCollection &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::ReconstructedParticle x,
                          edm4hep::ReconstructedParticle y) {
    float a, b;
    ROOT::Math::PxPyPzMVector pa(x.getMomentum().x, x.getMomentum().y,
                                 x.getMomentum().z, x.getMass());
    a = pa.theta();
    ROOT::Math::PxPyPzMVector pb(y.getMomentum().x, y.getMomentum().y,
                                 y.getMomentum().z, y.getMass());
    b = pb.theta();
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::ReconstructedParticle> vec;
  for (const edm4hep::ReconstructedParticle &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::ReconstructedParticleCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::ReconstructedParticle &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::ReconstructedParticleCollection
sortPhi(edm4hep::ReconstructedParticleCollection &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::ReconstructedParticle x,
                          edm4hep::ReconstructedParticle y) {
    float a, b;
    ROOT::Math::PxPyPzMVector pa(x.getMomentum().x, x.getMomentum().y,
                                 x.getMomentum().z, x.getMass());
    a = pa.phi();
    ROOT::Math::PxPyPzMVector pb(y.getMomentum().x, y.getMomentum().y,
                                 y.getMomentum().z, y.getMass());
    b = pb.phi();
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::ReconstructedParticle> vec;
  for (const edm4hep::ReconstructedParticle &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::ReconstructedParticleCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::ReconstructedParticle &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::ReconstructedParticleCollection
sortR(edm4hep::ReconstructedParticleCollection &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::ReconstructedParticle x,
                          edm4hep::ReconstructedParticle y) {
    float a, b;
    ROOT::Math::XYZVector ra(x.getReferencePoint().x, x.getReferencePoint().y,
                             x.getReferencePoint().z);
    a = ra.r();
    ROOT::Math::XYZVector rb(y.getReferencePoint().x, y.getReferencePoint().y,
                             y.getReferencePoint().z);
    b = rb.r();
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::ReconstructedParticle> vec;
  for (const edm4hep::ReconstructedParticle &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::ReconstructedParticleCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::ReconstructedParticle &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::ReconstructedParticleCollection
sortX(edm4hep::ReconstructedParticleCollection &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::ReconstructedParticle x,
                          edm4hep::ReconstructedParticle y) {
    float a, b;
    ROOT::Math::XYZVector ra(x.getReferencePoint().x, x.getReferencePoint().y,
                             x.getReferencePoint().z);
    a = ra.x();
    ROOT::Math::XYZVector rb(y.getReferencePoint().x, y.getReferencePoint().y,
                             y.getReferencePoint().z);
    b = rb.x();
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::ReconstructedParticle> vec;
  for (const edm4hep::ReconstructedParticle &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::ReconstructedParticleCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::ReconstructedParticle &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::ReconstructedParticleCollection
sortY(edm4hep::ReconstructedParticleCollection &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::ReconstructedParticle x,
                          edm4hep::ReconstructedParticle y) {
    float a, b;
    ROOT::Math::XYZVector ra(x.getReferencePoint().x, x.getReferencePoint().y,
                             x.getReferencePoint().z);
    a = ra.y();
    ROOT::Math::XYZVector rb(y.getReferencePoint().x, y.getReferencePoint().y,
                             y.getReferencePoint().z);
    b = rb.y();
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::ReconstructedParticle> vec;
  for (const edm4hep::ReconstructedParticle &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::ReconstructedParticleCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::ReconstructedParticle &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::ReconstructedParticleCollection
sortZ(edm4hep::ReconstructedParticleCollection &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::ReconstructedParticle x,
                          edm4hep::ReconstructedParticle y) {
    float a, b;
    ROOT::Math::XYZVector ra(x.getReferencePoint().x, x.getReferencePoint().y,
                             x.getReferencePoint().z);
    a = ra.z();
    ROOT::Math::XYZVector rb(y.getReferencePoint().x, y.getReferencePoint().y,
                             y.getReferencePoint().z);
    b = rb.z();
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::ReconstructedParticle> vec;
  for (const edm4hep::ReconstructedParticle &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::ReconstructedParticleCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::ReconstructedParticle &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::ReconstructedParticleCollection
sortE(edm4hep::ReconstructedParticleCollection &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::ReconstructedParticle x,
                          edm4hep::ReconstructedParticle y) {
    float a, b;
    a = (x.getEnergy());
    b = (y.getEnergy());
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::ReconstructedParticle> vec;
  for (const edm4hep::ReconstructedParticle &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::ReconstructedParticleCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::ReconstructedParticle &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::ReconstructedParticleCollection
sortM(edm4hep::ReconstructedParticleCollection &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::ReconstructedParticle x,
                          edm4hep::ReconstructedParticle y) {
    float a, b;
    a = (x.getMass());
    b = (y.getMass());
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::ReconstructedParticle> vec;
  for (const edm4hep::ReconstructedParticle &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::ReconstructedParticleCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::ReconstructedParticle &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::ReconstructedParticleCollection
sortQ(edm4hep::ReconstructedParticleCollection &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::ReconstructedParticle x,
                          edm4hep::ReconstructedParticle y) {
    float a, b;
    a = (x.getCharge());
    b = (y.getCharge());
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::ReconstructedParticle> vec;
  for (const edm4hep::ReconstructedParticle &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::ReconstructedParticleCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::ReconstructedParticle &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::ReconstructedParticleCollection
sortAbsq(edm4hep::ReconstructedParticleCollection &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::ReconstructedParticle x,
                          edm4hep::ReconstructedParticle y) {
    float a, b;
    a = std::abs(x.getCharge());
    b = std::abs(y.getCharge());
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::ReconstructedParticle> vec;
  for (const edm4hep::ReconstructedParticle &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::ReconstructedParticleCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::ReconstructedParticle &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::ReconstructedParticleCollection
sortPdg(edm4hep::ReconstructedParticleCollection &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::ReconstructedParticle x,
                          edm4hep::ReconstructedParticle y) {
    int a, b;
    a = (x.getPDG());
    b = (y.getPDG());
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::ReconstructedParticle> vec;
  for (const edm4hep::ReconstructedParticle &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::ReconstructedParticleCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::ReconstructedParticle &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> getParticles(
    edm4hep::ReconstructedParticleData item,
    ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> relatedCollection) {
  ROOT::VecOps::RVec<edm4hep::ReconstructedParticleData> vec;
  size_t len = item.particles_end - item.particles_begin;
  vec.reserve(len);
  for (int i = item.particles_begin; i < item.particles_end; i++) {
    vec.emplace_back(relatedCollection[i]);
  }
  return vec;
}
ROOT::VecOps::RVec<edm4hep::TrackData>
getTracks(edm4hep::ReconstructedParticleData item,
          ROOT::VecOps::RVec<edm4hep::TrackData> relatedCollection) {
  ROOT::VecOps::RVec<edm4hep::TrackData> vec;
  size_t len = item.tracks_end - item.tracks_begin;
  vec.reserve(len);
  for (int i = item.tracks_begin; i < item.tracks_end; i++) {
    vec.emplace_back(relatedCollection[i]);
  }
  return vec;
}
ROOT::VecOps::RVec<edm4hep::ClusterData>
getClusters(edm4hep::ReconstructedParticleData item,
            ROOT::VecOps::RVec<edm4hep::ClusterData> relatedCollection) {
  ROOT::VecOps::RVec<edm4hep::ClusterData> vec;
  size_t len = item.clusters_end - item.clusters_begin;
  vec.reserve(len);
  for (int i = item.clusters_begin; i < item.clusters_end; i++) {
    vec.emplace_back(relatedCollection[i]);
  }
  return vec;
}
edm4hep::ReconstructedParticleCollection
getParticles(const edm4hep::ReconstructedParticle &item) {
  edm4hep::ReconstructedParticleCollection vec;
  vec.setSubsetCollection();
  for (auto it = item.particles_begin(); it != item.particles_end(); it++) {
    vec.push_back(*it);
  }
  return vec;
}
edm4hep::TrackCollection getTracks(const edm4hep::ReconstructedParticle &item) {
  edm4hep::TrackCollection vec;
  vec.setSubsetCollection();
  for (auto it = item.tracks_begin(); it != item.tracks_end(); it++) {
    vec.push_back(*it);
  }
  return vec;
}
edm4hep::ClusterCollection
getClusters(const edm4hep::ReconstructedParticle &item) {
  edm4hep::ClusterCollection vec;
  vec.setSubsetCollection();
  for (auto it = item.clusters_begin(); it != item.clusters_end(); it++) {
    vec.push_back(*it);
  }
  return vec;
}
} // namespace ReconstructedParticle
} // namespace k4::ral
