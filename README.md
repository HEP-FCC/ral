# ral

Key4hep library for use in ROOT RDataFrame based analysis.

## Build instructions

First, you should source the Key4hep nigthlies stack from CVMFS.
```
source /cvmfs/sw-nightlies.hsf.org/key4hep/setup.sh
```
Then you just need to clone the repository and use cmake for
making the build. In this case, it is also shown how to setup an 
install directory.
```
git clone https://github.com/HEP-FCC/ral.git
cd ral
mkdir build
mkdir install
cd build
cmake ..
cmake --build --target install .
```
Library installation folder should be added to the ROOT PATH in order
to be used. In this cases, there is a script in the Key4hep satack that can
be used:
```
k4_local_repo
```

## Interactive use

In order to use this library inside ROOT REPL one can open a root file with
```
root test.root
```
and then in the ROOT REPL do
```cpp
gSystem->Load("libral.so");
loadRal();
ROOT::RDataFrame dframe(*events);
auto hist = dframe.Define("pT", "k4::ral::ReconstructedParticle::get_pt(ReconstructedParticles)").Histo1D("pT");
hist->Draw();
```

The whole output of the ROOT REPL can be seen here:
```
   ------------------------------------------------------------------
  | Welcome to ROOT 6.32.04                        https://root.cern |
  | (c) 1995-2024, The ROOT Team; conception: R. Brun, F. Rademakers |
  | Built for linuxx8664gcc on Aug 21 2024, 03:51:07                 |
  | From heads/master@tags/v6-32-04                                  |
  | With g++ (GCC) 11.4.1 20230605 (Red Hat 11.4.1-2)                |
  | Try '.help'/'.?', '.demo', '.license', '.credits', '.quit'/'.q'  |
   ------------------------------------------------------------------

root [0]
Attaching file test.root as _file0...
(TFile *) 0x23c5ce0
root [1] gSystem->Load("libral.so");
root [2] loadRal()
(bool) true
root [3] ROOT::RDataFrame dframe(*events);
root [4] auto hist = dframe.Define("pT", "k4::ral::ReconstructedParticle::get_pt(ReconstructedParticles)").Histo1D("pT");
root [5] hist->Draw();
Info in <TCanvas::MakeDefCanvas>:  created default TCanvas with name c1
root [6]
```

## Library tutorial

Ral library is composed by a series of basic analyzers that acts on EDM4hep 
objects to obtain and transform information about them. In this short tutorial
you can see how this library can be used for different purposes.

This tutorial has been designed for analizing simulation results from the 
FCC. Everything is explained as if you would be analyzing a ROOT dataframe (df)
with the events from the simulation. 

### Getters

These kind of methods allow the user to get information about some quantity
for every object in a collection. In this case, if you want to know the 
momentum of a reconstructed particle you could use:

```
auto newDf = df.Define("p", "k4::ral::ReconstructedParticle::getP(ReconstructedParticles));
```

This operation extracts a RVEC with all the momentums in every ReconstructedParticle
collection for each event.

### Printers

Sometimes you will need to see some numbers on the screen to be sure that 
everything is fine. For that reason a series of print methods where develop
next to the getters so they can be use for debugging. 

```
auto newDf = df.Define("p", "k4::ral::ReconstructedParticle::printP(ReconstructedParticles));
newDf.Snapshot("events", "final.root", { "p" });
```

Since Define is lazily evaluated on RDataFrames, it is necessary to do an 
Snapshot in order to see the information printed on the screen

### Maskers



