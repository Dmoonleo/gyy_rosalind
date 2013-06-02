#include <iostream>
using namespace std;

int main()
{
	string result;
	string S;
	while(cin >> S)
	{
		for(int _i=0;_i<=S.length();_i++)
		{
			if(S[_i] == 'A')
				result += "A";
			if(S[_i] == 'C')
				result += "C";
			if(S[_i] == 'G')
				result += "G";
			if(S[_i] == 'T')
				result += "U";
		}

	}

	

	cout << result << endl;
	return 0;
}