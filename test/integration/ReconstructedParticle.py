import ROOT
import urllib.request
import subprocess
from pathlib import Path

def get_file(url: str, path: str) -> None:
    size = 0
    with urllib.request.urlopen(url) as stream, open(path, "wb") as file:
        buf_size = 1024 * 8
        while block := stream.read(buf_size):
            file.write(block)
            size += buf_size
    if size == 0:
        raise RuntimeError(f"Cannot download from url: {url}")


PYTHIA_CARD = {
    "url": "https://raw.githubusercontent.com/HEP-FCC/FCC-config/winter2023/FCCee/Generator/Pythia8/p8_ee_WW_ecm240.cmd",
    "path": "/tmp/test_pythia_card.cmd"
}
DETECTOR_CARD = {
    "url": "https://raw.githubusercontent.com/HEP-FCC/FCC-config/winter2023/FCCee/Delphes/card_IDEA.tcl",
    "path": "/tmp/test_detector_card.tcl"
}
OUTPUT_CARD = {
    "url": "https://raw.githubusercontent.com/HEP-FCC/FCC-config/winter2023/FCCee/Delphes/card_IDEA.tcl",
    "path": "/tmp/test_output_card.tcl"
}
ROOT_FILE = "/tmp/test.root"
FINAL_ROOT_FILE = "/tmp/test_final.root"

if __name__ == "__main__":

    print("ReconstructedParticle Integration Test: PRE-TEST".center(80, "-"))

    if not Path(ROOT_FILE).exists():
        print("Downloading Pythia files")
        get_file(**PYTHIA_CARD)
        get_file(**DETECTOR_CARD) 
        get_file(**OUTPUT_CARD)
        print("Running Pythia to generate root file")
        subprocess.run(
            [
                "DelphesPythia8_EDM4HEP", 
                DETECTOR_CARD["path"],
                OUTPUT_CARD["path"],
                PYTHIA_CARD["path"],
                ROOT_FILE
            ],
            stdout=subprocess.DEVNULL,
            stderr=subprocess.DEVNULL
        ).check_returncode()
    # else:
    #     subprocess.run(
    #         [
    #             "podio-dump", 
    #             ROOT_FILE
    #         ],
    #         stdout=subprocess.DEVNULL,
    #         stderr=subprocess.DEVNULL
    #     ).check_returncode()

    print("ReconstructedParticle Integration Test: START".center(80, "-"))

    print("Loading ROOT libraries")
    if not ROOT.gSystem.Load("libral") and ROOT.gSystem.Load("libedm4hep"):
        print('RAL Found!')
        print('EDM4HEP Found!')
    if ROOT.loadRal() and ROOT.edm4hep.ReconstructedParticleData():
        print('RAL Loaded!')
        print('EDM4HEP Loaded!')

    print("Loading ROOT dataframe and test ral functions")
    df = ROOT.RDataFrame("events", ROOT_FILE)
    ROOT.gInterpreter.ProcessLine("using namespace k4::ral;")
    ROOT.gInterpreter.ProcessLine("using namespace LogicalOperators;")
    df = (df
        .Define("e1",
                "ReconstructedParticle::sel_e(ComparisonOperator::LESS, 1., ReconstructedParticles)")
        .Define("e2",
                "ReconstructedParticle::sel_e(ComparisonOperator::GREATER, 5., e1)")
        .Define("mass",
                "ReconstructedParticle::get_m(e2)")
        .Define("total_mass",
                "ROOT::VecOps::Sum(mass)")
    )
    print("Output test result in a new dataframe")
    df.Snapshot("events", FINAL_ROOT_FILE,
                [
                "e2",
                "mass",
                "total_mass"
                ]) 

