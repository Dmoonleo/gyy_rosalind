def pow(a, b):
    if b is 0:
        return 1
    if b is 1:
        return a
    else:
        return pow(a, b-1)*a


def fac(a):
    if a is 0:
        return 1
    else:
        return a*fac(a-1)


def comb(a, b):
    return fac(a)/fac(b)/fac(a-b)


k = 7
n = 33
result = 0
for i in range(n, pow(2, k)+1):
    result += pow(0.25, i) * pow(0.75, pow(2, k)-i) * comb(pow(2, k), i)

print result
