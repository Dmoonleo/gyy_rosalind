#include <iostream>
#include <string>
#include <map>
using namespace std;

map<char, char> match;

void setMatch()
{
    match['A'] = 'G';
	match['G'] = 'A';
	match['C'] = 'T';
	match['T'] = 'C';
}

map<string, char> getMap()
{
	map<string, char> m;
	m["UUU"] = 'F';    m["CUU"] = 'L';  m["AUU"] = 'I';      m["GUU"] = 'V';
	m["UUC"] = 'F';    m["CUC"] = 'L';  m["AUC"] = 'I';      m["GUC"] = 'V';
	m["UUA"] = 'L';    m["CUA"] = 'L';  m["AUA"] = 'I';      m["GUA"] = 'V';
	m["UUG"] = 'L';    m["CUG"] = 'L';  m["AUG"] = 'M';      m["GUG"] = 'V';
	m["UCU"] = 'S';    m["CCU"] = 'P';  m["ACU"] = 'T';      m["GCU"] = 'A';
	m["UCC"] = 'S';    m["CCC"] = 'P';  m["ACC"] = 'T';      m["GCC"] = 'A';
	m["UCA"] = 'S';    m["CCA"] = 'P';  m["ACA"] = 'T';      m["GCA"] = 'A';
	m["UCG"] = 'S';    m["CCG"] = 'P';  m["ACG"] = 'T';      m["GCG"] = 'A';
	m["UAU"] = 'Y';    m["CAU"] = 'H';  m["AAU"] = 'N';      m["GAU"] = 'D';
	m["UAC"] = 'Y';    m["CAC"] = 'H';  m["AAC"] = 'N';      m["GAC"] = 'D';
	m["CAA"] = 'Q';    m["AAA"] = 'K';  m["GAA"] = 'E';
	m["CAG"] = 'Q';    m["AAG"] = 'K';  m["GAG"] = 'E';
	m["UGU"] = 'C';    m["CGU"] = 'R';  m["AGU"] = 'S';      m["GGU"] = 'G';
	m["UGC"] = 'C';    m["CGC"] = 'R';  m["AGC"] = 'S';      m["GGC"] = 'G';
	m["CGA"] = 'R';    m["AGA"] = 'R';  m["GGA"] = 'G';
	m["UGG"] = 'W';    m["CGG"] = 'R';  m["AGG"] = 'R';      m["GGG"] = 'G'; 
	return m;
}

char getAmino(string codon, map<string, char>& m)
{
	return m[codon];
}

string getDNA()
{
	string result = "";
	char p;
	while(cin >> p)
		if(p=='>') break;
	getline(cin, result);
	result = "";
	while(true)
	{
		cin >> ws;
		if(!cin || cin.peek() == '>') break;
		else
		{
			string temp;
			cin >> temp;
			result += temp;
		}
	}
	return result;
}

string toDNA(string RNA)
{
	string DNA = RNA;
	for(int i=0;i<RNA.size();i++)
	{
		if(RNA[i] == 'U')
			DNA[i] = 'T';
	}
	return DNA;
}

string toRNA(string DNA)
{
	string RNA = DNA;
	for(int i=0;i<DNA.size();i++)
	{
		if(DNA[i] == 'U')
			RNA[i] = 'T';
	}
	return RNA;
}
