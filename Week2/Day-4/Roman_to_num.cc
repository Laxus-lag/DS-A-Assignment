/*
Leetcode 13: Roman to Integer
Day-9
*/

#include<bits/stdc++.h>
using namespace std;
int solve(char n)
{
	switch (n)
	{
	case 'I':
		return 1;
	case 'V':
		return 5;
	case 'X':
		return 10;
	case 'L':
		return 50;
	case 'C':
		return 100;
	case 'D':
		return 500;
	case 'M':
		return 1000;
	default:
		return 0;
	}
}

/*		LEFT TO RIGHT		*/
int romanToInt(string s)
{
	int res = 0;
	for (int i = 0; i < s.length(); i++)
	{
		// cout<<res<<" ";
		if (solve(s[i]) < solve(s[i + 1]))
		{
			res += solve(s[i + 1]) - solve(s[i]);
			i++;
		}
		else
			res += solve(s[i]);
	}
	return res;
}
/*		RIGHT TO LEFT		*/
int romanToInt(string s)
{
	int res = solve(s[s.size()-1]);
	for (int i = s.length()-2; i >= 0; i--)
	{
		// cout<<res<<" ";
		if (solve(s[i]) < solve(s[i + 1]))
			res -=solve(s[i]);
		else
			res += solve(s[i]);
	}
	return res;
}
int main(){
	string str;
	cin>>str;
	cout<<endl<<romanToInt(str);
	return 0;
}