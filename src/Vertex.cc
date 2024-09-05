#include <ral/Vertex.h>
namespace k4::ral {
namespace Vertex {
ROOT::VecOps::RVec<int>
getType(ROOT::VecOps::RVec<edm4hep::VertexData> collection) {
  ROOT::VecOps::RVec<int> vec;
  vec.reserve(collection.size());
  for (const edm4hep::VertexData &item : collection) {
    int result;
    result = (item.type);
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getChi2(ROOT::VecOps::RVec<edm4hep::VertexData> collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::VertexData &item : collection) {
    float result;
    result = (item.chi2);
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<int>
getNdf(ROOT::VecOps::RVec<edm4hep::VertexData> collection) {
  ROOT::VecOps::RVec<int> vec;
  vec.reserve(collection.size());
  for (const edm4hep::VertexData &item : collection) {
    int result;
    result = (item.ndf);
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<int>
getAlgorithmType(ROOT::VecOps::RVec<edm4hep::VertexData> collection) {
  ROOT::VecOps::RVec<int> vec;
  vec.reserve(collection.size());
  for (const edm4hep::VertexData &item : collection) {
    int result;
    result = (item.algorithmType);
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getR(ROOT::VecOps::RVec<edm4hep::VertexData> collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::VertexData &item : collection) {
    float result;
    ROOT::Math::XYZVector rresult(item.position.x, item.position.y,
                                  item.position.z);
    result = rresult.r();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getX(ROOT::VecOps::RVec<edm4hep::VertexData> collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::VertexData &item : collection) {
    float result;
    ROOT::Math::XYZVector rresult(item.position.x, item.position.y,
                                  item.position.z);
    result = rresult.x();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getY(ROOT::VecOps::RVec<edm4hep::VertexData> collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::VertexData &item : collection) {
    float result;
    ROOT::Math::XYZVector rresult(item.position.x, item.position.y,
                                  item.position.z);
    result = rresult.y();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getZ(ROOT::VecOps::RVec<edm4hep::VertexData> collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::VertexData &item : collection) {
    float result;
    ROOT::Math::XYZVector rresult(item.position.x, item.position.y,
                                  item.position.z);
    result = rresult.z();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<int> getType(const edm4hep::VertexCollection &collection) {
  ROOT::VecOps::RVec<int> vec;
  vec.reserve(collection.size());
  for (const edm4hep::Vertex &item : collection) {
    int result;
    result = (item.getType());
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float> getChi2(const edm4hep::VertexCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::Vertex &item : collection) {
    float result;
    result = (item.getChi2());
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<int> getNdf(const edm4hep::VertexCollection &collection) {
  ROOT::VecOps::RVec<int> vec;
  vec.reserve(collection.size());
  for (const edm4hep::Vertex &item : collection) {
    int result;
    result = (item.getNdf());
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<int>
getAlgorithmType(const edm4hep::VertexCollection &collection) {
  ROOT::VecOps::RVec<int> vec;
  vec.reserve(collection.size());
  for (const edm4hep::Vertex &item : collection) {
    int result;
    result = (item.getAlgorithmType());
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float> getR(const edm4hep::VertexCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::Vertex &item : collection) {
    float result;
    ROOT::Math::XYZVector rresult(item.position().x, item.position().y,
                                  item.position().z);
    result = rresult.r();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float> getX(const edm4hep::VertexCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::Vertex &item : collection) {
    float result;
    ROOT::Math::XYZVector rresult(item.position().x, item.position().y,
                                  item.position().z);
    result = rresult.x();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float> getY(const edm4hep::VertexCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::Vertex &item : collection) {
    float result;
    ROOT::Math::XYZVector rresult(item.position().x, item.position().y,
                                  item.position().z);
    result = rresult.y();
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float> getZ(const edm4hep::VertexCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::Vertex &item : collection) {
    float result;
    ROOT::Math::XYZVector rresult(item.position().x, item.position().y,
                                  item.position().z);
    result = rresult.z();
    vec.emplace_back(result);
  }
  return vec;
}
int printType(ROOT::VecOps::RVec<edm4hep::VertexData> collection) {
  ROOT::VecOps::RVec<int> vec = getType(collection);
  std::cout << "Type: ";
  for (const int &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printChi2(ROOT::VecOps::RVec<edm4hep::VertexData> collection) {
  ROOT::VecOps::RVec<float> vec = getChi2(collection);
  std::cout << "Chi^2: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printNdf(ROOT::VecOps::RVec<edm4hep::VertexData> collection) {
  ROOT::VecOps::RVec<int> vec = getNdf(collection);
  std::cout << "Degrees of freedom: ";
  for (const int &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printAlgorithmType(ROOT::VecOps::RVec<edm4hep::VertexData> collection) {
  ROOT::VecOps::RVec<int> vec = getAlgorithmType(collection);
  std::cout << "Algorithm type: ";
  for (const int &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printR(ROOT::VecOps::RVec<edm4hep::VertexData> collection) {
  ROOT::VecOps::RVec<float> vec = getR(collection);
  std::cout << "Distance to origin: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printX(ROOT::VecOps::RVec<edm4hep::VertexData> collection) {
  ROOT::VecOps::RVec<float> vec = getX(collection);
  std::cout << "X coordinate: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printY(ROOT::VecOps::RVec<edm4hep::VertexData> collection) {
  ROOT::VecOps::RVec<float> vec = getY(collection);
  std::cout << "Y coordinate: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printZ(ROOT::VecOps::RVec<edm4hep::VertexData> collection) {
  ROOT::VecOps::RVec<float> vec = getZ(collection);
  std::cout << "Z coordinate: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printType(const edm4hep::VertexCollection &collection) {
  ROOT::VecOps::RVec<int> vec = getType(collection);
  std::cout << "Type: ";
  for (const int &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printChi2(const edm4hep::VertexCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getChi2(collection);
  std::cout << "Chi^2: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printNdf(const edm4hep::VertexCollection &collection) {
  ROOT::VecOps::RVec<int> vec = getNdf(collection);
  std::cout << "Degrees of freedom: ";
  for (const int &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printAlgorithmType(const edm4hep::VertexCollection &collection) {
  ROOT::VecOps::RVec<int> vec = getAlgorithmType(collection);
  std::cout << "Algorithm type: ";
  for (const int &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printR(const edm4hep::VertexCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getR(collection);
  std::cout << "Distance to origin: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printX(const edm4hep::VertexCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getX(collection);
  std::cout << "X coordinate: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printY(const edm4hep::VertexCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getY(collection);
  std::cout << "Y coordinate: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printZ(const edm4hep::VertexCollection &collection) {
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
         ROOT::VecOps::RVec<edm4hep::VertexData> collection) {
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
maskChi2(LogicalOperators::ComparisonOperator op, float val,
         ROOT::VecOps::RVec<edm4hep::VertexData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getChi2(collection);
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
maskNdf(LogicalOperators::ComparisonOperator op, int val,
        ROOT::VecOps::RVec<edm4hep::VertexData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<int> vals = getNdf(collection);
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
maskAlgorithmType(LogicalOperators::ComparisonOperator op, int val,
                  ROOT::VecOps::RVec<edm4hep::VertexData> collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<int> vals = getAlgorithmType(collection);
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
maskR(LogicalOperators::ComparisonOperator op, float val,
      ROOT::VecOps::RVec<edm4hep::VertexData> collection) {
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
      ROOT::VecOps::RVec<edm4hep::VertexData> collection) {
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
      ROOT::VecOps::RVec<edm4hep::VertexData> collection) {
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
      ROOT::VecOps::RVec<edm4hep::VertexData> collection) {
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
ROOT::VecOps::RVec<bool> maskType(LogicalOperators::ComparisonOperator op,
                                  int val,
                                  const edm4hep::VertexCollection &collection) {
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
ROOT::VecOps::RVec<bool> maskChi2(LogicalOperators::ComparisonOperator op,
                                  float val,
                                  const edm4hep::VertexCollection &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getChi2(collection);
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
ROOT::VecOps::RVec<bool> maskNdf(LogicalOperators::ComparisonOperator op,
                                 int val,
                                 const edm4hep::VertexCollection &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<int> vals = getNdf(collection);
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
maskAlgorithmType(LogicalOperators::ComparisonOperator op, int val,
                  const edm4hep::VertexCollection &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<int> vals = getAlgorithmType(collection);
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
ROOT::VecOps::RVec<bool> maskR(LogicalOperators::ComparisonOperator op,
                               float val,
                               const edm4hep::VertexCollection &collection) {
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
                               const edm4hep::VertexCollection &collection) {
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
                               const edm4hep::VertexCollection &collection) {
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
                               const edm4hep::VertexCollection &collection) {
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
ROOT::VecOps::RVec<edm4hep::VertexData>
selType(LogicalOperators::ComparisonOperator op, int val,
        ROOT::VecOps::RVec<edm4hep::VertexData> collection) {
  auto mask = maskType(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::VertexData>
selChi2(LogicalOperators::ComparisonOperator op, float val,
        ROOT::VecOps::RVec<edm4hep::VertexData> collection) {
  auto mask = maskChi2(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::VertexData>
selNdf(LogicalOperators::ComparisonOperator op, int val,
       ROOT::VecOps::RVec<edm4hep::VertexData> collection) {
  auto mask = maskNdf(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::VertexData>
selAlgorithmType(LogicalOperators::ComparisonOperator op, int val,
                 ROOT::VecOps::RVec<edm4hep::VertexData> collection) {
  auto mask = maskAlgorithmType(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::VertexData>
selR(LogicalOperators::ComparisonOperator op, float val,
     ROOT::VecOps::RVec<edm4hep::VertexData> collection) {
  auto mask = maskR(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::VertexData>
selX(LogicalOperators::ComparisonOperator op, float val,
     ROOT::VecOps::RVec<edm4hep::VertexData> collection) {
  auto mask = maskX(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::VertexData>
selY(LogicalOperators::ComparisonOperator op, float val,
     ROOT::VecOps::RVec<edm4hep::VertexData> collection) {
  auto mask = maskY(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::VertexData>
selZ(LogicalOperators::ComparisonOperator op, float val,
     ROOT::VecOps::RVec<edm4hep::VertexData> collection) {
  auto mask = maskZ(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::VertexCollection selType(LogicalOperators::ComparisonOperator op,
                                  int val,
                                  const edm4hep::VertexCollection &collection) {
  auto mask = maskType(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::VertexCollection selChi2(LogicalOperators::ComparisonOperator op,
                                  float val,
                                  const edm4hep::VertexCollection &collection) {
  auto mask = maskChi2(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::VertexCollection selNdf(LogicalOperators::ComparisonOperator op,
                                 int val,
                                 const edm4hep::VertexCollection &collection) {
  auto mask = maskNdf(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::VertexCollection
selAlgorithmType(LogicalOperators::ComparisonOperator op, int val,
                 const edm4hep::VertexCollection &collection) {
  auto mask = maskAlgorithmType(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::VertexCollection selR(LogicalOperators::ComparisonOperator op,
                               float val,
                               const edm4hep::VertexCollection &collection) {
  auto mask = maskR(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::VertexCollection selX(LogicalOperators::ComparisonOperator op,
                               float val,
                               const edm4hep::VertexCollection &collection) {
  auto mask = maskX(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::VertexCollection selY(LogicalOperators::ComparisonOperator op,
                               float val,
                               const edm4hep::VertexCollection &collection) {
  auto mask = maskY(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::VertexCollection selZ(LogicalOperators::ComparisonOperator op,
                               float val,
                               const edm4hep::VertexCollection &collection) {
  auto mask = maskZ(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::VertexData>
sortType(ROOT::VecOps::RVec<edm4hep::VertexData> collection, bool reverse) {
  auto lambda = [reverse](edm4hep::VertexData x, edm4hep::VertexData y) {
    int a, b;
    a = (x.type);
    b = (y.type);
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::VertexData>
sortChi2(ROOT::VecOps::RVec<edm4hep::VertexData> collection, bool reverse) {
  auto lambda = [reverse](edm4hep::VertexData x, edm4hep::VertexData y) {
    float a, b;
    a = (x.chi2);
    b = (y.chi2);
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::VertexData>
sortNdf(ROOT::VecOps::RVec<edm4hep::VertexData> collection, bool reverse) {
  auto lambda = [reverse](edm4hep::VertexData x, edm4hep::VertexData y) {
    int a, b;
    a = (x.ndf);
    b = (y.ndf);
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::VertexData>
sortAlgorithmType(ROOT::VecOps::RVec<edm4hep::VertexData> collection,
                  bool reverse) {
  auto lambda = [reverse](edm4hep::VertexData x, edm4hep::VertexData y) {
    int a, b;
    a = (x.algorithmType);
    b = (y.algorithmType);
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::VertexData>
sortR(ROOT::VecOps::RVec<edm4hep::VertexData> collection, bool reverse) {
  auto lambda = [reverse](edm4hep::VertexData x, edm4hep::VertexData y) {
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
ROOT::VecOps::RVec<edm4hep::VertexData>
sortX(ROOT::VecOps::RVec<edm4hep::VertexData> collection, bool reverse) {
  auto lambda = [reverse](edm4hep::VertexData x, edm4hep::VertexData y) {
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
ROOT::VecOps::RVec<edm4hep::VertexData>
sortY(ROOT::VecOps::RVec<edm4hep::VertexData> collection, bool reverse) {
  auto lambda = [reverse](edm4hep::VertexData x, edm4hep::VertexData y) {
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
ROOT::VecOps::RVec<edm4hep::VertexData>
sortZ(ROOT::VecOps::RVec<edm4hep::VertexData> collection, bool reverse) {
  auto lambda = [reverse](edm4hep::VertexData x, edm4hep::VertexData y) {
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
edm4hep::VertexCollection sortType(edm4hep::VertexCollection &collection,
                                   bool reverse) {
  auto lambda = [reverse](edm4hep::Vertex x, edm4hep::Vertex y) {
    int a, b;
    a = (x.getType());
    b = (y.getType());
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::Vertex> vec;
  for (const edm4hep::Vertex &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::VertexCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::Vertex &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::VertexCollection sortChi2(edm4hep::VertexCollection &collection,
                                   bool reverse) {
  auto lambda = [reverse](edm4hep::Vertex x, edm4hep::Vertex y) {
    float a, b;
    a = (x.getChi2());
    b = (y.getChi2());
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::Vertex> vec;
  for (const edm4hep::Vertex &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::VertexCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::Vertex &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::VertexCollection sortNdf(edm4hep::VertexCollection &collection,
                                  bool reverse) {
  auto lambda = [reverse](edm4hep::Vertex x, edm4hep::Vertex y) {
    int a, b;
    a = (x.getNdf());
    b = (y.getNdf());
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::Vertex> vec;
  for (const edm4hep::Vertex &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::VertexCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::Vertex &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::VertexCollection
sortAlgorithmType(edm4hep::VertexCollection &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::Vertex x, edm4hep::Vertex y) {
    int a, b;
    a = (x.getAlgorithmType());
    b = (y.getAlgorithmType());
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::Vertex> vec;
  for (const edm4hep::Vertex &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::VertexCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::Vertex &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::VertexCollection sortR(edm4hep::VertexCollection &collection,
                                bool reverse) {
  auto lambda = [reverse](edm4hep::Vertex x, edm4hep::Vertex y) {
    float a, b;
    ROOT::Math::XYZVector ra(x.position().x, x.position().y, x.position().z);
    a = ra.r();
    ROOT::Math::XYZVector rb(y.position().x, y.position().y, y.position().z);
    b = rb.r();
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::Vertex> vec;
  for (const edm4hep::Vertex &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::VertexCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::Vertex &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::VertexCollection sortX(edm4hep::VertexCollection &collection,
                                bool reverse) {
  auto lambda = [reverse](edm4hep::Vertex x, edm4hep::Vertex y) {
    float a, b;
    ROOT::Math::XYZVector ra(x.position().x, x.position().y, x.position().z);
    a = ra.x();
    ROOT::Math::XYZVector rb(y.position().x, y.position().y, y.position().z);
    b = rb.x();
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::Vertex> vec;
  for (const edm4hep::Vertex &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::VertexCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::Vertex &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::VertexCollection sortY(edm4hep::VertexCollection &collection,
                                bool reverse) {
  auto lambda = [reverse](edm4hep::Vertex x, edm4hep::Vertex y) {
    float a, b;
    ROOT::Math::XYZVector ra(x.position().x, x.position().y, x.position().z);
    a = ra.y();
    ROOT::Math::XYZVector rb(y.position().x, y.position().y, y.position().z);
    b = rb.y();
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::Vertex> vec;
  for (const edm4hep::Vertex &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::VertexCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::Vertex &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::VertexCollection sortZ(edm4hep::VertexCollection &collection,
                                bool reverse) {
  auto lambda = [reverse](edm4hep::Vertex x, edm4hep::Vertex y) {
    float a, b;
    ROOT::Math::XYZVector ra(x.position().x, x.position().y, x.position().z);
    a = ra.z();
    ROOT::Math::XYZVector rb(y.position().x, y.position().y, y.position().z);
    b = rb.z();
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::Vertex> vec;
  for (const edm4hep::Vertex &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::VertexCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::Vertex &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
} // namespace Vertex
} // namespace k4::ral
