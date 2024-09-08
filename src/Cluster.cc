#include <ral/Cluster.h>
namespace k4::ral {
namespace Cluster {
ROOT::VecOps::RVec<int>
getType(ROOT::VecOps::RVec<edm4hep::ClusterData> &collection) {
  ROOT::VecOps::RVec<int> vec;
  vec.reserve(collection.size());
  for (const edm4hep::ClusterData &item : collection) {
    int result;
    result = (item.type);
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getEnergy(ROOT::VecOps::RVec<edm4hep::ClusterData> &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::ClusterData &item : collection) {
    float result;
    result = (item.energy);
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getITheta(ROOT::VecOps::RVec<edm4hep::ClusterData> &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::ClusterData &item : collection) {
    float result;
    result = (item.iTheta);
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getPhi(ROOT::VecOps::RVec<edm4hep::ClusterData> &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::ClusterData &item : collection) {
    float result;
    result = (item.phi);
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getR(ROOT::VecOps::RVec<edm4hep::ClusterData> &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::ClusterData &item : collection) {
    float result;
    ROOT::Math::XYZVector rresult(item.position.x, item.position.y,
                                  item.position.z);
    result = rresult.r();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getX(ROOT::VecOps::RVec<edm4hep::ClusterData> &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::ClusterData &item : collection) {
    float result;
    ROOT::Math::XYZVector rresult(item.position.x, item.position.y,
                                  item.position.z);
    result = rresult.x();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getY(ROOT::VecOps::RVec<edm4hep::ClusterData> &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::ClusterData &item : collection) {
    float result;
    ROOT::Math::XYZVector rresult(item.position.x, item.position.y,
                                  item.position.z);
    result = rresult.y();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getZ(ROOT::VecOps::RVec<edm4hep::ClusterData> &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::ClusterData &item : collection) {
    float result;
    ROOT::Math::XYZVector rresult(item.position.x, item.position.y,
                                  item.position.z);
    result = rresult.z();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<int> getType(const edm4hep::ClusterCollection &collection) {
  ROOT::VecOps::RVec<int> vec;
  vec.reserve(collection.size());
  for (const edm4hep::Cluster &item : collection) {
    int result;
    result = (item.getType());
    vec.push_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getEnergy(const edm4hep::ClusterCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::Cluster &item : collection) {
    float result;
    result = (item.getEnergy());
    vec.push_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getITheta(const edm4hep::ClusterCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::Cluster &item : collection) {
    float result;
    result = (item.getITheta());
    vec.push_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float> getPhi(const edm4hep::ClusterCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::Cluster &item : collection) {
    float result;
    result = (item.getPhi());
    vec.push_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float> getR(const edm4hep::ClusterCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::Cluster &item : collection) {
    float result;
    ROOT::Math::XYZVector rresult(item.getPosition().x, item.getPosition().y,
                                  item.getPosition().z);
    result = rresult.r();
    vec.push_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float> getX(const edm4hep::ClusterCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::Cluster &item : collection) {
    float result;
    ROOT::Math::XYZVector rresult(item.getPosition().x, item.getPosition().y,
                                  item.getPosition().z);
    result = rresult.x();
    vec.push_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float> getY(const edm4hep::ClusterCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::Cluster &item : collection) {
    float result;
    ROOT::Math::XYZVector rresult(item.getPosition().x, item.getPosition().y,
                                  item.getPosition().z);
    result = rresult.y();
    vec.push_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float> getZ(const edm4hep::ClusterCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::Cluster &item : collection) {
    float result;
    ROOT::Math::XYZVector rresult(item.getPosition().x, item.getPosition().y,
                                  item.getPosition().z);
    result = rresult.z();
    vec.push_back(result);
  }
  return vec;
}
int printType(ROOT::VecOps::RVec<edm4hep::ClusterData> &collection) {
  ROOT::VecOps::RVec<int> vec = getType(collection);
  std::cout << "Type: ";
  for (const int &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printEnergy(ROOT::VecOps::RVec<edm4hep::ClusterData> &collection) {
  ROOT::VecOps::RVec<float> vec = getEnergy(collection);
  std::cout << "Energy: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printITheta(ROOT::VecOps::RVec<edm4hep::ClusterData> &collection) {
  ROOT::VecOps::RVec<float> vec = getITheta(collection);
  std::cout << "Intrinsic theta angle: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printPhi(ROOT::VecOps::RVec<edm4hep::ClusterData> &collection) {
  ROOT::VecOps::RVec<float> vec = getPhi(collection);
  std::cout << "Intrinsic phi angle: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printR(ROOT::VecOps::RVec<edm4hep::ClusterData> &collection) {
  ROOT::VecOps::RVec<float> vec = getR(collection);
  std::cout << "Distance to origin: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printX(ROOT::VecOps::RVec<edm4hep::ClusterData> &collection) {
  ROOT::VecOps::RVec<float> vec = getX(collection);
  std::cout << "X coordinate: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printY(ROOT::VecOps::RVec<edm4hep::ClusterData> &collection) {
  ROOT::VecOps::RVec<float> vec = getY(collection);
  std::cout << "Y coordinate: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printZ(ROOT::VecOps::RVec<edm4hep::ClusterData> &collection) {
  ROOT::VecOps::RVec<float> vec = getZ(collection);
  std::cout << "Z coordinate: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printType(const edm4hep::ClusterCollection &collection) {
  ROOT::VecOps::RVec<int> vec = getType(collection);
  std::cout << "Type: ";
  for (const int &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printEnergy(const edm4hep::ClusterCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getEnergy(collection);
  std::cout << "Energy: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printITheta(const edm4hep::ClusterCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getITheta(collection);
  std::cout << "Intrinsic theta angle: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printPhi(const edm4hep::ClusterCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getPhi(collection);
  std::cout << "Intrinsic phi angle: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printR(const edm4hep::ClusterCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getR(collection);
  std::cout << "Distance to origin: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printX(const edm4hep::ClusterCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getX(collection);
  std::cout << "X coordinate: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printY(const edm4hep::ClusterCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getY(collection);
  std::cout << "Y coordinate: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printZ(const edm4hep::ClusterCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getZ(collection);
  std::cout << "Z coordinate: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
ROOT::VecOps::RVec<bool>
maskType(LogicalOperators::ComparisonOperator op, int val,
         ROOT::VecOps::RVec<edm4hep::ClusterData> &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<int> vals = getType(collection);
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
maskEnergy(LogicalOperators::ComparisonOperator op, float val,
           ROOT::VecOps::RVec<edm4hep::ClusterData> &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getEnergy(collection);
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
maskITheta(LogicalOperators::ComparisonOperator op, float val,
           ROOT::VecOps::RVec<edm4hep::ClusterData> &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getITheta(collection);
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
        ROOT::VecOps::RVec<edm4hep::ClusterData> &collection) {
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
      ROOT::VecOps::RVec<edm4hep::ClusterData> &collection) {
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
      ROOT::VecOps::RVec<edm4hep::ClusterData> &collection) {
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
      ROOT::VecOps::RVec<edm4hep::ClusterData> &collection) {
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
      ROOT::VecOps::RVec<edm4hep::ClusterData> &collection) {
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
maskType(LogicalOperators::ComparisonOperator op, int val,
         const edm4hep::ClusterCollection &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<int> vals = getType(collection);
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
maskEnergy(LogicalOperators::ComparisonOperator op, float val,
           const edm4hep::ClusterCollection &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getEnergy(collection);
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
maskITheta(LogicalOperators::ComparisonOperator op, float val,
           const edm4hep::ClusterCollection &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getITheta(collection);
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
ROOT::VecOps::RVec<bool> maskPhi(LogicalOperators::ComparisonOperator op,
                                 float val,
                                 const edm4hep::ClusterCollection &collection) {
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
ROOT::VecOps::RVec<bool> maskR(LogicalOperators::ComparisonOperator op,
                               float val,
                               const edm4hep::ClusterCollection &collection) {
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
ROOT::VecOps::RVec<bool> maskX(LogicalOperators::ComparisonOperator op,
                               float val,
                               const edm4hep::ClusterCollection &collection) {
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
ROOT::VecOps::RVec<bool> maskY(LogicalOperators::ComparisonOperator op,
                               float val,
                               const edm4hep::ClusterCollection &collection) {
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
ROOT::VecOps::RVec<bool> maskZ(LogicalOperators::ComparisonOperator op,
                               float val,
                               const edm4hep::ClusterCollection &collection) {
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
ROOT::VecOps::RVec<edm4hep::ClusterData>
selType(LogicalOperators::ComparisonOperator op, int val,
        ROOT::VecOps::RVec<edm4hep::ClusterData> &collection) {
  auto mask = maskType(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::ClusterData>
selEnergy(LogicalOperators::ComparisonOperator op, float val,
          ROOT::VecOps::RVec<edm4hep::ClusterData> &collection) {
  auto mask = maskEnergy(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::ClusterData>
selITheta(LogicalOperators::ComparisonOperator op, float val,
          ROOT::VecOps::RVec<edm4hep::ClusterData> &collection) {
  auto mask = maskITheta(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::ClusterData>
selPhi(LogicalOperators::ComparisonOperator op, float val,
       ROOT::VecOps::RVec<edm4hep::ClusterData> &collection) {
  auto mask = maskPhi(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::ClusterData>
selR(LogicalOperators::ComparisonOperator op, float val,
     ROOT::VecOps::RVec<edm4hep::ClusterData> &collection) {
  auto mask = maskR(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::ClusterData>
selX(LogicalOperators::ComparisonOperator op, float val,
     ROOT::VecOps::RVec<edm4hep::ClusterData> &collection) {
  auto mask = maskX(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::ClusterData>
selY(LogicalOperators::ComparisonOperator op, float val,
     ROOT::VecOps::RVec<edm4hep::ClusterData> &collection) {
  auto mask = maskY(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::ClusterData>
selZ(LogicalOperators::ComparisonOperator op, float val,
     ROOT::VecOps::RVec<edm4hep::ClusterData> &collection) {
  auto mask = maskZ(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::ClusterCollection
selType(LogicalOperators::ComparisonOperator op, int val,
        const edm4hep::ClusterCollection &collection) {
  auto mask = maskType(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::ClusterCollection
selEnergy(LogicalOperators::ComparisonOperator op, float val,
          const edm4hep::ClusterCollection &collection) {
  auto mask = maskEnergy(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::ClusterCollection
selITheta(LogicalOperators::ComparisonOperator op, float val,
          const edm4hep::ClusterCollection &collection) {
  auto mask = maskITheta(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::ClusterCollection
selPhi(LogicalOperators::ComparisonOperator op, float val,
       const edm4hep::ClusterCollection &collection) {
  auto mask = maskPhi(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::ClusterCollection selR(LogicalOperators::ComparisonOperator op,
                                float val,
                                const edm4hep::ClusterCollection &collection) {
  auto mask = maskR(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::ClusterCollection selX(LogicalOperators::ComparisonOperator op,
                                float val,
                                const edm4hep::ClusterCollection &collection) {
  auto mask = maskX(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::ClusterCollection selY(LogicalOperators::ComparisonOperator op,
                                float val,
                                const edm4hep::ClusterCollection &collection) {
  auto mask = maskY(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::ClusterCollection selZ(LogicalOperators::ComparisonOperator op,
                                float val,
                                const edm4hep::ClusterCollection &collection) {
  auto mask = maskZ(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::ClusterData>
sortType(ROOT::VecOps::RVec<edm4hep::ClusterData> &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::ClusterData x, edm4hep::ClusterData y) {
    int a, b;
    a = (x.type);
    b = (y.type);
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::ClusterData>
sortEnergy(ROOT::VecOps::RVec<edm4hep::ClusterData> &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::ClusterData x, edm4hep::ClusterData y) {
    float a, b;
    a = (x.energy);
    b = (y.energy);
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::ClusterData>
sortITheta(ROOT::VecOps::RVec<edm4hep::ClusterData> &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::ClusterData x, edm4hep::ClusterData y) {
    float a, b;
    a = (x.iTheta);
    b = (y.iTheta);
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::ClusterData>
sortPhi(ROOT::VecOps::RVec<edm4hep::ClusterData> &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::ClusterData x, edm4hep::ClusterData y) {
    float a, b;
    a = (x.phi);
    b = (y.phi);
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::ClusterData>
sortR(ROOT::VecOps::RVec<edm4hep::ClusterData> &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::ClusterData x, edm4hep::ClusterData y) {
    float a, b;
    ROOT::Math::XYZVector ra(x.position.x, x.position.y, x.position.z);
    a = ra.r();
    ROOT::Math::XYZVector rb(y.position.x, y.position.y, y.position.z);
    b = rb.r();
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::ClusterData>
sortX(ROOT::VecOps::RVec<edm4hep::ClusterData> &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::ClusterData x, edm4hep::ClusterData y) {
    float a, b;
    ROOT::Math::XYZVector ra(x.position.x, x.position.y, x.position.z);
    a = ra.x();
    ROOT::Math::XYZVector rb(y.position.x, y.position.y, y.position.z);
    b = rb.x();
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::ClusterData>
sortY(ROOT::VecOps::RVec<edm4hep::ClusterData> &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::ClusterData x, edm4hep::ClusterData y) {
    float a, b;
    ROOT::Math::XYZVector ra(x.position.x, x.position.y, x.position.z);
    a = ra.y();
    ROOT::Math::XYZVector rb(y.position.x, y.position.y, y.position.z);
    b = rb.y();
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::ClusterData>
sortZ(ROOT::VecOps::RVec<edm4hep::ClusterData> &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::ClusterData x, edm4hep::ClusterData y) {
    float a, b;
    ROOT::Math::XYZVector ra(x.position.x, x.position.y, x.position.z);
    a = ra.z();
    ROOT::Math::XYZVector rb(y.position.x, y.position.y, y.position.z);
    b = rb.z();
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
edm4hep::ClusterCollection sortType(edm4hep::ClusterCollection &collection,
                                    bool reverse) {
  auto lambda = [reverse](edm4hep::Cluster x, edm4hep::Cluster y) {
    int a, b;
    a = (x.getType());
    b = (y.getType());
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::Cluster> vec;
  for (const edm4hep::Cluster &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::ClusterCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::Cluster &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::ClusterCollection sortEnergy(edm4hep::ClusterCollection &collection,
                                      bool reverse) {
  auto lambda = [reverse](edm4hep::Cluster x, edm4hep::Cluster y) {
    float a, b;
    a = (x.getEnergy());
    b = (y.getEnergy());
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::Cluster> vec;
  for (const edm4hep::Cluster &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::ClusterCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::Cluster &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::ClusterCollection sortITheta(edm4hep::ClusterCollection &collection,
                                      bool reverse) {
  auto lambda = [reverse](edm4hep::Cluster x, edm4hep::Cluster y) {
    float a, b;
    a = (x.getITheta());
    b = (y.getITheta());
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::Cluster> vec;
  for (const edm4hep::Cluster &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::ClusterCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::Cluster &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::ClusterCollection sortPhi(edm4hep::ClusterCollection &collection,
                                   bool reverse) {
  auto lambda = [reverse](edm4hep::Cluster x, edm4hep::Cluster y) {
    float a, b;
    a = (x.getPhi());
    b = (y.getPhi());
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::Cluster> vec;
  for (const edm4hep::Cluster &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::ClusterCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::Cluster &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::ClusterCollection sortR(edm4hep::ClusterCollection &collection,
                                 bool reverse) {
  auto lambda = [reverse](edm4hep::Cluster x, edm4hep::Cluster y) {
    float a, b;
    ROOT::Math::XYZVector ra(x.getPosition().x, x.getPosition().y,
                             x.getPosition().z);
    a = ra.r();
    ROOT::Math::XYZVector rb(y.getPosition().x, y.getPosition().y,
                             y.getPosition().z);
    b = rb.r();
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::Cluster> vec;
  for (const edm4hep::Cluster &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::ClusterCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::Cluster &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::ClusterCollection sortX(edm4hep::ClusterCollection &collection,
                                 bool reverse) {
  auto lambda = [reverse](edm4hep::Cluster x, edm4hep::Cluster y) {
    float a, b;
    ROOT::Math::XYZVector ra(x.getPosition().x, x.getPosition().y,
                             x.getPosition().z);
    a = ra.x();
    ROOT::Math::XYZVector rb(y.getPosition().x, y.getPosition().y,
                             y.getPosition().z);
    b = rb.x();
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::Cluster> vec;
  for (const edm4hep::Cluster &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::ClusterCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::Cluster &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::ClusterCollection sortY(edm4hep::ClusterCollection &collection,
                                 bool reverse) {
  auto lambda = [reverse](edm4hep::Cluster x, edm4hep::Cluster y) {
    float a, b;
    ROOT::Math::XYZVector ra(x.getPosition().x, x.getPosition().y,
                             x.getPosition().z);
    a = ra.y();
    ROOT::Math::XYZVector rb(y.getPosition().x, y.getPosition().y,
                             y.getPosition().z);
    b = rb.y();
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::Cluster> vec;
  for (const edm4hep::Cluster &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::ClusterCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::Cluster &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::ClusterCollection sortZ(edm4hep::ClusterCollection &collection,
                                 bool reverse) {
  auto lambda = [reverse](edm4hep::Cluster x, edm4hep::Cluster y) {
    float a, b;
    ROOT::Math::XYZVector ra(x.getPosition().x, x.getPosition().y,
                             x.getPosition().z);
    a = ra.z();
    ROOT::Math::XYZVector rb(y.getPosition().x, y.getPosition().y,
                             y.getPosition().z);
    b = rb.z();
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::Cluster> vec;
  for (const edm4hep::Cluster &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::ClusterCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::Cluster &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
ROOT::VecOps::RVec<edm4hep::ClusterData>
getClusters(edm4hep::ClusterData &item,
            ROOT::VecOps::RVec<edm4hep::ClusterData> &relatedCollection) {
  ROOT::VecOps::RVec<edm4hep::ClusterData> vec;
  size_t len = item.clusters_end - item.clusters_begin;
  vec.reserve(len);
  for (int i = item.clusters_begin; i < item.clusters_end; i++) {
    vec.emplace_back(relatedCollection[i]);
  }
  return vec;
}
ROOT::VecOps::RVec<edm4hep::CalorimeterHitData>
getHits(edm4hep::ClusterData &item,
        ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &relatedCollection) {
  ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> vec;
  size_t len = item.hits_end - item.hits_begin;
  vec.reserve(len);
  for (int i = item.hits_begin; i < item.hits_end; i++) {
    vec.emplace_back(relatedCollection[i]);
  }
  return vec;
}
edm4hep::ClusterCollection getClusters(const edm4hep::Cluster &item) {
  edm4hep::ClusterCollection vec;
  vec.setSubsetCollection();
  for (auto it = item.clusters_begin(); it != item.clusters_end(); it++) {
    vec.push_back(*it);
  }
  return vec;
}
edm4hep::CalorimeterHitCollection getHits(const edm4hep::Cluster &item) {
  edm4hep::CalorimeterHitCollection vec;
  vec.setSubsetCollection();
  for (auto it = item.hits_begin(); it != item.hits_end(); it++) {
    vec.push_back(*it);
  }
  return vec;
}
} // namespace Cluster
} // namespace k4::ral
