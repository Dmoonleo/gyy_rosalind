#include <iostream>
using namespace std;

int main()
{
	int n;
	int k;
	cin >> n >> k;
	long long T[50];
	T[0] = 1;
	T[1] = 1;
	for(int i=2; i<51; i++)
	{
		T[i] = T[i-1]+k*T[i-2];
		//cout << T[i] << endl;
	}
	cout << T[n-1] << endl;
}
