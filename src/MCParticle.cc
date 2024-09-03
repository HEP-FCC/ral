#include <ral/MCParticle.h>
namespace k4::ral {
namespace ReconstructedParticle {
ROOT::VecOps::RVec<float>
get_p(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
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
get_pt(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
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
get_px(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
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
get_py(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
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
get_pz(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
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
get_eta(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
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
get_rapidity(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
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
get_theta(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
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
get_phi(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
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
get_p_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
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
get_pt_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
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
get_px_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
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
get_py_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
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
get_pz_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
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
get_eta_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
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
get_rapidity_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
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
get_theta_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
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
get_phi_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
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
get_r(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
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
get_x(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
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
get_y(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
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
get_z(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
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
get_r_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
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
get_x_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
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
get_y_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
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
get_z_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
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
get_e(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
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
get_e_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
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
get_m(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
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
get_q(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
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
get_absq(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
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
get_pdg(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
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
get_abspdg(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
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
get_sim_stat(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
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
get_gen_stat(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<int> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticleData &item : collection) {
    int result;
    result = (item.generatorStatus);
    vec.emplace_back(result);
  }
  return vec;
}
int print_p(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<float> vec = get_p(collection);
  std::cout << "Momentum: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int print_pt(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<float> vec = get_pt(collection);
  std::cout << "Transverse momentum: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int print_px(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<float> vec = get_px(collection);
  std::cout << "X momentum: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int print_py(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<float> vec = get_py(collection);
  std::cout << "Y momentum: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int print_pz(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<float> vec = get_pz(collection);
  std::cout << "Z momentum: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int print_eta(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<float> vec = get_eta(collection);
  std::cout << "Pseudorapidity: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int print_rapidity(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<float> vec = get_rapidity(collection);
  std::cout << "Rapidity: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int print_theta(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<float> vec = get_theta(collection);
  std::cout << "Polar angle: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int print_phi(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<float> vec = get_phi(collection);
  std::cout << "Azimutal angle: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int print_p_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<float> vec = get_p_end(collection);
  std::cout << "Momentum: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int print_pt_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<float> vec = get_pt_end(collection);
  std::cout << "Transverse momentum: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int print_px_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<float> vec = get_px_end(collection);
  std::cout << "X momentum: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int print_py_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<float> vec = get_py_end(collection);
  std::cout << "Y momentum: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int print_pz_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<float> vec = get_pz_end(collection);
  std::cout << "Z momentum: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int print_eta_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<float> vec = get_eta_end(collection);
  std::cout << "Pseudorapidity: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int print_rapidity_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<float> vec = get_rapidity_end(collection);
  std::cout << "Rapidity: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int print_theta_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<float> vec = get_theta_end(collection);
  std::cout << "Polar angle: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int print_phi_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<float> vec = get_phi_end(collection);
  std::cout << "Azimutal angle: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int print_r(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<float> vec = get_r(collection);
  std::cout << "Distance to origin: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int print_x(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<float> vec = get_x(collection);
  std::cout << "X coordinate: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int print_y(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<float> vec = get_y(collection);
  std::cout << "Y coordinate: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int print_z(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<float> vec = get_z(collection);
  std::cout << "Z coordinate: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int print_r_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<float> vec = get_r_end(collection);
  std::cout << "Distance to origin: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int print_x_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<float> vec = get_x_end(collection);
  std::cout << "X coordinate: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int print_y_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<float> vec = get_y_end(collection);
  std::cout << "Y coordinate: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int print_z_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<float> vec = get_z_end(collection);
  std::cout << "Z coordinate: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int print_e(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<float> vec = get_e(collection);
  std::cout << "Energy: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int print_e_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<float> vec = get_e_end(collection);
  std::cout << "Energy: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int print_m(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<float> vec = get_m(collection);
  std::cout << "Mass: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int print_q(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<float> vec = get_q(collection);
  std::cout << "Charge: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int print_absq(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<float> vec = get_absq(collection);
  std::cout << "Absolute charge: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int print_pdg(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<int> vec = get_pdg(collection);
  std::cout << "Pdg: ";
  for (const int &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int print_abspdg(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<int> vec = get_abspdg(collection);
  std::cout << "Absolute pdg: ";
  for (const int &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int print_sim_stat(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<int> vec = get_sim_stat(collection);
  std::cout << "Simulator status: ";
  for (const int &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int print_gen_stat(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<int> vec = get_gen_stat(collection);
  std::cout << "Generator status: ";
  for (const int &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
ROOT::VecOps::RVec<bool>
mask_p(LogicalOperators::ComparisonOperator op, float val,
       ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = get_p(collection);
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
mask_pt(LogicalOperators::ComparisonOperator op, float val,
        ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = get_pt(collection);
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
mask_px(LogicalOperators::ComparisonOperator op, float val,
        ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = get_px(collection);
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
mask_py(LogicalOperators::ComparisonOperator op, float val,
        ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = get_py(collection);
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
mask_pz(LogicalOperators::ComparisonOperator op, float val,
        ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = get_pz(collection);
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
mask_eta(LogicalOperators::ComparisonOperator op, float val,
         ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = get_eta(collection);
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
mask_rapidity(LogicalOperators::ComparisonOperator op, float val,
              ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = get_rapidity(collection);
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
mask_theta(LogicalOperators::ComparisonOperator op, float val,
           ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = get_theta(collection);
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
mask_phi(LogicalOperators::ComparisonOperator op, float val,
         ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = get_phi(collection);
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
mask_p_end(LogicalOperators::ComparisonOperator op, float val,
           ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = get_p_end(collection);
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
mask_pt_end(LogicalOperators::ComparisonOperator op, float val,
            ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = get_pt_end(collection);
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
mask_px_end(LogicalOperators::ComparisonOperator op, float val,
            ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = get_px_end(collection);
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
mask_py_end(LogicalOperators::ComparisonOperator op, float val,
            ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = get_py_end(collection);
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
mask_pz_end(LogicalOperators::ComparisonOperator op, float val,
            ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = get_pz_end(collection);
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
mask_eta_end(LogicalOperators::ComparisonOperator op, float val,
             ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = get_eta_end(collection);
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
mask_rapidity_end(LogicalOperators::ComparisonOperator op, float val,
                  ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = get_rapidity_end(collection);
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
mask_theta_end(LogicalOperators::ComparisonOperator op, float val,
               ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = get_theta_end(collection);
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
mask_phi_end(LogicalOperators::ComparisonOperator op, float val,
             ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = get_phi_end(collection);
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
mask_r(LogicalOperators::ComparisonOperator op, float val,
       ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = get_r(collection);
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
mask_x(LogicalOperators::ComparisonOperator op, float val,
       ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = get_x(collection);
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
mask_y(LogicalOperators::ComparisonOperator op, float val,
       ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = get_y(collection);
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
mask_z(LogicalOperators::ComparisonOperator op, float val,
       ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = get_z(collection);
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
mask_r_end(LogicalOperators::ComparisonOperator op, float val,
           ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = get_r_end(collection);
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
mask_x_end(LogicalOperators::ComparisonOperator op, float val,
           ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = get_x_end(collection);
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
mask_y_end(LogicalOperators::ComparisonOperator op, float val,
           ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = get_y_end(collection);
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
mask_z_end(LogicalOperators::ComparisonOperator op, float val,
           ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = get_z_end(collection);
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
mask_e(LogicalOperators::ComparisonOperator op, float val,
       ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = get_e(collection);
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
mask_e_end(LogicalOperators::ComparisonOperator op, float val,
           ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = get_e_end(collection);
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
mask_m(LogicalOperators::ComparisonOperator op, float val,
       ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = get_m(collection);
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
mask_q(LogicalOperators::ComparisonOperator op, float val,
       ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = get_q(collection);
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
mask_absq(LogicalOperators::ComparisonOperator op, float val,
          ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = get_absq(collection);
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
mask_pdg(LogicalOperators::ComparisonOperator op, int val,
         ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<int> vals = get_pdg(collection);
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
mask_abspdg(LogicalOperators::ComparisonOperator op, int val,
            ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<int> vals = get_abspdg(collection);
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
mask_sim_stat(LogicalOperators::ComparisonOperator op, int val,
              ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<int> vals = get_sim_stat(collection);
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
mask_gen_stat(LogicalOperators::ComparisonOperator op, int val,
              ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<int> vals = get_gen_stat(collection);
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
sel_p(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  auto mask = mask_p(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sel_pt(LogicalOperators::ComparisonOperator op, float val,
       ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  auto mask = mask_pt(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sel_px(LogicalOperators::ComparisonOperator op, float val,
       ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  auto mask = mask_px(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sel_py(LogicalOperators::ComparisonOperator op, float val,
       ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  auto mask = mask_py(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sel_pz(LogicalOperators::ComparisonOperator op, float val,
       ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  auto mask = mask_pz(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sel_eta(LogicalOperators::ComparisonOperator op, float val,
        ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  auto mask = mask_eta(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sel_rapidity(LogicalOperators::ComparisonOperator op, float val,
             ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  auto mask = mask_rapidity(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sel_theta(LogicalOperators::ComparisonOperator op, float val,
          ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  auto mask = mask_theta(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sel_phi(LogicalOperators::ComparisonOperator op, float val,
        ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  auto mask = mask_phi(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sel_p_end(LogicalOperators::ComparisonOperator op, float val,
          ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  auto mask = mask_p_end(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sel_pt_end(LogicalOperators::ComparisonOperator op, float val,
           ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  auto mask = mask_pt_end(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sel_px_end(LogicalOperators::ComparisonOperator op, float val,
           ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  auto mask = mask_px_end(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sel_py_end(LogicalOperators::ComparisonOperator op, float val,
           ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  auto mask = mask_py_end(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sel_pz_end(LogicalOperators::ComparisonOperator op, float val,
           ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  auto mask = mask_pz_end(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sel_eta_end(LogicalOperators::ComparisonOperator op, float val,
            ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  auto mask = mask_eta_end(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sel_rapidity_end(LogicalOperators::ComparisonOperator op, float val,
                 ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  auto mask = mask_rapidity_end(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sel_theta_end(LogicalOperators::ComparisonOperator op, float val,
              ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  auto mask = mask_theta_end(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sel_phi_end(LogicalOperators::ComparisonOperator op, float val,
            ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  auto mask = mask_phi_end(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sel_r(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  auto mask = mask_r(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sel_x(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  auto mask = mask_x(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sel_y(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  auto mask = mask_y(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sel_z(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  auto mask = mask_z(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sel_r_end(LogicalOperators::ComparisonOperator op, float val,
          ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  auto mask = mask_r_end(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sel_x_end(LogicalOperators::ComparisonOperator op, float val,
          ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  auto mask = mask_x_end(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sel_y_end(LogicalOperators::ComparisonOperator op, float val,
          ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  auto mask = mask_y_end(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sel_z_end(LogicalOperators::ComparisonOperator op, float val,
          ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  auto mask = mask_z_end(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sel_e(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  auto mask = mask_e(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sel_e_end(LogicalOperators::ComparisonOperator op, float val,
          ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  auto mask = mask_e_end(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sel_m(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  auto mask = mask_m(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sel_q(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  auto mask = mask_q(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sel_absq(LogicalOperators::ComparisonOperator op, float val,
         ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  auto mask = mask_absq(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sel_pdg(LogicalOperators::ComparisonOperator op, int val,
        ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  auto mask = mask_pdg(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sel_abspdg(LogicalOperators::ComparisonOperator op, int val,
           ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  auto mask = mask_abspdg(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sel_sim_stat(LogicalOperators::ComparisonOperator op, int val,
             ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  auto mask = mask_sim_stat(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sel_gen_stat(LogicalOperators::ComparisonOperator op, int val,
             ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  auto mask = mask_gen_stat(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::MCParticleData>
sort_p(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection, bool reverse) {
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
sort_pt(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection, bool reverse) {
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
sort_px(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection, bool reverse) {
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
sort_py(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection, bool reverse) {
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
sort_pz(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection, bool reverse) {
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
sort_eta(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection, bool reverse) {
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
sort_rapidity(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
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
sort_theta(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
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
sort_phi(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection, bool reverse) {
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
sort_p_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
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
sort_pt_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
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
sort_px_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
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
sort_py_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
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
sort_pz_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
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
sort_eta_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
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
sort_rapidity_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
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
sort_theta_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
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
sort_phi_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
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
sort_r(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection, bool reverse) {
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
sort_x(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection, bool reverse) {
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
sort_y(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection, bool reverse) {
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
sort_z(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection, bool reverse) {
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
sort_r_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
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
sort_x_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
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
sort_y_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
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
sort_z_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
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
sort_e(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection, bool reverse) {
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
sort_e_end(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
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
sort_m(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection, bool reverse) {
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
sort_q(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection, bool reverse) {
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
sort_absq(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
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
sort_pdg(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection, bool reverse) {
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
sort_abspdg(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
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
sort_sim_stat(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
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
sort_gen_stat(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection,
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
} // namespace ReconstructedParticle
} // namespace k4::ral
