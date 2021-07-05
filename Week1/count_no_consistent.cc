/*
Leetcode 1684:Count the Number of Consistent Strings
Day-3
*/
#include<bits/stdc++.h>
using namespace std;

int countConsistentStrings(string allowed, vector<string> &words)
{
	vector<int> count(26, 0);
	int res = words.size();
	for (int i = 0; i < allowed.size(); i++)
		count[allowed[i] - 'a']++;
	for (int i = 0; i < words.size(); i++)
	{
		for (int j = 0; j < words[i].size(); j++)
		{
			if (count[words[i][j] - 'a'] == 0)
			{
				res--;
				break;
			}
		}
	}
	return res;
}
int main(){
	string s;
	int n;
	cin>>n;//no of elements
	vector<string> v;
	for(int i=0;i<n;i++){
		cin>>s;
		v.push_back(s);
	}
	cin>>s;//allowed sting
	cout << countConsistentStrings(s,v);
	return 0;
}