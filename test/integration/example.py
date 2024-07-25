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
        

print("Loading ROOT libraries")

if not ROOT.gSystem.Load("libral") and ROOT.gSystem.Load("libedm4hep"):
    print('RAL Found!')
    print('EDM4HEP Found!')
if ROOT.loadRal() and ROOT.edm4hep.ReconstructedParticleData():
    print('RAL Loaded!')
    print('EDM4HEP Loaded!')

print("Load ROOT dataframe and test ral functions")

df = ROOT.RDataFrame("events", ROOT_FILE)

df = df.Define("charge", "k4::ral::ReconstructedParticle::get_charge(ReconstructedParticles)")

print("Output new dataframe")

df.Snapshot("events", FINAL_ROOT_FILE, {"charge"}) 


print("Cleaning temp files")

Path(DETECTOR_CARD["path"]).unlink()
Path(OUTPUT_CARD["path"]).unlink()
Path(PYTHIA_CARD["path"]).unlink()
Path(ROOT_FILE).unlink()
Path(FINAL_ROOT_FILE).unlink()
    
