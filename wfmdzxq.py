import math


def C(a, b):
    return math.factorial(a) / math.factorial(b) / math.factorial(a-b)


def B(n, x, p):
    result = C(n, x)*math.pow(p, x)*math.pow(1-p, n-x)
    print result
    return result

p = [[0.0 for _j in xrange(15)] for _i in xrange(7)]

N = 4
m = 6
g = 2
k = 1

N2 = N*2

p[0][N2-m] = 1

for i in range(1, g+1):
    for j in range(0, N2+1):
        p[i][j] = 0.0
        for k in range(0, N2+1):
            newp = k * 1.0 / N2
            p[i][j] += B(N2, j, newp) * p[i-1][k]


sump = 0
for i in range(k, N2+1):
    sump += p[g][i]

print sump
