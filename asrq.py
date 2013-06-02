import math
import sys

in_string = raw_input()
in_vector = in_string.split(" ")

for i in in_vector:
    ii = float(i)
    b = (1-math.sqrt(ii))**2
    sys.stdout.write(str(1-b))
    sys.stdout.write(" ")