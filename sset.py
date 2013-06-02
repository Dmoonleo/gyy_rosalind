def pow2(n):
    if n is 0:
        return 1
    else:
        return 2*pow2(n-1)

print pow2(994) % 1000000
