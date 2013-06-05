def similar(a, b):
    count = 0
    for i in range(0, len(a)):
        if a[i] is not b[i]:
            count += 1
        if count > 1:
            break
    if count is 1:
        return True
    else:
        return False


def rc(a):
    b = a[::-1]
    c = ""
    for i in range(0, len(b)):
        if b[i] is "A":
            c += "T"
        if b[i] is "T":
            c += "A"
        if b[i] is "C":
            c += "G"
        if b[i] is "G":
            c += "C"
    return c

DNA = []
temp = ""
try:
    while True:
        temp = raw_input()
        if temp[0] is not ">":
            DNA.append(temp)
except:
    pass

DNAid = []
for i in DNA:
    j = rc(i)
    if i < j:
        DNAid.append(i)
    else:
        DNAid.append(j)


correct = []
correctrc = []
wrong = []

for i in range(0, len(DNAid)):
    for j in range(i, len(DNAid)):
        if DNAid[i] == DNAid[j] and i != j:  # "is not" WTF?
            correct.append(DNAid[i])
            correctrc.append(rc(DNAid[i]))
            #print i
            break

for i in DNA:
    if i not in correct and i not in correctrc:
        wrong.append(i)

result = ""
correct += correctrc
for i in wrong:
    result1 = i+"->"
    for j in correct:
        if similar(i, j):
            result1 += j
            if result1 == result:
                break
            else:
                #rint result1
                result = result1
                break

print len(DNA)
print len(DNAid)
print len(correct)
print len(correctrc)
print len(wrong)
