#include <ral/MCParticle.h>
namespace k4::ral {
namespace ReconstructedParticle {
ROOT::VecOps::RVec<float>
get_p(ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::MCParticleData &item : collection) {
    float result;
    float px = item.momentum.x;
    float py = item.momentum.y;
    float pz = item.momentum.z;
    float m = item.mass;
    ROOT::Math::PxPyPzMVector p(px, py, pz, m);
    result = p.P();
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
    float px = item.momentum.x;
    float py = item.momentum.y;
    float pz = item.momentum.z;
    float m = item.mass;
    ROOT::Math::PxPyPzMVector p(px, py, pz, m);
    result = p.pt();
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
    float px = item.momentum.x;
    float py = item.momentum.y;
    float pz = item.momentum.z;
    float m = item.mass;
    ROOT::Math::PxPyPzMVector p(px, py, pz, m);
    result = p.px();
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
    float px = item.momentum.x;
    float py = item.momentum.y;
    float pz = item.momentum.z;
    float m = item.mass;
    ROOT::Math::PxPyPzMVector p(px, py, pz, m);
    result = p.py();
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
    float px = item.momentum.x;
    float py = item.momentum.y;
    float pz = item.momentum.z;
    float m = item.mass;
    ROOT::Math::PxPyPzMVector p(px, py, pz, m);
    result = p.pz();
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
    float px = item.momentum.x;
    float py = item.momentum.y;
    float pz = item.momentum.z;
    float m = item.mass;
    ROOT::Math::PxPyPzMVector p(px, py, pz, m);
    result = p.eta();
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
    float px = item.momentum.x;
    float py = item.momentum.y;
    float pz = item.momentum.z;
    float m = item.mass;
    ROOT::Math::PxPyPzMVector p(px, py, pz, m);
    result = p.Rapidity();
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
    float px = item.momentum.x;
    float py = item.momentum.y;
    float pz = item.momentum.z;
    float m = item.mass;
    ROOT::Math::PxPyPzMVector p(px, py, pz, m);
    result = p.theta();
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
    float px = item.momentum.x;
    float py = item.momentum.y;
    float pz = item.momentum.z;
    float m = item.mass;
    ROOT::Math::PxPyPzMVector p(px, py, pz, m);
    result = p.phi();
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
    double x = item.vertex.x;
    double y = item.vertex.y;
    double z = item.vertex.z;
    ROOT::Math::XYZVector r(x, y, z);
    result = r.r();
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
    double x = item.vertex.x;
    double y = item.vertex.y;
    double z = item.vertex.z;
    ROOT::Math::XYZVector r(x, y, z);
    result = r.x();
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
    double x = item.vertex.x;
    double y = item.vertex.y;
    double z = item.vertex.z;
    ROOT::Math::XYZVector r(x, y, z);
    result = r.y();
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
    double x = item.vertex.x;
    double y = item.vertex.y;
    double z = item.vertex.z;
    ROOT::Math::XYZVector r(x, y, z);
    result = r.z();
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
    float px = item.momentum.x;
    float py = item.momentum.y;
    float pz = item.momentum.z;
    float m = item.mass;
    ROOT::Math::PxPyPzMVector p(px, py, pz, m);
    result = p.e();
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
sel_e(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::MCParticleData> collection) {
  auto mask = mask_e(op, val, collection);
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
} // namespace ReconstructedParticle
} // namespace k4::ral
