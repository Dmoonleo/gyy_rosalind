#include <iostream>
using namespace std;

int fac(int n)
{
	if (n == 0)
		return 1;
	else
		return fac(n-1)*n;
}

int main()
{
	int k,m,n;
	cin >> k >> m >> n;
	k = k+m+n;
	double result = 0;
	result += n*1.0/(k-1)*(n-1)/k;
	result += m*1.0/(k-1)*(m-1)/k*0.25;
	result += n*1.0/(k-1)*m/k*0.5*2;
	cout << 1-result << endl;
}