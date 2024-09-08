#include <ral/Track.h>
namespace k4::ral {
namespace Track {
ROOT::VecOps::RVec<int>
getType(ROOT::VecOps::RVec<edm4hep::TrackData> &collection) {
  ROOT::VecOps::RVec<int> vec;
  vec.reserve(collection.size());
  for (const edm4hep::TrackData &item : collection) {
    int result;
    result = (item.type);
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float>
getChi2(ROOT::VecOps::RVec<edm4hep::TrackData> &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::TrackData &item : collection) {
    float result;
    result = (item.chi2);
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<int>
getndf(ROOT::VecOps::RVec<edm4hep::TrackData> &collection) {
  ROOT::VecOps::RVec<int> vec;
  vec.reserve(collection.size());
  for (const edm4hep::TrackData &item : collection) {
    int result;
    result = (item.ndf);
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<int>
getNholes(ROOT::VecOps::RVec<edm4hep::TrackData> &collection) {
  ROOT::VecOps::RVec<int> vec;
  vec.reserve(collection.size());
  for (const edm4hep::TrackData &item : collection) {
    int result;
    result = (item.Nholes);
    vec.emplace_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<int> getType(const edm4hep::TrackCollection &collection) {
  ROOT::VecOps::RVec<int> vec;
  vec.reserve(collection.size());
  for (const edm4hep::Track &item : collection) {
    int result;
    result = (item.getType());
    vec.push_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<float> getChi2(const edm4hep::TrackCollection &collection) {
  ROOT::VecOps::RVec<float> vec;
  vec.reserve(collection.size());
  for (const edm4hep::Track &item : collection) {
    float result;
    result = (item.getChi2());
    vec.push_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<int> getndf(const edm4hep::TrackCollection &collection) {
  ROOT::VecOps::RVec<int> vec;
  vec.reserve(collection.size());
  for (const edm4hep::Track &item : collection) {
    int result;
    result = (item.getNdf());
    vec.push_back(result);
  }
  return vec;
}
ROOT::VecOps::RVec<int> getNholes(const edm4hep::TrackCollection &collection) {
  ROOT::VecOps::RVec<int> vec;
  vec.reserve(collection.size());
  for (const edm4hep::Track &item : collection) {
    int result;
    result = (item.getNholes());
    vec.push_back(result);
  }
  return vec;
}
int printType(ROOT::VecOps::RVec<edm4hep::TrackData> &collection) {
  ROOT::VecOps::RVec<int> vec = getType(collection);
  std::cout << "Type: ";
  for (const int &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printChi2(ROOT::VecOps::RVec<edm4hep::TrackData> &collection) {
  ROOT::VecOps::RVec<float> vec = getChi2(collection);
  std::cout << "Chi^2: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printndf(ROOT::VecOps::RVec<edm4hep::TrackData> &collection) {
  ROOT::VecOps::RVec<int> vec = getndf(collection);
  std::cout << "Degrees of freedom: ";
  for (const int &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printNholes(ROOT::VecOps::RVec<edm4hep::TrackData> &collection) {
  ROOT::VecOps::RVec<int> vec = getNholes(collection);
  std::cout << "Number of holes: ";
  for (const int &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printType(const edm4hep::TrackCollection &collection) {
  ROOT::VecOps::RVec<int> vec = getType(collection);
  std::cout << "Type: ";
  for (const int &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printChi2(const edm4hep::TrackCollection &collection) {
  ROOT::VecOps::RVec<float> vec = getChi2(collection);
  std::cout << "Chi^2: ";
  for (const float &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printndf(const edm4hep::TrackCollection &collection) {
  ROOT::VecOps::RVec<int> vec = getndf(collection);
  std::cout << "Degrees of freedom: ";
  for (const int &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
int printNholes(const edm4hep::TrackCollection &collection) {
  ROOT::VecOps::RVec<int> vec = getNholes(collection);
  std::cout << "Number of holes: ";
  for (const int &item : vec) {
    std::cout << item << " ";
  }
  std::cout << std::endl;
  return 0;
}
ROOT::VecOps::RVec<bool>
maskType(LogicalOperators::ComparisonOperator op, int val,
         ROOT::VecOps::RVec<edm4hep::TrackData> &collection) {
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
         ROOT::VecOps::RVec<edm4hep::TrackData> &collection) {
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
maskndf(LogicalOperators::ComparisonOperator op, int val,
        ROOT::VecOps::RVec<edm4hep::TrackData> &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<int> vals = getndf(collection);
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
maskNholes(LogicalOperators::ComparisonOperator op, int val,
           ROOT::VecOps::RVec<edm4hep::TrackData> &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<int> vals = getNholes(collection);
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
ROOT::VecOps::RVec<bool> maskType(LogicalOperators::ComparisonOperator op,
                                  int val,
                                  const edm4hep::TrackCollection &collection) {
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
                                  const edm4hep::TrackCollection &collection) {
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
ROOT::VecOps::RVec<bool> maskndf(LogicalOperators::ComparisonOperator op,
                                 int val,
                                 const edm4hep::TrackCollection &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<int> vals = getndf(collection);
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
maskNholes(LogicalOperators::ComparisonOperator op, int val,
           const edm4hep::TrackCollection &collection) {
  ROOT::VecOps::RVec<bool> vec;
  vec.reserve(collection.size());
  ROOT::VecOps::RVec<int> vals = getNholes(collection);
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
ROOT::VecOps::RVec<edm4hep::TrackData>
selType(LogicalOperators::ComparisonOperator op, int val,
        ROOT::VecOps::RVec<edm4hep::TrackData> &collection) {
  auto mask = maskType(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::TrackData>
selChi2(LogicalOperators::ComparisonOperator op, float val,
        ROOT::VecOps::RVec<edm4hep::TrackData> &collection) {
  auto mask = maskChi2(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::TrackData>
selndf(LogicalOperators::ComparisonOperator op, int val,
       ROOT::VecOps::RVec<edm4hep::TrackData> &collection) {
  auto mask = maskndf(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::TrackData>
selNholes(LogicalOperators::ComparisonOperator op, int val,
          ROOT::VecOps::RVec<edm4hep::TrackData> &collection) {
  auto mask = maskNholes(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::TrackCollection selType(LogicalOperators::ComparisonOperator op,
                                 int val,
                                 const edm4hep::TrackCollection &collection) {
  auto mask = maskType(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::TrackCollection selChi2(LogicalOperators::ComparisonOperator op,
                                 float val,
                                 const edm4hep::TrackCollection &collection) {
  auto mask = maskChi2(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::TrackCollection selndf(LogicalOperators::ComparisonOperator op,
                                int val,
                                const edm4hep::TrackCollection &collection) {
  auto mask = maskndf(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
edm4hep::TrackCollection selNholes(LogicalOperators::ComparisonOperator op,
                                   int val,
                                   const edm4hep::TrackCollection &collection) {
  auto mask = maskNholes(op, val, collection);
  return LogicalOperators::filter(mask, collection);
}
ROOT::VecOps::RVec<edm4hep::TrackData>
sortType(ROOT::VecOps::RVec<edm4hep::TrackData> &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::TrackData x, edm4hep::TrackData y) {
    int a, b;
    a = (x.type);
    b = (y.type);
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::TrackData>
sortChi2(ROOT::VecOps::RVec<edm4hep::TrackData> &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::TrackData x, edm4hep::TrackData y) {
    float a, b;
    a = (x.chi2);
    b = (y.chi2);
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::TrackData>
sortndf(ROOT::VecOps::RVec<edm4hep::TrackData> &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::TrackData x, edm4hep::TrackData y) {
    int a, b;
    a = (x.ndf);
    b = (y.ndf);
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
ROOT::VecOps::RVec<edm4hep::TrackData>
sortNholes(ROOT::VecOps::RVec<edm4hep::TrackData> &collection, bool reverse) {
  auto lambda = [reverse](edm4hep::TrackData x, edm4hep::TrackData y) {
    int a, b;
    a = (x.Nholes);
    b = (y.Nholes);
    bool result = a < b;
    return reverse ? !result : result;
  };
  return ROOT::VecOps::Sort(collection, lambda);
}
edm4hep::TrackCollection sortType(edm4hep::TrackCollection &collection,
                                  bool reverse) {
  auto lambda = [reverse](edm4hep::Track x, edm4hep::Track y) {
    int a, b;
    a = (x.getType());
    b = (y.getType());
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::Track> vec;
  for (const edm4hep::Track &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::TrackCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::Track &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::TrackCollection sortChi2(edm4hep::TrackCollection &collection,
                                  bool reverse) {
  auto lambda = [reverse](edm4hep::Track x, edm4hep::Track y) {
    float a, b;
    a = (x.getChi2());
    b = (y.getChi2());
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::Track> vec;
  for (const edm4hep::Track &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::TrackCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::Track &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::TrackCollection sortndf(edm4hep::TrackCollection &collection,
                                 bool reverse) {
  auto lambda = [reverse](edm4hep::Track x, edm4hep::Track y) {
    int a, b;
    a = (x.getNdf());
    b = (y.getNdf());
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::Track> vec;
  for (const edm4hep::Track &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::TrackCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::Track &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
edm4hep::TrackCollection sortNholes(edm4hep::TrackCollection &collection,
                                    bool reverse) {
  auto lambda = [reverse](edm4hep::Track x, edm4hep::Track y) {
    int a, b;
    a = (x.getNholes());
    b = (y.getNholes());
    bool result = a < b;
    return reverse ? !result : result;
  };
  std::vector<edm4hep::Track> vec;
  for (const edm4hep::Track &item : collection) {
    vec.emplace_back(item);
  };
  std::sort(vec.begin(), vec.end(), lambda);
  edm4hep::TrackCollection newCollection;
  newCollection.setSubsetCollection();
  for (const edm4hep::Track &item : vec) {
    newCollection.push_back(item);
  };
  return newCollection;
}
} // namespace Track
} // namespace k4::ral
