#include <ral/MCParticle.h>
namespace k4::ral {
namespace MCParticle {
ROOT::VecOps::RVec<float>
getP(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticleData &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(item.momentum.x, item.momentum.y,
                                      item.momentum.z, item.mass);
    result = presult.P();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getPt(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticleData &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(item.momentum.x, item.momentum.y,
                                      item.momentum.z, item.mass);
    result = presult.pt();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getPx(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticleData &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(item.momentum.x, item.momentum.y,
                                      item.momentum.z, item.mass);
    result = presult.px();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getPy(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticleData &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(item.momentum.x, item.momentum.y,
                                      item.momentum.z, item.mass);
    result = presult.py();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getPz(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticleData &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(item.momentum.x, item.momentum.y,
                                      item.momentum.z, item.mass);
    result = presult.pz();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getEta(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticleData &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(item.momentum.x, item.momentum.y,
                                      item.momentum.z, item.mass);
    result = presult.eta();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getRapidity(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticleData &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(item.momentum.x, item.momentum.y,
                                      item.momentum.z, item.mass);
    result = presult.Rapidity();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getTheta(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticleData &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(item.momentum.x, item.momentum.y,
                                      item.momentum.z, item.mass);
    result = presult.theta();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getPhi(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticleData &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(item.momentum.x, item.momentum.y,
                                      item.momentum.z, item.mass);
    result = presult.phi();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getPEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticleData &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(item.momentumAtEndpoint.x,
                                      item.momentumAtEndpoint.y,
                                      item.momentumAtEndpoint.z, item.mass);
    result = presult.P();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getPtEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticleData &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(item.momentumAtEndpoint.x,
                                      item.momentumAtEndpoint.y,
                                      item.momentumAtEndpoint.z, item.mass);
    result = presult.pt();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getPxEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticleData &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(item.momentumAtEndpoint.x,
                                      item.momentumAtEndpoint.y,
                                      item.momentumAtEndpoint.z, item.mass);
    result = presult.px();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getPyEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticleData &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(item.momentumAtEndpoint.x,
                                      item.momentumAtEndpoint.y,
                                      item.momentumAtEndpoint.z, item.mass);
    result = presult.py();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getPzEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticleData &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(item.momentumAtEndpoint.x,
                                      item.momentumAtEndpoint.y,
                                      item.momentumAtEndpoint.z, item.mass);
    result = presult.pz();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getEtaEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticleData &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(item.momentumAtEndpoint.x,
                                      item.momentumAtEndpoint.y,
                                      item.momentumAtEndpoint.z, item.mass);
    result = presult.eta();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getRapidityEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticleData &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(item.momentumAtEndpoint.x,
                                      item.momentumAtEndpoint.y,
                                      item.momentumAtEndpoint.z, item.mass);
    result = presult.Rapidity();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getThetaEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticleData &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(item.momentumAtEndpoint.x,
                                      item.momentumAtEndpoint.y,
                                      item.momentumAtEndpoint.z, item.mass);
    result = presult.theta();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getPhiEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticleData &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(item.momentumAtEndpoint.x,
                                      item.momentumAtEndpoint.y,
                                      item.momentumAtEndpoint.z, item.mass);
    result = presult.phi();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getR(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticleData &item : collection) {
    float result;
    ROOT::Math::XYZVector rresult(item.vertex.x, item.vertex.y, item.vertex.z);
    result = rresult.r();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getX(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticleData &item : collection) {
    float result;
    ROOT::Math::XYZVector rresult(item.vertex.x, item.vertex.y, item.vertex.z);
    result = rresult.x();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getY(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticleData &item : collection) {
    float result;
    ROOT::Math::XYZVector rresult(item.vertex.x, item.vertex.y, item.vertex.z);
    result = rresult.y();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getZ(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticleData &item : collection) {
    float result;
    ROOT::Math::XYZVector rresult(item.vertex.x, item.vertex.y, item.vertex.z);
    result = rresult.z();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getREnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticleData &item : collection) {
    float result;
    ROOT::Math::XYZVector rresult(item.endpoint.x, item.endpoint.y,
                                  item.endpoint.z);
    result = rresult.r();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getXEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticleData &item : collection) {
    float result;
    ROOT::Math::XYZVector rresult(item.endpoint.x, item.endpoint.y,
                                  item.endpoint.z);
    result = rresult.x();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getYEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticleData &item : collection) {
    float result;
    ROOT::Math::XYZVector rresult(item.endpoint.x, item.endpoint.y,
                                  item.endpoint.z);
    result = rresult.y();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getZEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticleData &item : collection) {
    float result;
    ROOT::Math::XYZVector rresult(item.endpoint.x, item.endpoint.y,
                                  item.endpoint.z);
    result = rresult.z();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getE(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticleData &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(item.momentum.x, item.momentum.y,
                                      item.momentum.z, item.mass);
    result = presult.e();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getEEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticleData &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(item.momentumAtEndpoint.x,
                                      item.momentumAtEndpoint.y,
                                      item.momentumAtEndpoint.z, item.mass);
    result = presult.e();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getM(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticleData &item : collection) {
    float result;
    result = (item.mass);
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getQ(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticleData &item : collection) {
    float result;
    result = (item.charge);
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getAbsq(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticleData &item : collection) {
    float result;
    result = std::abs(item.charge);
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<int>
getPdg(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<int> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticleData &item : collection) {
    int result;
    result = (item.PDG);
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<int>
getAbspdg(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<int> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticleData &item : collection) {
    int result;
    result = std::abs(item.PDG);
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<int>
getSimStat(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<int> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticleData &item : collection) {
    int result;
    result = (item.simulatorStatus);
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<int>
getGenStat(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<int> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticleData &item : collection) {
    int result;
    result = (item.generatorStatus);
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getP(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticle &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(item.getMomentum().x,
                                      item.getMomentum().y,
                                      item.getMomentum().z, item.getMass());
    result = presult.P();
    vec.push_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getPt(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticle &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(item.getMomentum().x,
                                      item.getMomentum().y,
                                      item.getMomentum().z, item.getMass());
    result = presult.pt();
    vec.push_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getPx(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticle &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(item.getMomentum().x,
                                      item.getMomentum().y,
                                      item.getMomentum().z, item.getMass());
    result = presult.px();
    vec.push_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getPy(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticle &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(item.getMomentum().x,
                                      item.getMomentum().y,
                                      item.getMomentum().z, item.getMass());
    result = presult.py();
    vec.push_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getPz(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticle &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(item.getMomentum().x,
                                      item.getMomentum().y,
                                      item.getMomentum().z, item.getMass());
    result = presult.pz();
    vec.push_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getEta(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticle &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(item.getMomentum().x,
                                      item.getMomentum().y,
                                      item.getMomentum().z, item.getMass());
    result = presult.eta();
    vec.push_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getRapidity(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticle &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(item.getMomentum().x,
                                      item.getMomentum().y,
                                      item.getMomentum().z, item.getMass());
    result = presult.Rapidity();
    vec.push_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getTheta(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticle &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(item.getMomentum().x,
                                      item.getMomentum().y,
                                      item.getMomentum().z, item.getMass());
    result = presult.theta();
    vec.push_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getPhi(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticle &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(item.getMomentum().x,
                                      item.getMomentum().y,
                                      item.getMomentum().z, item.getMass());
    result = presult.phi();
    vec.push_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getPEnd(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticle &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(
        item.getMomentumAtEndpoint().x, item.getMomentumAtEndpoint().y,
        item.getMomentumAtEndpoint().z, item.getMass());
    result = presult.P();
    vec.push_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getPtEnd(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticle &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(
        item.getMomentumAtEndpoint().x, item.getMomentumAtEndpoint().y,
        item.getMomentumAtEndpoint().z, item.getMass());
    result = presult.pt();
    vec.push_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getPxEnd(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticle &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(
        item.getMomentumAtEndpoint().x, item.getMomentumAtEndpoint().y,
        item.getMomentumAtEndpoint().z, item.getMass());
    result = presult.px();
    vec.push_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getPyEnd(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticle &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(
        item.getMomentumAtEndpoint().x, item.getMomentumAtEndpoint().y,
        item.getMomentumAtEndpoint().z, item.getMass());
    result = presult.py();
    vec.push_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getPzEnd(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticle &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(
        item.getMomentumAtEndpoint().x, item.getMomentumAtEndpoint().y,
        item.getMomentumAtEndpoint().z, item.getMass());
    result = presult.pz();
    vec.push_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getEtaEnd(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticle &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(
        item.getMomentumAtEndpoint().x, item.getMomentumAtEndpoint().y,
        item.getMomentumAtEndpoint().z, item.getMass());
    result = presult.eta();
    vec.push_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getRapidityEnd(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticle &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(
        item.getMomentumAtEndpoint().x, item.getMomentumAtEndpoint().y,
        item.getMomentumAtEndpoint().z, item.getMass());
    result = presult.Rapidity();
    vec.push_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getThetaEnd(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticle &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(
        item.getMomentumAtEndpoint().x, item.getMomentumAtEndpoint().y,
        item.getMomentumAtEndpoint().z, item.getMass());
    result = presult.theta();
    vec.push_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getPhiEnd(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticle &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(
        item.getMomentumAtEndpoint().x, item.getMomentumAtEndpoint().y,
        item.getMomentumAtEndpoint().z, item.getMass());
    result = presult.phi();
    vec.push_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getR(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticle &item : collection) {
    float result;
    ROOT::Math::XYZVector rresult(item.getVertex().x, item.getVertex().y,
                                  item.getVertex().z);
    result = rresult.r();
    vec.push_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getX(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticle &item : collection) {
    float result;
    ROOT::Math::XYZVector rresult(item.getVertex().x, item.getVertex().y,
                                  item.getVertex().z);
    result = rresult.x();
    vec.push_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getY(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticle &item : collection) {
    float result;
    ROOT::Math::XYZVector rresult(item.getVertex().x, item.getVertex().y,
                                  item.getVertex().z);
    result = rresult.y();
    vec.push_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getZ(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticle &item : collection) {
    float result;
    ROOT::Math::XYZVector rresult(item.getVertex().x, item.getVertex().y,
                                  item.getVertex().z);
    result = rresult.z();
    vec.push_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getREnd(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticle &item : collection) {
    float result;
    ROOT::Math::XYZVector rresult(item.getEndpoint().x, item.getEndpoint().y,
                                  item.getEndpoint().z);
    result = rresult.r();
    vec.push_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getXEnd(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticle &item : collection) {
    float result;
    ROOT::Math::XYZVector rresult(item.getEndpoint().x, item.getEndpoint().y,
                                  item.getEndpoint().z);
    result = rresult.x();
    vec.push_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getYEnd(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticle &item : collection) {
    float result;
    ROOT::Math::XYZVector rresult(item.getEndpoint().x, item.getEndpoint().y,
                                  item.getEndpoint().z);
    result = rresult.y();
    vec.push_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getZEnd(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticle &item : collection) {
    float result;
    ROOT::Math::XYZVector rresult(item.getEndpoint().x, item.getEndpoint().y,
                                  item.getEndpoint().z);
    result = rresult.z();
    vec.push_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getE(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticle &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(item.getMomentum().x,
                                      item.getMomentum().y,
                                      item.getMomentum().z, item.getMass());
    result = presult.e();
    vec.push_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getEEnd(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticle &item : collection) {
    float result;
    ROOT::Math::PxPyPzMVector presult(
        item.getMomentumAtEndpoint().x, item.getMomentumAtEndpoint().y,
        item.getMomentumAtEndpoint().z, item.getMass());
    result = presult.e();
    vec.push_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getM(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticle &item : collection) {
    float result;
    result = (item.getMass());
    vec.push_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getQ(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticle &item : collection) {
    float result;
    result = (item.getCharge());
    vec.push_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getAbsq(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticle &item : collection) {
    float result;
    result = std::abs(item.getCharge());
    vec.push_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<int>
getPdg(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<int> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticle &item : collection) {
    int result;
    result = (item.getPDG());
    vec.push_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<int>
getAbspdg(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<int> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticle &item : collection) {
    int result;
    result = std::abs(item.getPDG());
    vec.push_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<int>
getSimStat(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<int> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticle &item : collection) {
    int result;
    result = (item.getSimulatorStatus());
    vec.push_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<int>
getGenStat(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<int> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticle &item : collection) {
    int result;
    result = (item.getGeneratorStatus());
    vec.push_back(result);
  }
  return vec;
}
int printP(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec = getP(collection);
  std::cout << "Momentum: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printPt(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec = getPt(collection);
  std::cout << "Transverse momentum: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printPx(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec = getPx(collection);
  std::cout << "X momentum: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printPy(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec = getPy(collection);
  std::cout << "Y momentum: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printPz(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec = getPz(collection);
  std::cout << "Z momentum: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printEta(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec = getEta(collection);
  std::cout << "Pseudorapidity: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printRapidity(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec = getRapidity(collection);
  std::cout << "Rapidity: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printTheta(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec = getTheta(collection);
  std::cout << "Polar angle: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printPhi(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec = getPhi(collection);
  std::cout << "Azimutal angle: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printPEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec = getPEnd(collection);
  std::cout << "Momentum: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printPtEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec = getPtEnd(collection);
  std::cout << "Transverse momentum: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printPxEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec = getPxEnd(collection);
  std::cout << "X momentum: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printPyEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec = getPyEnd(collection);
  std::cout << "Y momentum: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printPzEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec = getPzEnd(collection);
  std::cout << "Z momentum: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printEtaEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec = getEtaEnd(collection);
  std::cout << "Pseudorapidity: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printRapidityEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec = getRapidityEnd(collection);
  std::cout << "Rapidity: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printThetaEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec = getThetaEnd(collection);
  std::cout << "Polar angle: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printPhiEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec = getPhiEnd(collection);
  std::cout << "Azimutal angle: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printR(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec = getR(collection);
  std::cout << "Distance to origin: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printX(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec = getX(collection);
  std::cout << "X coordinate: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printY(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec = getY(collection);
  std::cout << "Y coordinate: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printZ(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec = getZ(collection);
  std::cout << "Z coordinate: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printREnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec = getREnd(collection);
  std::cout << "Distance to origin: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printXEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec = getXEnd(collection);
  std::cout << "X coordinate: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printYEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec = getYEnd(collection);
  std::cout << "Y coordinate: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printZEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec = getZEnd(collection);
  std::cout << "Z coordinate: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printE(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec = getE(collection);
  std::cout << "Energy: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printEEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec = getEEnd(collection);
  std::cout << "Energy: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printM(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec = getM(collection);
  std::cout << "Mass: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printQ(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec = getQ(collection);
  std::cout << "Charge: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printAbsq(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<float> vec = getAbsq(collection);
  std::cout << "Absolute charge: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printPdg(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<int> vec = getPdg(collection);
  std::cout << "Pdg: ";
  for (const int &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printAbspdg(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<int> vec = getAbspdg(collection);
  std::cout << "Absolute pdg: ";
  for (const int &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printSimStat(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<int> vec = getSimStat(collection);
  std::cout << "Simulator status: ";
  for (const int &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printGenStat(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<int> vec = getGenStat(collection);
  std::cout << "Generator status: ";
  for (const int &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printP(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getP(collection);
  std::cout << "Momentum: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printPt(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getPt(collection);
  std::cout << "Transverse momentum: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printPx(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getPx(collection);
  std::cout << "X momentum: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printPy(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getPy(collection);
  std::cout << "Y momentum: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printPz(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getPz(collection);
  std::cout << "Z momentum: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printEta(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getEta(collection);
  std::cout << "Pseudorapidity: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printRapidity(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getRapidity(collection);
  std::cout << "Rapidity: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printTheta(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getTheta(collection);
  std::cout << "Polar angle: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printPhi(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getPhi(collection);
  std::cout << "Azimutal angle: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printPEnd(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getPEnd(collection);
  std::cout << "Momentum: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printPtEnd(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getPtEnd(collection);
  std::cout << "Transverse momentum: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printPxEnd(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getPxEnd(collection);
  std::cout << "X momentum: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printPyEnd(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getPyEnd(collection);
  std::cout << "Y momentum: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printPzEnd(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getPzEnd(collection);
  std::cout << "Z momentum: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printEtaEnd(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getEtaEnd(collection);
  std::cout << "Pseudorapidity: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printRapidityEnd(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getRapidityEnd(collection);
  std::cout << "Rapidity: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printThetaEnd(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getThetaEnd(collection);
  std::cout << "Polar angle: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printPhiEnd(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getPhiEnd(collection);
  std::cout << "Azimutal angle: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printR(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getR(collection);
  std::cout << "Distance to origin: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printX(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getX(collection);
  std::cout << "X coordinate: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printY(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getY(collection);
  std::cout << "Y coordinate: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printZ(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getZ(collection);
  std::cout << "Z coordinate: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printREnd(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getREnd(collection);
  std::cout << "Distance to origin: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printXEnd(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getXEnd(collection);
  std::cout << "X coordinate: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printYEnd(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getYEnd(collection);
  std::cout << "Y coordinate: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printZEnd(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getZEnd(collection);
  std::cout << "Z coordinate: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printE(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getE(collection);
  std::cout << "Energy: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printEEnd(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getEEnd(collection);
  std::cout << "Energy: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printM(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getM(collection);
  std::cout << "Mass: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printQ(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getQ(collection);
  std::cout << "Charge: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printAbsq(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getAbsq(collection);
  std::cout << "Absolute charge: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printPdg(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<int> vec = getPdg(collection);
  std::cout << "Pdg: ";
  for (const int &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printAbspdg(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<int> vec = getAbspdg(collection);
  std::cout << "Absolute pdg: ";
  for (const int &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printSimStat(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<int> vec = getSimStat(collection);
  std::cout << "Simulator status: ";
  for (const int &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printGenStat(const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<int> vec = getGenStat(collection);
  std::cout << "Generator status: ";
  for (const int &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
ROOT::VecOps::RVec<bool>
maskP(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
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
       ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
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
       ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
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
       ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
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
       ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
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
        ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
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
             ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
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
          ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
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
        ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
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
maskPEnd(LogicalOperators::ComparisonOperator op, float val,
         ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getPEnd(collection);
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
maskPtEnd(LogicalOperators::ComparisonOperator op, float val,
          ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getPtEnd(collection);
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
maskPxEnd(LogicalOperators::ComparisonOperator op, float val,
          ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getPxEnd(collection);
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
maskPyEnd(LogicalOperators::ComparisonOperator op, float val,
          ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getPyEnd(collection);
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
maskPzEnd(LogicalOperators::ComparisonOperator op, float val,
          ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getPzEnd(collection);
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
maskEtaEnd(LogicalOperators::ComparisonOperator op, float val,
           ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getEtaEnd(collection);
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
maskRapidityEnd(LogicalOperators::ComparisonOperator op, float val,
                ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getRapidityEnd(collection);
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
maskThetaEnd(LogicalOperators::ComparisonOperator op, float val,
             ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getThetaEnd(collection);
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
maskPhiEnd(LogicalOperators::ComparisonOperator op, float val,
           ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getPhiEnd(collection);
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
      ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
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
      ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
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
      ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
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
      ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
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
maskREnd(LogicalOperators::ComparisonOperator op, float val,
         ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getREnd(collection);
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
maskXEnd(LogicalOperators::ComparisonOperator op, float val,
         ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getXEnd(collection);
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
maskYEnd(LogicalOperators::ComparisonOperator op, float val,
         ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getYEnd(collection);
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
maskZEnd(LogicalOperators::ComparisonOperator op, float val,
         ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getZEnd(collection);
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
      ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
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
maskEEnd(LogicalOperators::ComparisonOperator op, float val,
         ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getEEnd(collection);
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
      ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
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
      ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
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
         ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
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
        ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
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
           ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
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
maskSimStat(LogicalOperators::ComparisonOperator op, int val,
            ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<int> vals = getSimStat(collection);
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
maskGenStat(LogicalOperators::ComparisonOperator op, int val,
            ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<int> vals = getGenStat(collection);
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
      const edm4hep::MCParticleCollection &collection) {
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
       const edm4hep::MCParticleCollection &collection) {
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
       const edm4hep::MCParticleCollection &collection) {
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
       const edm4hep::MCParticleCollection &collection) {
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
       const edm4hep::MCParticleCollection &collection) {
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
        const edm4hep::MCParticleCollection &collection) {
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
             const edm4hep::MCParticleCollection &collection) {
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
          const edm4hep::MCParticleCollection &collection) {
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
        const edm4hep::MCParticleCollection &collection) {
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
maskPEnd(LogicalOperators::ComparisonOperator op, float val,
         const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getPEnd(collection);
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
maskPtEnd(LogicalOperators::ComparisonOperator op, float val,
          const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getPtEnd(collection);
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
maskPxEnd(LogicalOperators::ComparisonOperator op, float val,
          const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getPxEnd(collection);
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
maskPyEnd(LogicalOperators::ComparisonOperator op, float val,
          const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getPyEnd(collection);
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
maskPzEnd(LogicalOperators::ComparisonOperator op, float val,
          const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getPzEnd(collection);
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
maskEtaEnd(LogicalOperators::ComparisonOperator op, float val,
           const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getEtaEnd(collection);
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
maskRapidityEnd(LogicalOperators::ComparisonOperator op, float val,
                const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getRapidityEnd(collection);
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
maskThetaEnd(LogicalOperators::ComparisonOperator op, float val,
             const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getThetaEnd(collection);
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
maskPhiEnd(LogicalOperators::ComparisonOperator op, float val,
           const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getPhiEnd(collection);
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
      const edm4hep::MCParticleCollection &collection) {
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
      const edm4hep::MCParticleCollection &collection) {
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
      const edm4hep::MCParticleCollection &collection) {
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
      const edm4hep::MCParticleCollection &collection) {
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
maskREnd(LogicalOperators::ComparisonOperator op, float val,
         const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getREnd(collection);
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
maskXEnd(LogicalOperators::ComparisonOperator op, float val,
         const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getXEnd(collection);
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
maskYEnd(LogicalOperators::ComparisonOperator op, float val,
         const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getYEnd(collection);
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
maskZEnd(LogicalOperators::ComparisonOperator op, float val,
         const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getZEnd(collection);
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
      const edm4hep::MCParticleCollection &collection) {
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
maskEEnd(LogicalOperators::ComparisonOperator op, float val,
         const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getEEnd(collection);
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
      const edm4hep::MCParticleCollection &collection) {
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
      const edm4hep::MCParticleCollection &collection) {
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
         const edm4hep::MCParticleCollection &collection) {
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
        const edm4hep::MCParticleCollection &collection) {
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
           const edm4hep::MCParticleCollection &collection) {
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
maskSimStat(LogicalOperators::ComparisonOperator op, int val,
            const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<int> vals = getSimStat(collection);
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
maskGenStat(LogicalOperators::ComparisonOperator op, int val,
            const edm4hep::MCParticleCollection &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<int> vals = getGenStat(collection);
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
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selP(LogicalOperators::ComparisonOperator op, float val,
     ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  auto mask = maskP(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selPt(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  auto mask = maskPt(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selPx(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  auto mask = maskPx(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selPy(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  auto mask = maskPy(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selPz(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  auto mask = maskPz(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selEta(LogicalOperators::ComparisonOperator op, float val,
       ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  auto mask = maskEta(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selRapidity(LogicalOperators::ComparisonOperator op, float val,
            ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  auto mask = maskRapidity(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selTheta(LogicalOperators::ComparisonOperator op, float val,
         ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  auto mask = maskTheta(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selPhi(LogicalOperators::ComparisonOperator op, float val,
       ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  auto mask = maskPhi(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selPEnd(LogicalOperators::ComparisonOperator op, float val,
        ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  auto mask = maskPEnd(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selPtEnd(LogicalOperators::ComparisonOperator op, float val,
         ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  auto mask = maskPtEnd(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selPxEnd(LogicalOperators::ComparisonOperator op, float val,
         ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  auto mask = maskPxEnd(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selPyEnd(LogicalOperators::ComparisonOperator op, float val,
         ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  auto mask = maskPyEnd(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selPzEnd(LogicalOperators::ComparisonOperator op, float val,
         ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  auto mask = maskPzEnd(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selEtaEnd(LogicalOperators::ComparisonOperator op, float val,
          ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  auto mask = maskEtaEnd(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selRapidityEnd(LogicalOperators::ComparisonOperator op, float val,
               ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  auto mask = maskRapidityEnd(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selThetaEnd(LogicalOperators::ComparisonOperator op, float val,
            ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  auto mask = maskThetaEnd(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selPhiEnd(LogicalOperators::ComparisonOperator op, float val,
          ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  auto mask = maskPhiEnd(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selR(LogicalOperators::ComparisonOperator op, float val,
     ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  auto mask = maskR(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selX(LogicalOperators::ComparisonOperator op, float val,
     ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  auto mask = maskX(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selY(LogicalOperators::ComparisonOperator op, float val,
     ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  auto mask = maskY(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selZ(LogicalOperators::ComparisonOperator op, float val,
     ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  auto mask = maskZ(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selREnd(LogicalOperators::ComparisonOperator op, float val,
        ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  auto mask = maskREnd(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selXEnd(LogicalOperators::ComparisonOperator op, float val,
        ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  auto mask = maskXEnd(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selYEnd(LogicalOperators::ComparisonOperator op, float val,
        ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  auto mask = maskYEnd(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selZEnd(LogicalOperators::ComparisonOperator op, float val,
        ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  auto mask = maskZEnd(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selE(LogicalOperators::ComparisonOperator op, float val,
     ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  auto mask = maskE(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selEEnd(LogicalOperators::ComparisonOperator op, float val,
        ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  auto mask = maskEEnd(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selM(LogicalOperators::ComparisonOperator op, float val,
     ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  auto mask = maskM(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selQ(LogicalOperators::ComparisonOperator op, float val,
     ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  auto mask = maskQ(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selAbsq(LogicalOperators::ComparisonOperator op, float val,
        ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  auto mask = maskAbsq(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selPdg(LogicalOperators::ComparisonOperator op, int val,
       ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  auto mask = maskPdg(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selAbspdg(LogicalOperators::ComparisonOperator op, int val,
          ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  auto mask = maskAbspdg(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selSimStat(LogicalOperators::ComparisonOperator op, int val,
           ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  auto mask = maskSimStat(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
selGenStat(LogicalOperators::ComparisonOperator op, int val,
           ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection) {
  auto mask = maskGenStat(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::MCParticleCollection
selP(LogicalOperators::ComparisonOperator op, float val,
     const edm4hep::MCParticleCollection &collection) {
  auto mask = maskP(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::MCParticleCollection
selPt(LogicalOperators::ComparisonOperator op, float val,
      const edm4hep::MCParticleCollection &collection) {
  auto mask = maskPt(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::MCParticleCollection
selPx(LogicalOperators::ComparisonOperator op, float val,
      const edm4hep::MCParticleCollection &collection) {
  auto mask = maskPx(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::MCParticleCollection
selPy(LogicalOperators::ComparisonOperator op, float val,
      const edm4hep::MCParticleCollection &collection) {
  auto mask = maskPy(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::MCParticleCollection
selPz(LogicalOperators::ComparisonOperator op, float val,
      const edm4hep::MCParticleCollection &collection) {
  auto mask = maskPz(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::MCParticleCollection
selEta(LogicalOperators::ComparisonOperator op, float val,
       const edm4hep::MCParticleCollection &collection) {
  auto mask = maskEta(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::MCParticleCollection
selRapidity(LogicalOperators::ComparisonOperator op, float val,
            const edm4hep::MCParticleCollection &collection) {
  auto mask = maskRapidity(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::MCParticleCollection
selTheta(LogicalOperators::ComparisonOperator op, float val,
         const edm4hep::MCParticleCollection &collection) {
  auto mask = maskTheta(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::MCParticleCollection
selPhi(LogicalOperators::ComparisonOperator op, float val,
       const edm4hep::MCParticleCollection &collection) {
  auto mask = maskPhi(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::MCParticleCollection
selPEnd(LogicalOperators::ComparisonOperator op, float val,
        const edm4hep::MCParticleCollection &collection) {
  auto mask = maskPEnd(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::MCParticleCollection
selPtEnd(LogicalOperators::ComparisonOperator op, float val,
         const edm4hep::MCParticleCollection &collection) {
  auto mask = maskPtEnd(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::MCParticleCollection
selPxEnd(LogicalOperators::ComparisonOperator op, float val,
         const edm4hep::MCParticleCollection &collection) {
  auto mask = maskPxEnd(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::MCParticleCollection
selPyEnd(LogicalOperators::ComparisonOperator op, float val,
         const edm4hep::MCParticleCollection &collection) {
  auto mask = maskPyEnd(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::MCParticleCollection
selPzEnd(LogicalOperators::ComparisonOperator op, float val,
         const edm4hep::MCParticleCollection &collection) {
  auto mask = maskPzEnd(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::MCParticleCollection
selEtaEnd(LogicalOperators::ComparisonOperator op, float val,
          const edm4hep::MCParticleCollection &collection) {
  auto mask = maskEtaEnd(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::MCParticleCollection
selRapidityEnd(LogicalOperators::ComparisonOperator op, float val,
               const edm4hep::MCParticleCollection &collection) {
  auto mask = maskRapidityEnd(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::MCParticleCollection
selThetaEnd(LogicalOperators::ComparisonOperator op, float val,
            const edm4hep::MCParticleCollection &collection) {
  auto mask = maskThetaEnd(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::MCParticleCollection
selPhiEnd(LogicalOperators::ComparisonOperator op, float val,
          const edm4hep::MCParticleCollection &collection) {
  auto mask = maskPhiEnd(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::MCParticleCollection
selR(LogicalOperators::ComparisonOperator op, float val,
     const edm4hep::MCParticleCollection &collection) {
  auto mask = maskR(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::MCParticleCollection
selX(LogicalOperators::ComparisonOperator op, float val,
     const edm4hep::MCParticleCollection &collection) {
  auto mask = maskX(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::MCParticleCollection
selY(LogicalOperators::ComparisonOperator op, float val,
     const edm4hep::MCParticleCollection &collection) {
  auto mask = maskY(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::MCParticleCollection
selZ(LogicalOperators::ComparisonOperator op, float val,
     const edm4hep::MCParticleCollection &collection) {
  auto mask = maskZ(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::MCParticleCollection
selREnd(LogicalOperators::ComparisonOperator op, float val,
        const edm4hep::MCParticleCollection &collection) {
  auto mask = maskREnd(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::MCParticleCollection
selXEnd(LogicalOperators::ComparisonOperator op, float val,
        const edm4hep::MCParticleCollection &collection) {
  auto mask = maskXEnd(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::MCParticleCollection
selYEnd(LogicalOperators::ComparisonOperator op, float val,
        const edm4hep::MCParticleCollection &collection) {
  auto mask = maskYEnd(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::MCParticleCollection
selZEnd(LogicalOperators::ComparisonOperator op, float val,
        const edm4hep::MCParticleCollection &collection) {
  auto mask = maskZEnd(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::MCParticleCollection
selE(LogicalOperators::ComparisonOperator op, float val,
     const edm4hep::MCParticleCollection &collection) {
  auto mask = maskE(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::MCParticleCollection
selEEnd(LogicalOperators::ComparisonOperator op, float val,
        const edm4hep::MCParticleCollection &collection) {
  auto mask = maskEEnd(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::MCParticleCollection
selM(LogicalOperators::ComparisonOperator op, float val,
     const edm4hep::MCParticleCollection &collection) {
  auto mask = maskM(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::MCParticleCollection
selQ(LogicalOperators::ComparisonOperator op, float val,
     const edm4hep::MCParticleCollection &collection) {
  auto mask = maskQ(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::MCParticleCollection
selAbsq(LogicalOperators::ComparisonOperator op, float val,
        const edm4hep::MCParticleCollection &collection) {
  auto mask = maskAbsq(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::MCParticleCollection
selPdg(LogicalOperators::ComparisonOperator op, int val,
       const edm4hep::MCParticleCollection &collection) {
  auto mask = maskPdg(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::MCParticleCollection
selAbspdg(LogicalOperators::ComparisonOperator op, int val,
          const edm4hep::MCParticleCollection &collection) {
  auto mask = maskAbspdg(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::MCParticleCollection
selSimStat(LogicalOperators::ComparisonOperator op, int val,
           const edm4hep::MCParticleCollection &collection) {
  auto mask = maskSimStat(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::MCParticleCollection
selGenStat(LogicalOperators::ComparisonOperator op, int val,
           const edm4hep::MCParticleCollection &collection) {
  auto mask = maskGenStat(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortP(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticleData x,
                          edm4hep::MCParticleData y) {
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
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortPt(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticleData x,
                          edm4hep::MCParticleData y) {
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
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortPx(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticleData x,
                          edm4hep::MCParticleData y) {
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
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortPy(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticleData x,
                          edm4hep::MCParticleData y) {
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
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortPz(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticleData x,
                          edm4hep::MCParticleData y) {
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
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortEta(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticleData x,
                          edm4hep::MCParticleData y) {
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
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortRapidity(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection,
             bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticleData x,
                          edm4hep::MCParticleData y) {
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
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortTheta(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection,
          bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticleData x,
                          edm4hep::MCParticleData y) {
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
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortPhi(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticleData x,
                          edm4hep::MCParticleData y) {
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
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortPEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection,
         bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticleData x,
                          edm4hep::MCParticleData y) {
    float a, b;
    ROOT::Math::PxPyPzMVector pa(x.momentumAtEndpoint.x, x.momentumAtEndpoint.y,
                                 x.momentumAtEndpoint.z, x.mass);
    a = pa.P();
    ROOT::Math::PxPyPzMVector pb(y.momentumAtEndpoint.x, y.momentumAtEndpoint.y,
                                 y.momentumAtEndpoint.z, y.mass);
    b = pb.P();
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortPtEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection,
          bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticleData x,
                          edm4hep::MCParticleData y) {
    float a, b;
    ROOT::Math::PxPyPzMVector pa(x.momentumAtEndpoint.x, x.momentumAtEndpoint.y,
                                 x.momentumAtEndpoint.z, x.mass);
    a = pa.pt();
    ROOT::Math::PxPyPzMVector pb(y.momentumAtEndpoint.x, y.momentumAtEndpoint.y,
                                 y.momentumAtEndpoint.z, y.mass);
    b = pb.pt();
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortPxEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection,
          bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticleData x,
                          edm4hep::MCParticleData y) {
    float a, b;
    ROOT::Math::PxPyPzMVector pa(x.momentumAtEndpoint.x, x.momentumAtEndpoint.y,
                                 x.momentumAtEndpoint.z, x.mass);
    a = pa.px();
    ROOT::Math::PxPyPzMVector pb(y.momentumAtEndpoint.x, y.momentumAtEndpoint.y,
                                 y.momentumAtEndpoint.z, y.mass);
    b = pb.px();
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortPyEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection,
          bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticleData x,
                          edm4hep::MCParticleData y) {
    float a, b;
    ROOT::Math::PxPyPzMVector pa(x.momentumAtEndpoint.x, x.momentumAtEndpoint.y,
                                 x.momentumAtEndpoint.z, x.mass);
    a = pa.py();
    ROOT::Math::PxPyPzMVector pb(y.momentumAtEndpoint.x, y.momentumAtEndpoint.y,
                                 y.momentumAtEndpoint.z, y.mass);
    b = pb.py();
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortPzEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection,
          bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticleData x,
                          edm4hep::MCParticleData y) {
    float a, b;
    ROOT::Math::PxPyPzMVector pa(x.momentumAtEndpoint.x, x.momentumAtEndpoint.y,
                                 x.momentumAtEndpoint.z, x.mass);
    a = pa.pz();
    ROOT::Math::PxPyPzMVector pb(y.momentumAtEndpoint.x, y.momentumAtEndpoint.y,
                                 y.momentumAtEndpoint.z, y.mass);
    b = pb.pz();
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortEtaEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection,
           bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticleData x,
                          edm4hep::MCParticleData y) {
    float a, b;
    ROOT::Math::PxPyPzMVector pa(x.momentumAtEndpoint.x, x.momentumAtEndpoint.y,
                                 x.momentumAtEndpoint.z, x.mass);
    a = pa.eta();
    ROOT::Math::PxPyPzMVector pb(y.momentumAtEndpoint.x, y.momentumAtEndpoint.y,
                                 y.momentumAtEndpoint.z, y.mass);
    b = pb.eta();
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortRapidityEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection,
                bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticleData x,
                          edm4hep::MCParticleData y) {
    float a, b;
    ROOT::Math::PxPyPzMVector pa(x.momentumAtEndpoint.x, x.momentumAtEndpoint.y,
                                 x.momentumAtEndpoint.z, x.mass);
    a = pa.Rapidity();
    ROOT::Math::PxPyPzMVector pb(y.momentumAtEndpoint.x, y.momentumAtEndpoint.y,
                                 y.momentumAtEndpoint.z, y.mass);
    b = pb.Rapidity();
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortThetaEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection,
             bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticleData x,
                          edm4hep::MCParticleData y) {
    float a, b;
    ROOT::Math::PxPyPzMVector pa(x.momentumAtEndpoint.x, x.momentumAtEndpoint.y,
                                 x.momentumAtEndpoint.z, x.mass);
    a = pa.theta();
    ROOT::Math::PxPyPzMVector pb(y.momentumAtEndpoint.x, y.momentumAtEndpoint.y,
                                 y.momentumAtEndpoint.z, y.mass);
    b = pb.theta();
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortPhiEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection,
           bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticleData x,
                          edm4hep::MCParticleData y) {
    float a, b;
    ROOT::Math::PxPyPzMVector pa(x.momentumAtEndpoint.x, x.momentumAtEndpoint.y,
                                 x.momentumAtEndpoint.z, x.mass);
    a = pa.phi();
    ROOT::Math::PxPyPzMVector pb(y.momentumAtEndpoint.x, y.momentumAtEndpoint.y,
                                 y.momentumAtEndpoint.z, y.mass);
    b = pb.phi();
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortR(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticleData x,
                          edm4hep::MCParticleData y) {
    float a, b;
    ROOT::Math::XYZVector ra(x.vertex.x, x.vertex.y, x.vertex.z);
    a = ra.r();
    ROOT::Math::XYZVector rb(y.vertex.x, y.vertex.y, y.vertex.z);
    b = rb.r();
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortX(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticleData x,
                          edm4hep::MCParticleData y) {
    float a, b;
    ROOT::Math::XYZVector ra(x.vertex.x, x.vertex.y, x.vertex.z);
    a = ra.x();
    ROOT::Math::XYZVector rb(y.vertex.x, y.vertex.y, y.vertex.z);
    b = rb.x();
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortY(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticleData x,
                          edm4hep::MCParticleData y) {
    float a, b;
    ROOT::Math::XYZVector ra(x.vertex.x, x.vertex.y, x.vertex.z);
    a = ra.y();
    ROOT::Math::XYZVector rb(y.vertex.x, y.vertex.y, y.vertex.z);
    b = rb.y();
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortZ(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticleData x,
                          edm4hep::MCParticleData y) {
    float a, b;
    ROOT::Math::XYZVector ra(x.vertex.x, x.vertex.y, x.vertex.z);
    a = ra.z();
    ROOT::Math::XYZVector rb(y.vertex.x, y.vertex.y, y.vertex.z);
    b = rb.z();
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortREnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection,
         bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticleData x,
                          edm4hep::MCParticleData y) {
    float a, b;
    ROOT::Math::XYZVector ra(x.endpoint.x, x.endpoint.y, x.endpoint.z);
    a = ra.r();
    ROOT::Math::XYZVector rb(y.endpoint.x, y.endpoint.y, y.endpoint.z);
    b = rb.r();
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortXEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection,
         bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticleData x,
                          edm4hep::MCParticleData y) {
    float a, b;
    ROOT::Math::XYZVector ra(x.endpoint.x, x.endpoint.y, x.endpoint.z);
    a = ra.x();
    ROOT::Math::XYZVector rb(y.endpoint.x, y.endpoint.y, y.endpoint.z);
    b = rb.x();
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortYEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection,
         bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticleData x,
                          edm4hep::MCParticleData y) {
    float a, b;
    ROOT::Math::XYZVector ra(x.endpoint.x, x.endpoint.y, x.endpoint.z);
    a = ra.y();
    ROOT::Math::XYZVector rb(y.endpoint.x, y.endpoint.y, y.endpoint.z);
    b = rb.y();
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortZEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection,
         bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticleData x,
                          edm4hep::MCParticleData y) {
    float a, b;
    ROOT::Math::XYZVector ra(x.endpoint.x, x.endpoint.y, x.endpoint.z);
    a = ra.z();
    ROOT::Math::XYZVector rb(y.endpoint.x, y.endpoint.y, y.endpoint.z);
    b = rb.z();
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortE(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticleData x,
                          edm4hep::MCParticleData y) {
    float a, b;
    ROOT::Math::PxPyPzMVector pa(x.momentum.x, x.momentum.y, x.momentum.z,
                                 x.mass);
    a = pa.e();
    ROOT::Math::PxPyPzMVector pb(y.momentum.x, y.momentum.y, y.momentum.z,
                                 y.mass);
    b = pb.e();
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortEEnd(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection,
         bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticleData x,
                          edm4hep::MCParticleData y) {
    float a, b;
    ROOT::Math::PxPyPzMVector pa(x.momentumAtEndpoint.x, x.momentumAtEndpoint.y,
                                 x.momentumAtEndpoint.z, x.mass);
    a = pa.e();
    ROOT::Math::PxPyPzMVector pb(y.momentumAtEndpoint.x, y.momentumAtEndpoint.y,
                                 y.momentumAtEndpoint.z, y.mass);
    b = pb.e();
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortM(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticleData x,
                          edm4hep::MCParticleData y) {
    float a, b;
    a = x.mass;
    b = y.mass;
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortQ(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticleData x,
                          edm4hep::MCParticleData y) {
    float a, b;
    a = x.charge;
    b = y.charge;
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortAbsq(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection,
         bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticleData x,
                          edm4hep::MCParticleData y) {
    float a, b;
    a = std::abs(x.charge);
    b = std::abs(y.charge);
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortPdg(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticleData x,
                          edm4hep::MCParticleData y) {
    int a, b;
    a = x.PDG;
    b = y.PDG;
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortAbspdg(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection,
           bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticleData x,
                          edm4hep::MCParticleData y) {
    int a, b;
    a = std::abs(x.PDG);
    b = std::abs(y.PDG);
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortSimStat(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection,
            bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticleData x,
                          edm4hep::MCParticleData y) {
    int a, b;
    a = x.simulatorStatus;
    b = y.simulatorStatus;
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sortGenStat(ROOT::VecOps::RVec<edm4hep::MCParticleData> &collection,
            bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticleData x,
                          edm4hep::MCParticleData y) {
    int a, b;
    a = x.generatorStatus;
    b = y.generatorStatus;
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
edm4hep::MCParticleCollection sortP(edm4hep::MCParticleCollection &collection,
                                    bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticle x, edm4hep::MCParticle y) {
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
  std::vector<edm4hep::MCParticle> vec;
  for (const edm4hep::MCParticle &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::MCParticleCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::MCParticle &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::MCParticleCollection sortPt(edm4hep::MCParticleCollection &collection,
                                     bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticle x, edm4hep::MCParticle y) {
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
  std::vector<edm4hep::MCParticle> vec;
  for (const edm4hep::MCParticle &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::MCParticleCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::MCParticle &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::MCParticleCollection sortPx(edm4hep::MCParticleCollection &collection,
                                     bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticle x, edm4hep::MCParticle y) {
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
  std::vector<edm4hep::MCParticle> vec;
  for (const edm4hep::MCParticle &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::MCParticleCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::MCParticle &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::MCParticleCollection sortPy(edm4hep::MCParticleCollection &collection,
                                     bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticle x, edm4hep::MCParticle y) {
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
  std::vector<edm4hep::MCParticle> vec;
  for (const edm4hep::MCParticle &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::MCParticleCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::MCParticle &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::MCParticleCollection sortPz(edm4hep::MCParticleCollection &collection,
                                     bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticle x, edm4hep::MCParticle y) {
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
  std::vector<edm4hep::MCParticle> vec;
  for (const edm4hep::MCParticle &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::MCParticleCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::MCParticle &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::MCParticleCollection sortEta(edm4hep::MCParticleCollection &collection,
                                      bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticle x, edm4hep::MCParticle y) {
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
  std::vector<edm4hep::MCParticle> vec;
  for (const edm4hep::MCParticle &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::MCParticleCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::MCParticle &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::MCParticleCollection
sortRapidity(edm4hep::MCParticleCollection &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticle x, edm4hep::MCParticle y) {
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
  std::vector<edm4hep::MCParticle> vec;
  for (const edm4hep::MCParticle &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::MCParticleCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::MCParticle &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::MCParticleCollection
sortTheta(edm4hep::MCParticleCollection &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticle x, edm4hep::MCParticle y) {
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
  std::vector<edm4hep::MCParticle> vec;
  for (const edm4hep::MCParticle &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::MCParticleCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::MCParticle &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::MCParticleCollection sortPhi(edm4hep::MCParticleCollection &collection,
                                      bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticle x, edm4hep::MCParticle y) {
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
  std::vector<edm4hep::MCParticle> vec;
  for (const edm4hep::MCParticle &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::MCParticleCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::MCParticle &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::MCParticleCollection
sortPEnd(edm4hep::MCParticleCollection &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticle x, edm4hep::MCParticle y) {
    float a, b;
    ROOT::Math::PxPyPzMVector pa(x.getMomentumAtEndpoint().x,
                                 x.getMomentumAtEndpoint().y,
                                 x.getMomentumAtEndpoint().z, x.getMass());
    a = pa.P();
    ROOT::Math::PxPyPzMVector pb(y.getMomentumAtEndpoint().x,
                                 y.getMomentumAtEndpoint().y,
                                 y.getMomentumAtEndpoint().z, y.getMass());
    b = pb.P();
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::MCParticle> vec;
  for (const edm4hep::MCParticle &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::MCParticleCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::MCParticle &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::MCParticleCollection
sortPtEnd(edm4hep::MCParticleCollection &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticle x, edm4hep::MCParticle y) {
    float a, b;
    ROOT::Math::PxPyPzMVector pa(x.getMomentumAtEndpoint().x,
                                 x.getMomentumAtEndpoint().y,
                                 x.getMomentumAtEndpoint().z, x.getMass());
    a = pa.pt();
    ROOT::Math::PxPyPzMVector pb(y.getMomentumAtEndpoint().x,
                                 y.getMomentumAtEndpoint().y,
                                 y.getMomentumAtEndpoint().z, y.getMass());
    b = pb.pt();
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::MCParticle> vec;
  for (const edm4hep::MCParticle &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::MCParticleCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::MCParticle &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::MCParticleCollection
sortPxEnd(edm4hep::MCParticleCollection &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticle x, edm4hep::MCParticle y) {
    float a, b;
    ROOT::Math::PxPyPzMVector pa(x.getMomentumAtEndpoint().x,
                                 x.getMomentumAtEndpoint().y,
                                 x.getMomentumAtEndpoint().z, x.getMass());
    a = pa.px();
    ROOT::Math::PxPyPzMVector pb(y.getMomentumAtEndpoint().x,
                                 y.getMomentumAtEndpoint().y,
                                 y.getMomentumAtEndpoint().z, y.getMass());
    b = pb.px();
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::MCParticle> vec;
  for (const edm4hep::MCParticle &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::MCParticleCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::MCParticle &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::MCParticleCollection
sortPyEnd(edm4hep::MCParticleCollection &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticle x, edm4hep::MCParticle y) {
    float a, b;
    ROOT::Math::PxPyPzMVector pa(x.getMomentumAtEndpoint().x,
                                 x.getMomentumAtEndpoint().y,
                                 x.getMomentumAtEndpoint().z, x.getMass());
    a = pa.py();
    ROOT::Math::PxPyPzMVector pb(y.getMomentumAtEndpoint().x,
                                 y.getMomentumAtEndpoint().y,
                                 y.getMomentumAtEndpoint().z, y.getMass());
    b = pb.py();
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::MCParticle> vec;
  for (const edm4hep::MCParticle &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::MCParticleCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::MCParticle &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::MCParticleCollection
sortPzEnd(edm4hep::MCParticleCollection &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticle x, edm4hep::MCParticle y) {
    float a, b;
    ROOT::Math::PxPyPzMVector pa(x.getMomentumAtEndpoint().x,
                                 x.getMomentumAtEndpoint().y,
                                 x.getMomentumAtEndpoint().z, x.getMass());
    a = pa.pz();
    ROOT::Math::PxPyPzMVector pb(y.getMomentumAtEndpoint().x,
                                 y.getMomentumAtEndpoint().y,
                                 y.getMomentumAtEndpoint().z, y.getMass());
    b = pb.pz();
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::MCParticle> vec;
  for (const edm4hep::MCParticle &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::MCParticleCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::MCParticle &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::MCParticleCollection
sortEtaEnd(edm4hep::MCParticleCollection &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticle x, edm4hep::MCParticle y) {
    float a, b;
    ROOT::Math::PxPyPzMVector pa(x.getMomentumAtEndpoint().x,
                                 x.getMomentumAtEndpoint().y,
                                 x.getMomentumAtEndpoint().z, x.getMass());
    a = pa.eta();
    ROOT::Math::PxPyPzMVector pb(y.getMomentumAtEndpoint().x,
                                 y.getMomentumAtEndpoint().y,
                                 y.getMomentumAtEndpoint().z, y.getMass());
    b = pb.eta();
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::MCParticle> vec;
  for (const edm4hep::MCParticle &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::MCParticleCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::MCParticle &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::MCParticleCollection
sortRapidityEnd(edm4hep::MCParticleCollection &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticle x, edm4hep::MCParticle y) {
    float a, b;
    ROOT::Math::PxPyPzMVector pa(x.getMomentumAtEndpoint().x,
                                 x.getMomentumAtEndpoint().y,
                                 x.getMomentumAtEndpoint().z, x.getMass());
    a = pa.Rapidity();
    ROOT::Math::PxPyPzMVector pb(y.getMomentumAtEndpoint().x,
                                 y.getMomentumAtEndpoint().y,
                                 y.getMomentumAtEndpoint().z, y.getMass());
    b = pb.Rapidity();
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::MCParticle> vec;
  for (const edm4hep::MCParticle &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::MCParticleCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::MCParticle &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::MCParticleCollection
sortThetaEnd(edm4hep::MCParticleCollection &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticle x, edm4hep::MCParticle y) {
    float a, b;
    ROOT::Math::PxPyPzMVector pa(x.getMomentumAtEndpoint().x,
                                 x.getMomentumAtEndpoint().y,
                                 x.getMomentumAtEndpoint().z, x.getMass());
    a = pa.theta();
    ROOT::Math::PxPyPzMVector pb(y.getMomentumAtEndpoint().x,
                                 y.getMomentumAtEndpoint().y,
                                 y.getMomentumAtEndpoint().z, y.getMass());
    b = pb.theta();
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::MCParticle> vec;
  for (const edm4hep::MCParticle &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::MCParticleCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::MCParticle &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::MCParticleCollection
sortPhiEnd(edm4hep::MCParticleCollection &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticle x, edm4hep::MCParticle y) {
    float a, b;
    ROOT::Math::PxPyPzMVector pa(x.getMomentumAtEndpoint().x,
                                 x.getMomentumAtEndpoint().y,
                                 x.getMomentumAtEndpoint().z, x.getMass());
    a = pa.phi();
    ROOT::Math::PxPyPzMVector pb(y.getMomentumAtEndpoint().x,
                                 y.getMomentumAtEndpoint().y,
                                 y.getMomentumAtEndpoint().z, y.getMass());
    b = pb.phi();
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::MCParticle> vec;
  for (const edm4hep::MCParticle &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::MCParticleCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::MCParticle &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::MCParticleCollection sortR(edm4hep::MCParticleCollection &collection,
                                    bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticle x, edm4hep::MCParticle y) {
    float a, b;
    ROOT::Math::XYZVector ra(x.getVertex().x, x.getVertex().y, x.getVertex().z);
    a = ra.r();
    ROOT::Math::XYZVector rb(y.getVertex().x, y.getVertex().y, y.getVertex().z);
    b = rb.r();
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::MCParticle> vec;
  for (const edm4hep::MCParticle &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::MCParticleCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::MCParticle &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::MCParticleCollection sortX(edm4hep::MCParticleCollection &collection,
                                    bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticle x, edm4hep::MCParticle y) {
    float a, b;
    ROOT::Math::XYZVector ra(x.getVertex().x, x.getVertex().y, x.getVertex().z);
    a = ra.x();
    ROOT::Math::XYZVector rb(y.getVertex().x, y.getVertex().y, y.getVertex().z);
    b = rb.x();
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::MCParticle> vec;
  for (const edm4hep::MCParticle &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::MCParticleCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::MCParticle &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::MCParticleCollection sortY(edm4hep::MCParticleCollection &collection,
                                    bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticle x, edm4hep::MCParticle y) {
    float a, b;
    ROOT::Math::XYZVector ra(x.getVertex().x, x.getVertex().y, x.getVertex().z);
    a = ra.y();
    ROOT::Math::XYZVector rb(y.getVertex().x, y.getVertex().y, y.getVertex().z);
    b = rb.y();
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::MCParticle> vec;
  for (const edm4hep::MCParticle &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::MCParticleCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::MCParticle &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::MCParticleCollection sortZ(edm4hep::MCParticleCollection &collection,
                                    bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticle x, edm4hep::MCParticle y) {
    float a, b;
    ROOT::Math::XYZVector ra(x.getVertex().x, x.getVertex().y, x.getVertex().z);
    a = ra.z();
    ROOT::Math::XYZVector rb(y.getVertex().x, y.getVertex().y, y.getVertex().z);
    b = rb.z();
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::MCParticle> vec;
  for (const edm4hep::MCParticle &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::MCParticleCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::MCParticle &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::MCParticleCollection
sortREnd(edm4hep::MCParticleCollection &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticle x, edm4hep::MCParticle y) {
    float a, b;
    ROOT::Math::XYZVector ra(x.getEndpoint().x, x.getEndpoint().y,
                             x.getEndpoint().z);
    a = ra.r();
    ROOT::Math::XYZVector rb(y.getEndpoint().x, y.getEndpoint().y,
                             y.getEndpoint().z);
    b = rb.r();
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::MCParticle> vec;
  for (const edm4hep::MCParticle &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::MCParticleCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::MCParticle &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::MCParticleCollection
sortXEnd(edm4hep::MCParticleCollection &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticle x, edm4hep::MCParticle y) {
    float a, b;
    ROOT::Math::XYZVector ra(x.getEndpoint().x, x.getEndpoint().y,
                             x.getEndpoint().z);
    a = ra.x();
    ROOT::Math::XYZVector rb(y.getEndpoint().x, y.getEndpoint().y,
                             y.getEndpoint().z);
    b = rb.x();
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::MCParticle> vec;
  for (const edm4hep::MCParticle &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::MCParticleCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::MCParticle &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::MCParticleCollection
sortYEnd(edm4hep::MCParticleCollection &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticle x, edm4hep::MCParticle y) {
    float a, b;
    ROOT::Math::XYZVector ra(x.getEndpoint().x, x.getEndpoint().y,
                             x.getEndpoint().z);
    a = ra.y();
    ROOT::Math::XYZVector rb(y.getEndpoint().x, y.getEndpoint().y,
                             y.getEndpoint().z);
    b = rb.y();
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::MCParticle> vec;
  for (const edm4hep::MCParticle &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::MCParticleCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::MCParticle &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::MCParticleCollection
sortZEnd(edm4hep::MCParticleCollection &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticle x, edm4hep::MCParticle y) {
    float a, b;
    ROOT::Math::XYZVector ra(x.getEndpoint().x, x.getEndpoint().y,
                             x.getEndpoint().z);
    a = ra.z();
    ROOT::Math::XYZVector rb(y.getEndpoint().x, y.getEndpoint().y,
                             y.getEndpoint().z);
    b = rb.z();
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::MCParticle> vec;
  for (const edm4hep::MCParticle &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::MCParticleCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::MCParticle &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::MCParticleCollection sortE(edm4hep::MCParticleCollection &collection,
                                    bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticle x, edm4hep::MCParticle y) {
    float a, b;
    ROOT::Math::PxPyPzMVector pa(x.getMomentum().x, x.getMomentum().y,
                                 x.getMomentum().z, x.getMass());
    a = pa.e();
    ROOT::Math::PxPyPzMVector pb(y.getMomentum().x, y.getMomentum().y,
                                 y.getMomentum().z, y.getMass());
    b = pb.e();
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::MCParticle> vec;
  for (const edm4hep::MCParticle &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::MCParticleCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::MCParticle &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::MCParticleCollection
sortEEnd(edm4hep::MCParticleCollection &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticle x, edm4hep::MCParticle y) {
    float a, b;
    ROOT::Math::PxPyPzMVector pa(x.getMomentumAtEndpoint().x,
                                 x.getMomentumAtEndpoint().y,
                                 x.getMomentumAtEndpoint().z, x.getMass());
    a = pa.e();
    ROOT::Math::PxPyPzMVector pb(y.getMomentumAtEndpoint().x,
                                 y.getMomentumAtEndpoint().y,
                                 y.getMomentumAtEndpoint().z, y.getMass());
    b = pb.e();
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::MCParticle> vec;
  for (const edm4hep::MCParticle &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::MCParticleCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::MCParticle &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::MCParticleCollection sortM(edm4hep::MCParticleCollection &collection,
                                    bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticle x, edm4hep::MCParticle y) {
    float a, b;
    a = x.getMass();
    b = y.getMass();
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::MCParticle> vec;
  for (const edm4hep::MCParticle &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::MCParticleCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::MCParticle &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::MCParticleCollection sortQ(edm4hep::MCParticleCollection &collection,
                                    bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticle x, edm4hep::MCParticle y) {
    float a, b;
    a = x.getCharge();
    b = y.getCharge();
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::MCParticle> vec;
  for (const edm4hep::MCParticle &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::MCParticleCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::MCParticle &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::MCParticleCollection
sortAbsq(edm4hep::MCParticleCollection &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticle x, edm4hep::MCParticle y) {
    float a, b;
    a = std::abs(x.getCharge());
    b = std::abs(y.getCharge());
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::MCParticle> vec;
  for (const edm4hep::MCParticle &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::MCParticleCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::MCParticle &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::MCParticleCollection sortPdg(edm4hep::MCParticleCollection &collection,
                                      bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticle x, edm4hep::MCParticle y) {
    int a, b;
    a = x.getPDG();
    b = y.getPDG();
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::MCParticle> vec;
  for (const edm4hep::MCParticle &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::MCParticleCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::MCParticle &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::MCParticleCollection
sortAbspdg(edm4hep::MCParticleCollection &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticle x, edm4hep::MCParticle y) {
    int a, b;
    a = std::abs(x.getPDG());
    b = std::abs(y.getPDG());
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::MCParticle> vec;
  for (const edm4hep::MCParticle &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::MCParticleCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::MCParticle &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::MCParticleCollection
sortSimStat(edm4hep::MCParticleCollection &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticle x, edm4hep::MCParticle y) {
    int a, b;
    a = x.getSimulatorStatus();
    b = y.getSimulatorStatus();
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::MCParticle> vec;
  for (const edm4hep::MCParticle &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::MCParticleCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::MCParticle &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::MCParticleCollection
sortGenStat(edm4hep::MCParticleCollection &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::MCParticle x, edm4hep::MCParticle y) {
    int a, b;
    a = x.getGeneratorStatus();
    b = y.getGeneratorStatus();
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::MCParticle> vec;
  for (const edm4hep::MCParticle &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::MCParticleCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::MCParticle &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
getParents(edm4hep::MCParticleData &item,
           ROOT::VecOps::RVec<edm4hep::MCParticleData> &relatedCollection) {
  ROOT::VecOps::RVec<edm4hep::MCParticleData> vec;
  size_t len = item.parents_end - item.parents_begin;
  vec.reserve(len);
  for (int i = item.parents_begin; i < item.parents_end; i++) {
    vec.emplace_back(relatedCollection[i]);
  }
  return vec;
}
edm4hep::MCParticleCollection getParents(const edm4hep::MCParticle &item) {
  edm4hep::MCParticleCollection vec;
  vec.setSubsetCollection();
  for (auto it = item.parents_begin(); it != item.parents_end(); it++) {
    vec.push_back(*it);
  }
  return vec;
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
getDaughters(edm4hep::MCParticleData &item,
             ROOT::VecOps::RVec<edm4hep::MCParticleData> &relatedCollection) {
  ROOT::VecOps::RVec<edm4hep::MCParticleData> vec;
  size_t len = item.daughters_end - item.daughters_begin;
  vec.reserve(len);
  for (int i = item.daughters_begin; i < item.daughters_end; i++) {
    vec.emplace_back(relatedCollection[i]);
  }
  return vec;
}
edm4hep::MCParticleCollection getDaughters(const edm4hep::MCParticle &item) {
  edm4hep::MCParticleCollection vec;
  vec.setSubsetCollection();
  for (auto it = item.daughters_begin(); it != item.daughters_end(); it++) {
    vec.push_back(*it);
  }
  return vec;
}
} // namespace MCParticle
} // namespace k4::ral
