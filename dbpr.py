import urllib
import re
import sys

dna_id = "P67458"
uri = "http://www.uniprot.org/uniprot/"+dna_id+".txt"
source = urllib.urlopen(uri).read()
print source
for i in re.findall("; P:[\w+\s?]+;", source):
    print i[4:-1]

'''
ID   EX7S_SALTY              Reviewed;          80 AA.
AC   P67458; Q8XEZ9;
DT   11-OCT-2004, integrated into UniProtKB/Swiss-Prot.
DT   23-JAN-2007, sequence version 2.
DT   29-MAY-2013, entry version 52.
DE   RecName: Full=Exodeoxyribonuclease 7 small subunit;
DE            EC=3.1.11.6;
DE   AltName: Full=Exodeoxyribonuclease VII small subunit;
DE            Short=Exonuclease VII small subunit;
GN   Name=xseB; OrderedLocusNames=STM0424;
OS   Salmonella typhimurium (strain LT2 / SGSC1412 / ATCC 700720).
OC   Bacteria; Proteobacteria; Gammaproteobacteria; Enterobacteriales;
OC   Enterobacteriaceae; Salmonella.
OX   NCBI_TaxID=99287;
RN   [1]
RP   NUCLEOTIDE SEQUENCE [LARGE SCALE GENOMIC DNA].
RC   STRAIN=LT2 / SGSC1412 / ATCC 700720;
RX   PubMed=11677609; DOI=10.1038/35101614;
RA   McClelland M., Sanderson K.E., Spieth J., Clifton S.W., Latreille P.,
RA   Courtney L., Porwollik S., Ali J., Dante M., Du F., Hou S., Layman D.,
RA   Leonard S., Nguyen C., Scott K., Holmes A., Grewal N., Mulvaney E.,
RA   Ryan E., Sun H., Florea L., Miller W., Stoneking T., Nhan M.,
RA   Waterston R., Wilson R.K.;
RT   "Complete genome sequence of Salmonella enterica serovar Typhimurium
RT   LT2.";
RL   Nature 413:852-856(2001).
CC   -!- FUNCTION: Bidirectionally degrades single-stranded DNA into large
CC       acid-insoluble oligonucleotides, which are then degraded further
CC       into small acid-soluble oligonucleotides (By similarity).
CC   -!- CATALYTIC ACTIVITY: Exonucleolytic cleavage in either 5'- to 3'-
CC       or 3'- to 5'-direction to yield nucleoside 5'-phosphates.
CC   -!- SUBUNIT: Heterooligomer composed of large and small subunits (By
CC       similarity).
CC   -!- SUBCELLULAR LOCATION: Cytoplasm (By similarity).
CC   -!- SIMILARITY: Belongs to the XseB family.
CC   -----------------------------------------------------------------------
CC   Copyrighted by the UniProt Consortium, see http://www.uniprot.org/terms
CC   Distributed under the Creative Commons Attribution-NoDerivs License
CC   -----------------------------------------------------------------------
DR   EMBL; AE006468; AAL19378.1; -; Genomic_DNA.
DR   RefSeq; NP_459419.1; NC_003197.1.
DR   ProteinModelPortal; P67458; -.
DR   SMR; P67458; 7-67.
DR   STRING; 99287.STM0424; -.
DR   PRIDE; P67458; -.
DR   DNASU; 1251943; -.
DR   EnsemblBacteria; AAL19378; AAL19378; STM0424.
DR   GeneID; 1251943; -.
DR   KEGG; stm:STM0424; -.
DR   PATRIC; 32379183; VBISalEnt20916_0453.
DR   HOGENOM; HOG000228798; -.
DR   KO; K03602; -.
DR   OMA; APLNDYK; -.
DR   ProtClustDB; PRK00977; -.
DR   BioCyc; SENT99287:GCTI-425-MONOMER; -.
DR   GO; GO:0005737; C:cytoplasm; IEA:UniProtKB-SubCell.
DR   GO; GO:0009318; C:exodeoxyribonuclease VII complex; IEA:InterPro.
DR   GO; GO:0008855; F:exodeoxyribonuclease VII activity; IEA:HAMAP.
DR   GO; GO:0006308; P:DNA catabolic process; IEA:HAMAP.
DR   GO; GO:0090305; P:nucleic acid phosphodiester bond hydrolysis; IEA:GOC.
DR   Gene3D; 1.10.287.1040; -; 1.
DR   HAMAP; MF_00337; Exonuc_7_S; 1; -.
DR   InterPro; IPR003761; Exonuc_VII_S.
DR   Pfam; PF02609; Exonuc_VII_S; 1.
DR   PIRSF; PIRSF006488; Exonuc_VII_S; 1.
DR   ProDom; PD028235; Exonuc_VII_S; 1.
DR   SUPFAM; SSF116842; SSF116842; 1.
DR   TIGRFAMs; TIGR01280; xseB; 1.
PE   3: Inferred from homology;
KW   Complete proteome; Cytoplasm; Exonuclease; Hydrolase; Nuclease;
KW   Reference proteome.
FT   INIT_MET      1      1       Removed (By similarity).
FT   CHAIN         2     80       Exodeoxyribonuclease 7 small subunit.
FT                                /FTId=PRO_0000207000.
SQ   SEQUENCE   80 AA;  8932 MW;  DA2048043B55BE24 CRC64;
     MPKKNEAPAS FETALSELEH IVTRLESGDL PLEDALNEFE RGVQLARQGQ AKLQQAEQRV
     QILLSDNEEA SPEPFIADNE
//

process
hydrolysis
[Finished in 0.6s]

'''