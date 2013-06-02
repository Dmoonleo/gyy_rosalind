#include <iostream>
using namespace std;

int main()
{
	int A[6];
	for(int i=0; i<6; i++)
	{
		cin >> A[i];
	}
	int result = 0;
	result += A[0]*2;
	result += A[1]*2;
	result += A[2]*2;
	result += A[3]*1.5;
	result += A[4]*1;
	cout << result;
}