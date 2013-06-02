def fac(a):
    if a is 0:
        return 1
    else:
        return a*fac(a-1)


def pow(b, a):
    #print "aa: "+str(a)
    if a is 0:
        return 1
    else:
        #print "a: "+str(a)
        return b*pow(b, a-1)


def comb(a, b):
    return fac(a)/fac(b)/fac(a-b)


def prob(N, m, kk):
    p = 1.0*(2*N-m)/2/N
    result = pow(p, kk)*pow((1-p), (2*N-kk))*comb(2*N, kk)
    #print "result "+str(N)+" "+str(m)+" "+str(kk)+" "+str(result)
    return result

N = 4
m = 6
g = 2
k = 1

p = []
temp = []
for i in range(0, 2*N+1):
    if i is 2*N-m:
        p.append(1)
        temp.append(0)
    else:
        p.append(0)
        temp.append(0)

for ii in range(0, g):
    for i in range(0, 2*N+1):
        for j in range(0, 2*N+1):
            temp[j] += p[i]*prob(N, 2*N-i, j)
    for i in range(0, 2*N+1):
        p[i] = temp[i]
        temp[i] = 0.0
result = 0
for i in range(k, 2*N+1):
    result += p[i]

print result
