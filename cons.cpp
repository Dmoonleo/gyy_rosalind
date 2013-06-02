#include <iostream>
using namespace std;

int max(int a, int b)
{
	return a>b?a:b;
}

int max(int a, int b, int c, int d)
{
	return max(d,(max(c,max(a,b))));
}

int main()
{
	string dna[10];
	int index = -1;
	string temp;
	while(cin >> temp)
	{
		if(temp[0] != '>')
			dna[index] += temp;
		else 
			index++;
	}

	int length = dna[1].length();
	int* A = new int[length];
	int* C = new int[length];
	int* G = new int[length];
	int* T = new int[length];
	for(int _i=0; _i<10; _i++)
	{
		for(int i=0; i<dna[_i].length(); i++)
		{
			if(dna[_i][i] == 'A')
				A[i]++;	
			if(dna[_i][i] == 'C')
				C[i]++;
			if(dna[_i][i] == 'G')
				G[i]++;
			if(dna[_i][i] == 'T')
				T[i]++;
		}
	}

	string result;
	for(int i=0; i<length; i++)
	{
		if(max(A[i], C[i], G[i], T[i]) == A[i])
			result += 'A';
		else if(max(A[i], C[i], G[i], T[i]) == G[i])
			result += 'G';
		else if(max(A[i], C[i], G[i], T[i]) == C[i])
			result += 'C';
		else if(max(A[i], C[i], G[i], T[i]) == T[i])
			result += 'T';
	}
	cout << result << endl;

	cout << "A:";
	for(int i=0; i<length; i++)
	{
		cout << " " << A[i];
	}
	cout << endl;

	cout << "C:";
	for(int i=0; i<length; i++)
	{
		cout << " " << C[i];
	}
	cout << endl;

	cout << "G:";
	for(int i=0; i<length; i++)
	{
		cout << " " << G[i];
	}
	cout << endl;
	
	cout << "T:";
	for(int i=0; i<length; i++)
	{
		cout << " " << T[i];
	}
	cout << endl;
}