/*
Leetcode 1861:Truncate Sentence
Day-3
*/
#include<bits/stdc++.h>
using namespace std;
string truncateSentence(string s, int k)
{
	string res = "";
	if (s.length() == 0)
	{
		return res;
	}
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == ' ')
		{
			k--;
			if (k != 0)
				res += ' ';
			else
				break;
		}
		else
			res += s[i];
	}
	// cout<<res;
	return res;
}
int main()
{
	int k;
	string s;
	getline(cin,s);
	fflush(stdin);
	cin>>k;
	s=truncateSentence(s,k);
	cout<<s;
	return 0;
}