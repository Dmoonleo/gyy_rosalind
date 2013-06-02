#include <iostream>
using namespace std;

int main()
{
	int A = 0;
	int C = 0;
	int G = 0;
	int T = 0;

	string S;
	while(cin >> S)
	{
		for(int _i=0;_i<=S.length();_i++)
		{
			if(S[_i] == 'A')
				A++;
			if(S[_i] == 'C')
				C++;
			if(S[_i] == 'G')
				G++;
			if(S[_i] == 'T')
				T++;
		}
	}

	

	cout << A << " " << C << " " << G << " " << T << endl;
	return 0;
}