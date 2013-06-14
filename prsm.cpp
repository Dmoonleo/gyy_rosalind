#include <algorithm>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

double mass(char temp)
{
	if(temp == 'A')
		return 71.03711;
	if(temp == 'C')
		return 103.00919;
	if(temp == 'D')
		return 115.02694;
	if(temp == 'E')
		return 129.04259;
	if(temp == 'F')
		return 147.06841;
	if(temp == 'G')
		return 57.02146;
	if(temp == 'H')
		return 137.05891;
	if(temp == 'I')
		return 113.08406;
	if(temp == 'K')
		return 128.09496;
	if(temp == 'M')
		return 131.04049;
	if(temp == 'N')
		return 114.04293;
	if(temp == 'P')
		return 97.05276;
	if(temp == 'Q')
		return 128.05858;
	if(temp == 'R')
		return 156.10111;
	if(temp == 'S')
		return 87.03203;
	if(temp == 'T')
		return 101.04768;
	if(temp == 'V')
		return 99.06841;
	if(temp == 'W')
		return 186.07931;
	if(temp == 'Y')
		return 163.06333;
}
char A[20] = {'A','C', 'D', 'E', 'F', 'G','H', 'I', 'K', 'M', 'N', 'P','Q', 'R', 'S','T', 'V','W', 'Y'};

int main()
{
	double r[6];
	r[0] = 445.17838;
	r[1] = 115.02694;
	r[2] = 186.07931;
	r[3] = 314.13789;
	r[4] = 317.1198;
	r[5] = 215.09061;
	int n;
	//cin>>n;
	string str;
	str = "IASWMQS";
	double *pre,*suf;
	int length = str.length();
	pre = new double[length];
	suf = new double[length - 1];
	double temp = 0.0;
	cout<<length<<endl;
	for(int k = 0;k<length;k++)
	{
		pre[k] = temp + mass(str[k]);
		temp  = pre[k];
	}
	temp = 0.0;
	for(int k = length-1;k>0;k--)
	{
		suf[k-1] = temp + mass(str[k]);
		cout<<str[k];
	}
	int result_len = (2*n-1)*6;
	cout<<result_len<<endl;
	int index = 0;
	double *result = new double[result_len];
	for(int k = 0;k<6;k++)
	{
		for(int j = 0;j<length;j++)
		{
			result[index] = r[k] - pre[j];
			index++;
		}
	}
	cout<<"1"<<endl;
	for(int k = 0;k<6;k++)
	{
		for(int j = 0;j<length-1;j++)
		{
			result[index] = r[k] - suf[j];
			index++;
		}
	}
	double* answer = new double[result_len];
	double* answer_count = new double[result_len]; 
	for(int i=0; i<result_len; i++)
	{
		answer[i] = 0;
	}

	for(int i=0; i<result_len; i++)
	{
		answer_count[i] = 0;
	}

	int answer_length = 0;

	for(int i=0; i<result_len; i++)
	{
		bool flag = true;
		for(int j=0; j<answer_length; j++)
		{
			if(result[i] - answer[j] < 0.001 && result[i] - answer[j] > -0.001)
			{
				flag == false;
				answer_count[i]++;
			}
		}
		if(flag)
		{
			answer[answer_length] = result[i];
			answer_count[answer_length]++;	
			answer_length++;
		}
	}

	int max = 0;
	for(int i=0; i<result_len; i++)
	{
		if(answer_count[i] > max)
			max = answer_count[i];
	}
	cout<<max<<endl;
}