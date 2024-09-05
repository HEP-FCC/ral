from argparse import ArgumentParser
from metaprograming.MCParticle import write_mcparticle_code
from metaprograming.ReconstructedParticle import write_recoparticle_code
from metaprograming.Track import write_track_code
from metaprograming.Vertex import write_vertex_code
from metaprograming.Cluster import write_cluster_code
from metaprograming.CalorimeterHit import write_calorimeterhit_code
from metaprograming.TrackerHit3D import write_trackerhit3d_code

parser = ArgumentParser(
        prog="metaprograming",
        description="Generate cpp code files for the RAL project")
parser.add_argument("headerDir", type=str, help="Directory for writing header files")
parser.add_argument("srcDir", type=str, help="Directory for writing source files")

args = parser.parse_args()
h_dir = args.headerDir
s_dir = args.srcDir

write_mcparticle_code(h_dir, s_dir)
write_recoparticle_code(h_dir, s_dir)
write_track_code(h_dir, s_dir)
write_vertex_code(h_dir, s_dir)
write_cluster_code(h_dir, s_dir)
write_calorimeterhit_code(h_dir, s_dir)
write_trackerhit3d_code(h_dir, s_dir)
