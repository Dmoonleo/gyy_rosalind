#include <iostream>
using namespace std;

int main()
{
	string result;
	string S;
	while(cin >> S)
	{
		for(int _i=S.length()-1;_i>=0;_i--)
		{
			if(S[_i] == 'A')
				result += "T";
			if(S[_i] == 'C')
				result += "G";
			if(S[_i] == 'G')
				result += "C";
			if(S[_i] == 'T')
				result += "A";
		}

	}

	

	cout << result << endl;
	return 0;
}