def fac(a):
    if a is 0: 
        return 1
    if a is 1:
        return 1
    result = 1
    for i in range(1,a+1):
        result *= i
    return result


def comb(a, b):
    return fac(a)/fac(b)/fac(a-b)

m = 1041
n = 1621
result = 0

for i in range(m, n+1):
    result += comb(n,i)

print result % 1000000