def iscomposed(a, b, c):
    if len(a) != len(b) + len(c):
        return False
    if len(a) == 0:
        return True
    if len(b) == 0 or len(c) == 0:
        if a == b+c:
            return True
        else:
            return False
    if a[0] != b[0] and a[0] != c[0]:
        return False
    if b[0] != c[0]:
        if a[0] == b[0]:
            return iscomposed(a[1:], b[1:], c)
        if a[0] == c[0]:
            return iscomposed(a[1:], b, c[1:])
    else:
        return iscomposed(a[1:], b[1:], c) or iscomposed(a[1:], b, c[1:])


def calacala(a, b, c):
    if len(a) < len(b) + len(c):
        return False
    else:
        cala = len(b) + len(c)
        for i in range(0, len(a)-cala+1):
            if iscomposed(a[i:i+cala], b, c):
                return True
        return False

DNA = raw_input()
dna = []

try:
    while True:
        dna.append(raw_input())
except:
    pass

s = len(dna)

for i in range(0, s):
    for j in range(0, s):
        if calacala(DNA, dna[i], dna[j]):
            print 1,
        else:
            print 0,
    print ""
