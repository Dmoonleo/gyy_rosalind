#include <iostream>
using namespace std;

string getDNA()
{
	string result = "";
	char p;
	while(cin >> p)
		if(p=='>') break;
	getline(cin, result);
	result = "";
	while(true)
	{
		cin >> ws;
		if(!cin || cin.peek() == '>') break;
		else
		{
			string temp;
			cin >> temp;
			result += temp;
		}
	}
	return result;
}

int main()
{
	string temp;
	string a;
	string b;
	a = getDNA();
	b = getDNA();
	int i = 0;
	while(i < b.length())
	{
		for(int j=i; j<a.length(); j++)
		{
			if(b[i] == a[j])
			{
				cout << j+1 << " ";
				i++;
			}	
		}
	}
}