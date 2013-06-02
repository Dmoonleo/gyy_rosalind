a = "AUGAUGAUCGCCCAUGAGAUGUGCCGGCUCUAAUUACCUGCGAGAGACUCGCCGCAGACGAACUUGCUUCGCGCAGACGAUGCGCUCU"
A = 0
U = 0
G = 0
C = 0

def fac(n):
    if n is 0:
        return 1
    if n is 1:
        return 1
    else:
        return n*fac(n-1)

def min(a, b):
    if a < b:
        return a
    else:
        return b
def max(a, b):
    if a > b:
        return a
    else:
        return b

def comb(a, b):
    return fac(a)/fac(a-b)

for i in a:
    if i is "A":
        A += 1
    if i is "U":
        U += 1
    if i is "G":
        G += 1
    if i is "C":
        C += 1

print comb(max(A,U),min(A,U))*comb(max(G,C),min(G,C))
