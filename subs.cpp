#include <iostream>
using namespace std;

int main()
{
	string A;
	string B;
	cin >> A >> B;
	for(int i=0; i<A.length()-B.length()+1; i++)
	{
		if(A.substr(i,B.length()) == B)
			cout << i+1 << " ";
	}
	cout << endl;
	return 0;
}