/*
Leetcode 821: Shortest Distance to a Character
Day-11
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> shortestToChar(string s, char c)
{
	vector<int> ans(s.size(), INT_MAX);
	vector<int> index;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == c)
		{
			index.push_back(i);
			ans[i] = 0;
		}
	}
	for (int i = 0; i < s.size(); i++)
	{
		for (int j = 0; j < index.size(); j++)
		{
			ans[i] = min(ans[i], abs(index[j] - i));
		}
	}
	return ans;
}
int main(){
	string s;
	cin>>s;
	char c;
	cin>>c;
	vector<int >a=shortestToChar(s,c);
	for(int i=0;i<a.size();i++)
		cout<<a[i]<<" ";
	return 0;
}