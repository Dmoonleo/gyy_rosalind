temp = "a"


dp = [[0 for _j in xrange(300)] for _i in xrange(300)]
vis = [[0 for _j in xrange(300)] for _i in xrange(300)]

#dna = raw_input()
dna = "AUGCUAGUACGGAGCGAGUCUAGCGAGCGAUGUCGUGAGUACUAUAUAUGCGCAUAAGCCACGU"

def match(c,d):
    a = 'A'
    b = 'C'
    if c < d:
        a = c
        b = d
    else:
        a = d
        b = c
    if a == 'A' and b == 'U':
        return 1
    if a == 'C' and b == 'G':
        return 1
    if a == 'G' and b == 'U':
        return 1
    return 0

def DP(i,j):
    if j <= i:
        return 1
    if vis[i][j] is 1:
        return dp[i][j]
    vis[i][j] = 1
    ans = DP(i+1, j)
    for k in range(i+4, j):
        if match(dna[i], dna[k]):
            temp = DP(i+1, k)
            if temp > 0:
                temp *= DP(k+1, j)
            ans += temp
    dp[i][j] = ans
    return ans


print DP(0, len(dna))