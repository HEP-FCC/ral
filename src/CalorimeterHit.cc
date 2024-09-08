#include <ral/CalorimeterHit.h>
namespace k4::ral {
namespace CalorimeterHit {
ROOT::VecOps::RVec<int>
getType(ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection) {
  ROOT::VecOps::RVec<int> vec;
  vec.reserve(collection.size());
  for (const edm4hep::CalorimeterHitData &item : collection) {
    int result;
    result = (item.type);
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<unsigned long long>
getCellID(ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection) {
  ROOT::VecOps::RVec<unsigned long long> vec;
  vec.reserve(collection.size());
  for (const edm4hep::CalorimeterHitData &item : collection) {
    unsigned long long result;
    result = (item.cellID);
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getEnergy(ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::CalorimeterHitData &item : collection) {
    float result;
    result = (item.energy);
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getTime(ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::CalorimeterHitData &item : collection) {
    float result;
    result = (item.time);
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getR(ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::CalorimeterHitData &item : collection) {
    float result;
    ROOT::Math::XYZVector rresult(item.position.x, item.position.y,
                                  item.position.z);
    result = rresult.r();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getX(ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::CalorimeterHitData &item : collection) {
    float result;
    ROOT::Math::XYZVector rresult(item.position.x, item.position.y,
                                  item.position.z);
    result = rresult.x();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getY(ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::CalorimeterHitData &item : collection) {
    float result;
    ROOT::Math::XYZVector rresult(item.position.x, item.position.y,
                                  item.position.z);
    result = rresult.y();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getZ(ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::CalorimeterHitData &item : collection) {
    float result;
    ROOT::Math::XYZVector rresult(item.position.x, item.position.y,
                                  item.position.z);
    result = rresult.z();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<int>
getType(const edm4hep::CalorimeterHitCollection &collection) {
  ROOT::VecOps::RVec<int> vec;
  vec.reserve(collection.size());
  for (const edm4hep::CalorimeterHit &item : collection) {
    int result;
    result = (item.getType());
    vec.push_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<unsigned long long>
getCellID(const edm4hep::CalorimeterHitCollection &collection) {
  ROOT::VecOps::RVec<unsigned long long> vec;
  vec.reserve(collection.size());
  for (const edm4hep::CalorimeterHit &item : collection) {
    unsigned long long result;
    result = (item.getCellID());
    vec.push_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getEnergy(const edm4hep::CalorimeterHitCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::CalorimeterHit &item : collection) {
    float result;
    result = (item.getEnergy());
    vec.push_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getTime(const edm4hep::CalorimeterHitCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::CalorimeterHit &item : collection) {
    float result;
    result = (item.getTime());
    vec.push_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getR(const edm4hep::CalorimeterHitCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::CalorimeterHit &item : collection) {
    float result;
    ROOT::Math::XYZVector rresult(item.getPosition().x, item.getPosition().y,
                                  item.getPosition().z);
    result = rresult.r();
    vec.push_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getX(const edm4hep::CalorimeterHitCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::CalorimeterHit &item : collection) {
    float result;
    ROOT::Math::XYZVector rresult(item.getPosition().x, item.getPosition().y,
                                  item.getPosition().z);
    result = rresult.x();
    vec.push_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getY(const edm4hep::CalorimeterHitCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::CalorimeterHit &item : collection) {
    float result;
    ROOT::Math::XYZVector rresult(item.getPosition().x, item.getPosition().y,
                                  item.getPosition().z);
    result = rresult.y();
    vec.push_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getZ(const edm4hep::CalorimeterHitCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::CalorimeterHit &item : collection) {
    float result;
    ROOT::Math::XYZVector rresult(item.getPosition().x, item.getPosition().y,
                                  item.getPosition().z);
    result = rresult.z();
    vec.push_back(result);
  }
  return vec;
}
int printType(ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection) {
  ROOT::VecOps::RVec<int> vec = getType(collection);
  std::cout << "Type: ";
  for (const int &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printCellID(ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection) {
  ROOT::VecOps::RVec<unsigned long long> vec = getCellID(collection);
  std::cout << "Detector cell id: ";
  for (const unsigned long long &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printEnergy(ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection) {
  ROOT::VecOps::RVec<float> vec = getEnergy(collection);
  std::cout << "Energy: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printTime(ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection) {
  ROOT::VecOps::RVec<float> vec = getTime(collection);
  std::cout << "Time of the hit: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printR(ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection) {
  ROOT::VecOps::RVec<float> vec = getR(collection);
  std::cout << "Distance to origin: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printX(ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection) {
  ROOT::VecOps::RVec<float> vec = getX(collection);
  std::cout << "X coordinate: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printY(ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection) {
  ROOT::VecOps::RVec<float> vec = getY(collection);
  std::cout << "Y coordinate: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printZ(ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection) {
  ROOT::VecOps::RVec<float> vec = getZ(collection);
  std::cout << "Z coordinate: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printType(const edm4hep::CalorimeterHitCollection &collection) {
  ROOT::VecOps::RVec<int> vec = getType(collection);
  std::cout << "Type: ";
  for (const int &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printCellID(const edm4hep::CalorimeterHitCollection &collection) {
  ROOT::VecOps::RVec<unsigned long long> vec = getCellID(collection);
  std::cout << "Detector cell id: ";
  for (const unsigned long long &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printEnergy(const edm4hep::CalorimeterHitCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getEnergy(collection);
  std::cout << "Energy: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printTime(const edm4hep::CalorimeterHitCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getTime(collection);
  std::cout << "Time of the hit: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printR(const edm4hep::CalorimeterHitCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getR(collection);
  std::cout << "Distance to origin: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printX(const edm4hep::CalorimeterHitCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getX(collection);
  std::cout << "X coordinate: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printY(const edm4hep::CalorimeterHitCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getY(collection);
  std::cout << "Y coordinate: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printZ(const edm4hep::CalorimeterHitCollection &collection) {
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
         ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection) {
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
maskCellID(LogicalOperators::ComparisonOperator op, unsigned long long val,
           ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<unsigned long long> vals = getCellID(collection);
  for (const unsigned long long &item : vals) {
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
           ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection) {
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
maskTime(LogicalOperators::ComparisonOperator op, float val,
         ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getTime(collection);
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
      ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection) {
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
      ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection) {
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
      ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection) {
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
      ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection) {
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
         const edm4hep::CalorimeterHitCollection &collection) {
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
maskCellID(LogicalOperators::ComparisonOperator op, unsigned long long val,
           const edm4hep::CalorimeterHitCollection &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<unsigned long long> vals = getCellID(collection);
  for (const unsigned long long &item : vals) {
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
           const edm4hep::CalorimeterHitCollection &collection) {
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
maskTime(LogicalOperators::ComparisonOperator op, float val,
         const edm4hep::CalorimeterHitCollection &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getTime(collection);
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
      const edm4hep::CalorimeterHitCollection &collection) {
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
      const edm4hep::CalorimeterHitCollection &collection) {
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
      const edm4hep::CalorimeterHitCollection &collection) {
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
      const edm4hep::CalorimeterHitCollection &collection) {
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
ROOT::VecOps::RVec<edm4hep::CalorimeterHitData>
selType(LogicalOperators::ComparisonOperator op, int val,
        ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection) {
  auto mask = maskType(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::CalorimeterHitData>
selCellID(LogicalOperators::ComparisonOperator op, unsigned long long val,
          ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection) {
  auto mask = maskCellID(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::CalorimeterHitData>
selEnergy(LogicalOperators::ComparisonOperator op, float val,
          ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection) {
  auto mask = maskEnergy(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::CalorimeterHitData>
selTime(LogicalOperators::ComparisonOperator op, float val,
        ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection) {
  auto mask = maskTime(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::CalorimeterHitData>
selR(LogicalOperators::ComparisonOperator op, float val,
     ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection) {
  auto mask = maskR(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::CalorimeterHitData>
selX(LogicalOperators::ComparisonOperator op, float val,
     ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection) {
  auto mask = maskX(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::CalorimeterHitData>
selY(LogicalOperators::ComparisonOperator op, float val,
     ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection) {
  auto mask = maskY(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::CalorimeterHitData>
selZ(LogicalOperators::ComparisonOperator op, float val,
     ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection) {
  auto mask = maskZ(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::CalorimeterHitCollection
selType(LogicalOperators::ComparisonOperator op, int val,
        const edm4hep::CalorimeterHitCollection &collection) {
  auto mask = maskType(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::CalorimeterHitCollection
selCellID(LogicalOperators::ComparisonOperator op, unsigned long long val,
          const edm4hep::CalorimeterHitCollection &collection) {
  auto mask = maskCellID(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::CalorimeterHitCollection
selEnergy(LogicalOperators::ComparisonOperator op, float val,
          const edm4hep::CalorimeterHitCollection &collection) {
  auto mask = maskEnergy(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::CalorimeterHitCollection
selTime(LogicalOperators::ComparisonOperator op, float val,
        const edm4hep::CalorimeterHitCollection &collection) {
  auto mask = maskTime(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::CalorimeterHitCollection
selR(LogicalOperators::ComparisonOperator op, float val,
     const edm4hep::CalorimeterHitCollection &collection) {
  auto mask = maskR(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::CalorimeterHitCollection
selX(LogicalOperators::ComparisonOperator op, float val,
     const edm4hep::CalorimeterHitCollection &collection) {
  auto mask = maskX(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::CalorimeterHitCollection
selY(LogicalOperators::ComparisonOperator op, float val,
     const edm4hep::CalorimeterHitCollection &collection) {
  auto mask = maskY(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::CalorimeterHitCollection
selZ(LogicalOperators::ComparisonOperator op, float val,
     const edm4hep::CalorimeterHitCollection &collection) {
  auto mask = maskZ(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::CalorimeterHitData>
sortType(ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection,
         bool reverse) {
  auto lambda = [reverse](edm4hep::CalorimeterHitData x,
                          edm4hep::CalorimeterHitData y) {
    int a, b;
    a = (x.type);
    b = (y.type);
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::CalorimeterHitData>
sortCellID(ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection,
           bool reverse) {
  auto lambda = [reverse](edm4hep::CalorimeterHitData x,
                          edm4hep::CalorimeterHitData y) {
    unsigned long long a, b;
    a = (x.cellID);
    b = (y.cellID);
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::CalorimeterHitData>
sortEnergy(ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection,
           bool reverse) {
  auto lambda = [reverse](edm4hep::CalorimeterHitData x,
                          edm4hep::CalorimeterHitData y) {
    float a, b;
    a = (x.energy);
    b = (y.energy);
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::CalorimeterHitData>
sortTime(ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection,
         bool reverse) {
  auto lambda = [reverse](edm4hep::CalorimeterHitData x,
                          edm4hep::CalorimeterHitData y) {
    float a, b;
    a = (x.time);
    b = (y.time);
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::CalorimeterHitData>
sortR(ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection,
      bool reverse) {
  auto lambda = [reverse](edm4hep::CalorimeterHitData x,
                          edm4hep::CalorimeterHitData y) {
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
ROOT::VecOps::RVec<edm4hep::CalorimeterHitData>
sortX(ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection,
      bool reverse) {
  auto lambda = [reverse](edm4hep::CalorimeterHitData x,
                          edm4hep::CalorimeterHitData y) {
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
ROOT::VecOps::RVec<edm4hep::CalorimeterHitData>
sortY(ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection,
      bool reverse) {
  auto lambda = [reverse](edm4hep::CalorimeterHitData x,
                          edm4hep::CalorimeterHitData y) {
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
ROOT::VecOps::RVec<edm4hep::CalorimeterHitData>
sortZ(ROOT::VecOps::RVec<edm4hep::CalorimeterHitData> &collection,
      bool reverse) {
  auto lambda = [reverse](edm4hep::CalorimeterHitData x,
                          edm4hep::CalorimeterHitData y) {
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
edm4hep::CalorimeterHitCollection
sortType(edm4hep::CalorimeterHitCollection &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::CalorimeterHit x,
                          edm4hep::CalorimeterHit y) {
    int a, b;
    a = (x.getType());
    b = (y.getType());
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::CalorimeterHit> vec;
  for (const edm4hep::CalorimeterHit &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::CalorimeterHitCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::CalorimeterHit &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::CalorimeterHitCollection
sortCellID(edm4hep::CalorimeterHitCollection &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::CalorimeterHit x,
                          edm4hep::CalorimeterHit y) {
    unsigned long long a, b;
    a = (x.getCellID());
    b = (y.getCellID());
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::CalorimeterHit> vec;
  for (const edm4hep::CalorimeterHit &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::CalorimeterHitCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::CalorimeterHit &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::CalorimeterHitCollection
sortEnergy(edm4hep::CalorimeterHitCollection &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::CalorimeterHit x,
                          edm4hep::CalorimeterHit y) {
    float a, b;
    a = (x.getEnergy());
    b = (y.getEnergy());
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::CalorimeterHit> vec;
  for (const edm4hep::CalorimeterHit &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::CalorimeterHitCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::CalorimeterHit &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::CalorimeterHitCollection
sortTime(edm4hep::CalorimeterHitCollection &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::CalorimeterHit x,
                          edm4hep::CalorimeterHit y) {
    float a, b;
    a = (x.getTime());
    b = (y.getTime());
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::CalorimeterHit> vec;
  for (const edm4hep::CalorimeterHit &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::CalorimeterHitCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::CalorimeterHit &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::CalorimeterHitCollection
sortR(edm4hep::CalorimeterHitCollection &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::CalorimeterHit x,
                          edm4hep::CalorimeterHit y) {
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
  std::vector<edm4hep::CalorimeterHit> vec;
  for (const edm4hep::CalorimeterHit &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::CalorimeterHitCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::CalorimeterHit &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::CalorimeterHitCollection
sortX(edm4hep::CalorimeterHitCollection &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::CalorimeterHit x,
                          edm4hep::CalorimeterHit y) {
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
  std::vector<edm4hep::CalorimeterHit> vec;
  for (const edm4hep::CalorimeterHit &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::CalorimeterHitCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::CalorimeterHit &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::CalorimeterHitCollection
sortY(edm4hep::CalorimeterHitCollection &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::CalorimeterHit x,
                          edm4hep::CalorimeterHit y) {
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
  std::vector<edm4hep::CalorimeterHit> vec;
  for (const edm4hep::CalorimeterHit &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::CalorimeterHitCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::CalorimeterHit &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::CalorimeterHitCollection
sortZ(edm4hep::CalorimeterHitCollection &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::CalorimeterHit x,
                          edm4hep::CalorimeterHit y) {
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
  std::vector<edm4hep::CalorimeterHit> vec;
  for (const edm4hep::CalorimeterHit &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::CalorimeterHitCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::CalorimeterHit &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
} // namespace CalorimeterHit
} // namespace k4::ral
