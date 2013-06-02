import math
import sys

in_string = raw_input()
in_vector = in_string.split(" ")

for i in in_vector:
    ii = float(i)
    sys.stdout.write(str(2*ii*(1-ii)))
    sys.stdout.write(" ")