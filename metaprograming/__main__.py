from argparse import ArgumentParser
from metaprograming.MCParticle import write_mcparticle_code

parser = ArgumentParser(
        prog="metaprograming",
        description="Generate cpp code files for the RAL project")
parser.add_argument("headerDir", type=str, help="Directory for writing header files")
parser.add_argument("srcDir", type=str, help="Directory for writing source files")

args = parser.parse_args()
h_dir = args.headerDir
s_dir = args.srcDir

write_mcparticle_code(h_dir, s_dir)
