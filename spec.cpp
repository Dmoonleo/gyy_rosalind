#include <iostream>
using namespace std;

double mass(char temp)
{
	if(temp == 'A')
		return 71.03711;
	if(temp == 'C')
		return 103.00919;
	if(temp == 'D')
		return 115.02694;
	if(temp == 'E')
		return 129.04259;
	if(temp == 'F')
		return 147.06841;
	if(temp == 'G')
		return 57.02146;
	if(temp == 'H')
		return 137.05891;
	if(temp == 'I')
		return 113.08406;
	if(temp == 'K')
		return 128.09496;
	if(temp == 'M')
		return 131.04049;
	if(temp == 'N')
		return 114.04293;
	if(temp == 'P')
		return 97.05276;
	if(temp == 'Q')
		return 128.05858;
	if(temp == 'R')
		return 156.10111;
	if(temp == 'S')
		return 87.03203;
	if(temp == 'T')
		return 101.04768;
	if(temp == 'V')
		return 99.06841;
	if(temp == 'W')
		return 186.07931;
	if(temp == 'Y')
		return 163.06333;
}
char A[20] = {'A','C', 'D', 'E', 'F', 'G','H', 'I', 'K', 'M', 'N', 'P','Q', 'R', 'S','T', 'V','W', 'Y'};

double abs(double a)
{
	return a>0?a:-a;
}

int main()
{
	double T[100];
	int count = 0;
	while(cin >> T[count])
	{
		count++;
	}
	for(int i=0;i<count;i++)
	{
		T[i] = T[i+1]-T[i];
	}
	for(int i=0; i<count-1; i++)
	{
		for(int j=0; j<20; j++)
		{
			if(abs(T[i]-mass(A[j]))<0.00001)
			{
				cout << A[j];
			}
		}
		//cout << endl;
	}
	return 0;
}
