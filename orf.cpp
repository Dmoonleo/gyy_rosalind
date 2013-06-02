#include <iostream>
using namespace std;

string r(string temp)
{
	string result = "";
	if(temp == "UUU")
		result += "F"; 
	if(temp == "CUU")
		result += "L";      
	if(temp == "AUU")
		result += "I";      
	if(temp == "GUU")
		result += "V";
	if(temp == "UUC")
		result += "F";      
	if(temp == "CUC")
		result += "L";      
	if(temp == "AUC")
		result += "I";      
	if(temp == "GUC")
		result += "V";
	if(temp == "UUA")
		result += "L";      
	if(temp == "CUA")
		result += "L";      
	if(temp == "AUA")
		result += "I";      
	if(temp == "GUA")
		result += "V";
	if(temp == "UUG")
		result += "L";      
	if(temp == "CUG")
		result += "L";      
	if(temp == "AUG")
		result += "M";      
	if(temp == "GUG")
		result += "V";
	if(temp == "UCU")
		result += "S";      
	if(temp == "CCU")
		result += "P";      
	if(temp == "ACU")
		result += "T";      
	if(temp == "GCU")
		result += "A";
	if(temp == "UCC")
		result += "S";      
	if(temp == "CCC")
		result += "P";      
	if(temp == "ACC")
		result += "T";      
	if(temp == "GCC")
		result += "A";
	if(temp == "UCA")
		result += "S";      
	if(temp == "CCA")
		result += "P";      
	if(temp == "ACA")
		result += "T";      
	if(temp == "GCA")
		result += "A";
	if(temp == "UCG")
		result += "S";      
	if(temp == "CCG")
		result += "P";      
	if(temp == "ACG")
		result += "T";      
	if(temp == "GCG")
		result += "A";
	if(temp == "UAU")
		result += "Y";      
	if(temp == "CAU")
		result += "H";      
	if(temp == "AAU")
		result += "N";      
	if(temp == "GAU")
		result += "D";
	if(temp == "UAC")
		result += "Y";      
	if(temp == "CAC")
		result += "H";      
	if(temp == "AAC")
		result += "N";      
	if(temp == "GAC")
		result += "D";   
	if(temp == "CAA")
		result += "Q";      
	if(temp == "AAA")
		result += "K";      
	if(temp == "GAA")
		result += "E";  
	if(temp == "CAG")
		result += "Q";      
	if(temp == "AAG")
		result += "K";      
	if(temp == "GAG")
		result += "E";
	if(temp == "UGU")
		result += "C";      
	if(temp == "CGU")
		result += "R";      
	if(temp == "AGU")
		result += "S";      
	if(temp == "GGU")
		result += "G";
	if(temp == "UGC")
		result += "C";      
	if(temp == "CGC")
		result += "R";      
	if(temp == "AGC")
		result += "S";      
	if(temp == "GGC")
		result += "G";   
	if(temp == "CGA")
		result += "R";      
	if(temp == "AGA")
		result += "R";      
	if(temp == "GGA")
		result += "G";
	if(temp == "UGG")
		result += "W";      
	if(temp == "CGG")
		result += "R";      
	if(temp == "AGG")
		result += "R";      
	if(temp == "GGG")
		result += "G";
	return result;
}

int main()
{
	string dna;
	string temp;
	string result;

	cin >> temp;
	
	while(cin >> temp)
	{
		for(int i=0; i<temp.length(); i++)
		{
			if(temp[i] == 'T')
				temp[i] = 'U';
		}
		dna += temp.substr(0,temp.length());
	}

	//cout << dna << endl;

	for(int j = 0; j<dna.length(); j+=1)
	{
		//cout << "test";
		string ttemp;
		ttemp = dna.substr(j,3);
		if(ttemp == "AUG")
		{
			bool flag = false;
			for(int i=j; i<dna.length(); i+=3)
			{
				temp = dna.substr(i,3);
				result += r(temp);
				if(temp == "UAA")
				{
					flag = true;
					break;
				}
				if(temp == "UAG")
				{
					flag = true;
					break;
				}
				if(temp == "UGA")
				{
					flag = true;
					break;
				}
			}
			if(flag)
				cout << result << endl;
			result = "";
		}
	}

	string tttemp = dna;
	for(int i=0; i<dna.length(); i++)
	{
		if(dna[dna.length()-1-i] == 'A')
			tttemp[i] = 'U';
		if(dna[dna.length()-1-i] == 'U')
			tttemp[i] = 'A';
		if(dna[dna.length()-1-i] == 'G')
			tttemp[i] = 'C';
		if(dna[dna.length()-1-i] == 'C')
			tttemp[i] = 'G';	
		tttemp[i] = dna.
	}
	
	
	return 0;
}

