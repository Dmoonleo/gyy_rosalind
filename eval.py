in_string = raw_input()
n = int(in_string)
in_string = raw_input()
dna = in_string
in_string = raw_input()
in_vector = in_string.split(" ")
A = []
for i in in_vector:
    A.append(float(i))
p = 1
for j in A:
    for i in dna:
        if i is "A" or i is "T":
            p *= ((1-j)/2)
        else:
            p *= (j/2)
    print p*(n-len(dna)+1),
    p = 1

T = int(raw_input())

for i in range(0,T):
    in_string = raw_input()
    in_vector = in_string.split(" ")

    

    M = int(in_vector[0])
    N = int(in_vector[1])
    print M+1
    print N+1