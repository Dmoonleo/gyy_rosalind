#include <iostream>
using namespace std;

int main()
{
	string label[10];
	string dna[10];
	int cg[10];
	for(int i=0; i<10; i++)
	{
		cg[i] = 0;
	}
	double p[10];
	int index = 0;
	
	string temp = "";
	int count = -1;
	while(cin >> temp)
	{
		if(temp[0] == '>')
		{
			count++;
			label[count] = temp.substr(1);	
		}
		else
			dna[count]+=temp;
	}

	for(int i=0; i<10; i++)
	{
		for(int j=0; j<dna[i].length(); j++)
		{
			if(dna[i][j] == 'C' || dna[i][j] == 'G')
				cg[i]++;
		}
		p[i] = cg[i]*1.0/dna[i].length();
	}

	double high = 0;
	int h = 0;
	for(int i=0; i<10; i++)
	{
		if(p[i] >= high)
		{
			high = p[i];
			h = i;
		}
	}

	for(int i=0; i<10; i++)
	{
		//cout << label[i] << endl;
		//cout << endl;
		//scout << "p  : " << p[i] << endl;
		//scout << "dna: " << dna[i].length() << endl;
		//scout << "cg : " << cg[i] << endl;
	}
	cout << label[h] << endl;
	cout << high*100 << endl;

	return 0;
}