#include <iostream>
using namespace std;

class prob{
public:
	double AA;
	double Aa;
	double aa;
	prob()
	{
		AA = 0.0;
		Aa = 0.0;
		aa = 0.0;
	}
};

prob cfp(prob a, prob b)
{
	prob result;
	result.AA += a.AA*b.AA;
	result.aa += a.aa*b.aa;
	result.Aa += a.AA*b.aa;
	result.Aa += a.aa*b.AA;
	
	result.AA += 0.5*a.AA*b.Aa;
	result.Aa += 0.5*a.AA*b.Aa;
	
	result.AA += 0.5*a.Aa*b.AA;
	result.Aa += 0.5*a.Aa*b.AA;

	result.aa += 0.5*a.aa*b.Aa;
	result.Aa += 0.5*a.aa*b.Aa;

	result.aa += 0.5*a.Aa*b.aa;
	result.Aa += 0.5*a.Aa*b.aa;

	result.AA += 0.25*a.Aa*b.Aa;
	result.Aa += 0.5*a.Aa*b.Aa;
	result.aa += 0.25*a.Aa*b.Aa;

	return result;
}

prob cal(string a)
{
	prob result;
	if(a.length() == 2)
	{
		if(a == "AA")
		{
			result.AA = 1;
			return result;
		}
		if(a == "Aa")
		{
			result.Aa = 1;
			return result;
		}			
		if(a == "aa")
		{
			result.aa = 1;
			return result;
		}
	}
	int l = a.length();
	int left = 0;

	for(int i=1; i<l-1; i++)
	{
		if(a[i] == '(')
			left++;
		if(a[i] == ')')
			left--;
		if(left == 0 && a[i] == ',')
		{
			return cfp(cal(a.substr(1, i-1)),cal(a.substr(i+1, l-i-2)));
		}
	}

	return result;
}

int main()
{
	string A = "";
	cin >> A;
	int l = A.length();
	A = A.substr(0, l-1);
	prob r = cal(A);
	cout << r.AA << " " << r.Aa << " " << r.aa << endl;
	return 0;
}
