import urllib
import re
import sys

while True:
    try:
        dna_id = ""
        dna_id = raw_input()
        uri = "http://www.uniprot.org/uniprot/"+dna_id+".fasta"
        source = urllib.urlopen(uri).read()
        count = len(urllib.urlopen(uri).readline())
        source = source[count:]
        source = source.replace("\n", "")
        ll = re.finditer((r'(?=(N[^P][ST][^P]))'), source)
        flag = False
        for i in ll:
            flag = True
        if flag:
            print dna_id
            for i in re.finditer((r'(?=(N[^P][ST][^P]))'), source):
                sys.stdout.write(str(i.span()[0]+1)+" ")
            print ""
        else:
            continue
    except:
        break
