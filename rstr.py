import math

t = 90000
p = 0.6
s = "ATAGCCGA"
result = 1

for i in s:
    if i is "A" or i is "T":
        result *= ((1-p)/2)
    else:
        result *= (p/2)
    #print result

print 1- math.pow(1-result,90000)
