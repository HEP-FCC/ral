#include <ral/TrackerHit3D.h>
namespace k4::ral {
namespace TrackerHit3D {
ROOT::VecOps::RVec<int>
getType(ROOT::VecOps::RVec<edm4hep::TrackerHit3DData> &collection) {
  ROOT::VecOps::RVec<int> vec;
  vec.reserve(collection.size());
  for (const edm4hep::TrackerHit3DData &item : collection) {
    int result;
    result = (item.type);
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<int>
getQuality(ROOT::VecOps::RVec<edm4hep::TrackerHit3DData> &collection) {
  ROOT::VecOps::RVec<int> vec;
  vec.reserve(collection.size());
  for (const edm4hep::TrackerHit3DData &item : collection) {
    int result;
    result = (item.quality);
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<unsigned long long>
getCellID(ROOT::VecOps::RVec<edm4hep::TrackerHit3DData> &collection) {
  ROOT::VecOps::RVec<unsigned long long> vec;
  vec.reserve(collection.size());
  for (const edm4hep::TrackerHit3DData &item : collection) {
    unsigned long long result;
    result = (item.cellID);
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getEDep(ROOT::VecOps::RVec<edm4hep::TrackerHit3DData> &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::TrackerHit3DData &item : collection) {
    float result;
    result = (item.eDep);
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getTime(ROOT::VecOps::RVec<edm4hep::TrackerHit3DData> &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::TrackerHit3DData &item : collection) {
    float result;
    result = (item.time);
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<int>
getType(const edm4hep::TrackerHit3DCollection &collection) {
  ROOT::VecOps::RVec<int> vec;
  vec.reserve(collection.size());
  for (const edm4hep::TrackerHit3D &item : collection) {
    int result;
    result = (item.getType());
    vec.push_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<int>
getQuality(const edm4hep::TrackerHit3DCollection &collection) {
  ROOT::VecOps::RVec<int> vec;
  vec.reserve(collection.size());
  for (const edm4hep::TrackerHit3D &item : collection) {
    int result;
    result = (item.getQuality());
    vec.push_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<unsigned long long>
getCellID(const edm4hep::TrackerHit3DCollection &collection) {
  ROOT::VecOps::RVec<unsigned long long> vec;
  vec.reserve(collection.size());
  for (const edm4hep::TrackerHit3D &item : collection) {
    unsigned long long result;
    result = (item.getCellID());
    vec.push_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getEDep(const edm4hep::TrackerHit3DCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::TrackerHit3D &item : collection) {
    float result;
    result = (item.getEDep());
    vec.push_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getTime(const edm4hep::TrackerHit3DCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::TrackerHit3D &item : collection) {
    float result;
    result = (item.getTime());
    vec.push_back(result);
  }
  return vec;
}
int printType(ROOT::VecOps::RVec<edm4hep::TrackerHit3DData> &collection) {
  ROOT::VecOps::RVec<int> vec = getType(collection);
  std::cout << "Type: ";
  for (const int &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printQuality(ROOT::VecOps::RVec<edm4hep::TrackerHit3DData> &collection) {
  ROOT::VecOps::RVec<int> vec = getQuality(collection);
  std::cout << "Type: ";
  for (const int &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printCellID(ROOT::VecOps::RVec<edm4hep::TrackerHit3DData> &collection) {
  ROOT::VecOps::RVec<unsigned long long> vec = getCellID(collection);
  std::cout << "Detector cell id: ";
  for (const unsigned long long &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printEDep(ROOT::VecOps::RVec<edm4hep::TrackerHit3DData> &collection) {
  ROOT::VecOps::RVec<float> vec = getEDep(collection);
  std::cout << "Edep: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printTime(ROOT::VecOps::RVec<edm4hep::TrackerHit3DData> &collection) {
  ROOT::VecOps::RVec<float> vec = getTime(collection);
  std::cout << "Time of the hit: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printType(const edm4hep::TrackerHit3DCollection &collection) {
  ROOT::VecOps::RVec<int> vec = getType(collection);
  std::cout << "Type: ";
  for (const int &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printQuality(const edm4hep::TrackerHit3DCollection &collection) {
  ROOT::VecOps::RVec<int> vec = getQuality(collection);
  std::cout << "Type: ";
  for (const int &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printCellID(const edm4hep::TrackerHit3DCollection &collection) {
  ROOT::VecOps::RVec<unsigned long long> vec = getCellID(collection);
  std::cout << "Detector cell id: ";
  for (const unsigned long long &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printEDep(const edm4hep::TrackerHit3DCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getEDep(collection);
  std::cout << "Edep: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printTime(const edm4hep::TrackerHit3DCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getTime(collection);
  std::cout << "Time of the hit: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
ROOT::VecOps::RVec<bool>
maskType(LogicalOperators::ComparisonOperator op, int val,
         ROOT::VecOps::RVec<edm4hep::TrackerHit3DData> &collection) {
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
maskQuality(LogicalOperators::ComparisonOperator op, int val,
            ROOT::VecOps::RVec<edm4hep::TrackerHit3DData> &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<int> vals = getQuality(collection);
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
           ROOT::VecOps::RVec<edm4hep::TrackerHit3DData> &collection) {
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
maskEDep(LogicalOperators::ComparisonOperator op, float val,
         ROOT::VecOps::RVec<edm4hep::TrackerHit3DData> &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getEDep(collection);
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
         ROOT::VecOps::RVec<edm4hep::TrackerHit3DData> &collection) {
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
maskType(LogicalOperators::ComparisonOperator op, int val,
         const edm4hep::TrackerHit3DCollection &collection) {
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
maskQuality(LogicalOperators::ComparisonOperator op, int val,
            const edm4hep::TrackerHit3DCollection &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<int> vals = getQuality(collection);
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
           const edm4hep::TrackerHit3DCollection &collection) {
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
maskEDep(LogicalOperators::ComparisonOperator op, float val,
         const edm4hep::TrackerHit3DCollection &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<float> vals = getEDep(collection);
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
         const edm4hep::TrackerHit3DCollection &collection) {
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
ROOT::VecOps::RVec<edm4hep::TrackerHit3DData>
selType(LogicalOperators::ComparisonOperator op, int val,
        ROOT::VecOps::RVec<edm4hep::TrackerHit3DData> &collection) {
  auto mask = maskType(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::TrackerHit3DData>
selQuality(LogicalOperators::ComparisonOperator op, int val,
           ROOT::VecOps::RVec<edm4hep::TrackerHit3DData> &collection) {
  auto mask = maskQuality(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::TrackerHit3DData>
selCellID(LogicalOperators::ComparisonOperator op, unsigned long long val,
          ROOT::VecOps::RVec<edm4hep::TrackerHit3DData> &collection) {
  auto mask = maskCellID(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::TrackerHit3DData>
selEDep(LogicalOperators::ComparisonOperator op, float val,
        ROOT::VecOps::RVec<edm4hep::TrackerHit3DData> &collection) {
  auto mask = maskEDep(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::TrackerHit3DData>
selTime(LogicalOperators::ComparisonOperator op, float val,
        ROOT::VecOps::RVec<edm4hep::TrackerHit3DData> &collection) {
  auto mask = maskTime(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::TrackerHit3DCollection
selType(LogicalOperators::ComparisonOperator op, int val,
        const edm4hep::TrackerHit3DCollection &collection) {
  auto mask = maskType(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::TrackerHit3DCollection
selQuality(LogicalOperators::ComparisonOperator op, int val,
           const edm4hep::TrackerHit3DCollection &collection) {
  auto mask = maskQuality(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::TrackerHit3DCollection
selCellID(LogicalOperators::ComparisonOperator op, unsigned long long val,
          const edm4hep::TrackerHit3DCollection &collection) {
  auto mask = maskCellID(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::TrackerHit3DCollection
selEDep(LogicalOperators::ComparisonOperator op, float val,
        const edm4hep::TrackerHit3DCollection &collection) {
  auto mask = maskEDep(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::TrackerHit3DCollection
selTime(LogicalOperators::ComparisonOperator op, float val,
        const edm4hep::TrackerHit3DCollection &collection) {
  auto mask = maskTime(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::TrackerHit3DData>
sortType(ROOT::VecOps::RVec<edm4hep::TrackerHit3DData> &collection,
         bool reverse) {
  auto lambda = [reverse](edm4hep::TrackerHit3DData x,
                          edm4hep::TrackerHit3DData y) {
    int a, b;
    a = (x.type);
    b = (y.type);
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::TrackerHit3DData>
sortQuality(ROOT::VecOps::RVec<edm4hep::TrackerHit3DData> &collection,
            bool reverse) {
  auto lambda = [reverse](edm4hep::TrackerHit3DData x,
                          edm4hep::TrackerHit3DData y) {
    int a, b;
    a = (x.quality);
    b = (y.quality);
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::TrackerHit3DData>
sortCellID(ROOT::VecOps::RVec<edm4hep::TrackerHit3DData> &collection,
           bool reverse) {
  auto lambda = [reverse](edm4hep::TrackerHit3DData x,
                          edm4hep::TrackerHit3DData y) {
    unsigned long long a, b;
    a = (x.cellID);
    b = (y.cellID);
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::TrackerHit3DData>
sortEDep(ROOT::VecOps::RVec<edm4hep::TrackerHit3DData> &collection,
         bool reverse) {
  auto lambda = [reverse](edm4hep::TrackerHit3DData x,
                          edm4hep::TrackerHit3DData y) {
    float a, b;
    a = (x.eDep);
    b = (y.eDep);
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::TrackerHit3DData>
sortTime(ROOT::VecOps::RVec<edm4hep::TrackerHit3DData> &collection,
         bool reverse) {
  auto lambda = [reverse](edm4hep::TrackerHit3DData x,
                          edm4hep::TrackerHit3DData y) {
    float a, b;
    a = (x.time);
    b = (y.time);
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
edm4hep::TrackerHit3DCollection
sortType(edm4hep::TrackerHit3DCollection &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::TrackerHit3D x, edm4hep::TrackerHit3D y) {
    int a, b;
    a = (x.getType());
    b = (y.getType());
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::TrackerHit3D> vec;
  for (const edm4hep::TrackerHit3D &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::TrackerHit3DCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::TrackerHit3D &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::TrackerHit3DCollection
sortQuality(edm4hep::TrackerHit3DCollection &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::TrackerHit3D x, edm4hep::TrackerHit3D y) {
    int a, b;
    a = (x.getQuality());
    b = (y.getQuality());
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::TrackerHit3D> vec;
  for (const edm4hep::TrackerHit3D &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::TrackerHit3DCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::TrackerHit3D &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::TrackerHit3DCollection
sortCellID(edm4hep::TrackerHit3DCollection &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::TrackerHit3D x, edm4hep::TrackerHit3D y) {
    unsigned long long a, b;
    a = (x.getCellID());
    b = (y.getCellID());
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::TrackerHit3D> vec;
  for (const edm4hep::TrackerHit3D &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::TrackerHit3DCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::TrackerHit3D &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::TrackerHit3DCollection
sortEDep(edm4hep::TrackerHit3DCollection &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::TrackerHit3D x, edm4hep::TrackerHit3D y) {
    float a, b;
    a = (x.getEDep());
    b = (y.getEDep());
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::TrackerHit3D> vec;
  for (const edm4hep::TrackerHit3D &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::TrackerHit3DCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::TrackerHit3D &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::TrackerHit3DCollection
sortTime(edm4hep::TrackerHit3DCollection &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::TrackerHit3D x, edm4hep::TrackerHit3D y) {
    float a, b;
    a = (x.getTime());
    b = (y.getTime());
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::TrackerHit3D> vec;
  for (const edm4hep::TrackerHit3D &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::TrackerHit3DCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::TrackerHit3D &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
} // namespace TrackerHit3D
} // namespace k4::ral
