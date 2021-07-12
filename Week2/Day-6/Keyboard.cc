/*
Leetcode 500: Keyboard Row
Day-11
*/

#include<bits/stdc++.h>
using namespace std;
vector<string> findWords(vector<string> &words)
{
	vector<string> res;
	vector<int> alpha{2, 3, 3, 2, 1, 2, 2, 2, 1, 2, 2, 2, 3, 3, 1, 1, 1, 1, 2, 1, 1, 3, 1, 3, 1, 3};
	for (int i = 0; i < words.size(); i++)
	{
		int f = 1;
		int temp = alpha[tolower(words[i][0]) - 'a'];
		for (int j = 0; j < words[i].size(); j++)
		{
			if (temp != alpha[tolower(words[i][j]) - 'a'])
			{
				f = 0;
				break;
			}
		}
		if (f)
			res.push_back(words[i]);
	}
	return res;
}

int main(){
	int n;
	cin>>n;
	vector<string>v;
	for (int i = 0; i < n; i++)
	{
		cin>>v[i];
	}
	v=findWords(v);
	for (int i = 0; i < v.size(); i++)
	{
		cout<<v[i]<<" ";
	}
}