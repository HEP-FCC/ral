#ifdef __CLING__

// Globals
#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;
#pragma link C++ nestedclasses;
#pragma link C++ nestedtypedefs;

// Dictionaries for output objects
#pragma link C++ class ROOT::VecOps::RVec < int>;
#pragma link C++ class ROOT::VecOps::RVec < float>;
#pragma link C++ class ROOT::VecOps::RVec < bool>;
#pragma link C++ class ROOT::VecOps::RVec < ROOT::Math::XYZVector>;
#pragma link C++ class ROOT::VecOps::RVec < ROOT::Math::PxPyPzMVector>;

// to load all other functions
#pragma link C++ function loadRal;

#endif
