#include <iostream>
using namespace std;

int main()
{
	string A;
	string B;
	cin >> A >> B;
	int count = 0;
	for(int i=0; i<A.length(); i++)
	{
		if (A[i] != B[i])
			count++;
	}
	cout << count << endl;
}