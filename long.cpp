#include <iostream>
#include "_library.h"
using namespace std;

int min(int a, int b)
{
	return a<b?a:b;
}

int max(int a, int b)
{
	return a>b?a:b;
}

string hms(string a, string b)
{
	int la = a.length();
	int lb = b.length();
	for(int i=lb/2; i<min(la,lb); i++)
	{
		if(a.substr(la-i,i) == b.substr(0,i))
		{
			return a+b.substr(i);
		}

	}
	return "false!";
}

bool halfmatch(string a, string b)
{
	int la = a.length();
	int lb = b.length();
	for(int i=max(la/2,lb/2); i<min(la,lb); i++)
	{
		if(a.substr(la-i,i) == b.substr(0,i))
			return true;
	}
	return false;
}

int main()
{
	int size = 0;
	string DNA[50];
	for(int i=0; i<50; i++)
	{
		DNA[i] = getDNA();
		//cout << DNA[i] << endl;
	}
	for(int i=0; i<50; i++)
	{
		if(DNA[i].length() != 0)
		{
			size = i+1;
		}
		else
			break;
	}
	cout << size << endl;
	for(int i=0; i<50; i++)
	{
		//cout << DNA[i] << endl;
	}
	string result[50];

	int* begin = new int[size];
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<size; j++)
		{
			if(halfmatch(DNA[i], DNA[j]))
				begin[j] = -2;
		}
	}
	int b = -1;
	for(int i=0; i<size; i++)
	{
		if(begin[i] != -2)
			b = i;
	}
	cout << "b: " << b << endl;
	string r = DNA[b];
	bool flag = true;
	int ii = b;
	while(ii != b || flag)
	{
		flag = false;
		for(int j=0; j<size; j++)
		{
			cout << "test" << ii << " " << j << endl;
			if(halfmatch(DNA[ii], DNA[j]))
			{
				result[ii] = hms(result[ii],DNA[j]);
				ii = j;
				break;
			}		
		}
	}
	/*for(int i=0; i<size; i++)
	{
		int ii = i;
		result[ii] = DNA[i];
		bool flag = true;
		while(ii != i || flag)
		{
			flag = false;
			for(int j=0; j<size; j++)
			{
				cout << "test" << ii << " " << j << endl;
				if(halfmatch(DNA[ii], DNA[j]))
				{
					result[ii] = hms(result[ii],DNA[j]);
					ii = j;
					break;
				}		
			}
		}
	}*/

		for(int i=0; i<size; i++)
		{
			cout << result[i].length() << endl;
		}

		for(int i=0; i<size; i++)
		{
			for(int j=0; j<size; j++)
			{
				if(halfmatch(DNA[i], DNA[j]))
					cout << i << " " << j << endl;
			}
		}
		return 0;
	}