/*
Leetcode 242: Valid Anagram
Day-10
*/

#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string s, string t)
{
	if (s.size() != t.size())
		return false;
	vector<int> count(26, 0);
	for (int i = 0; i < s.size(); i++)
	{
		count[s[i] - 'a']++;
	}
	for (int i = 0; i < t.size(); i++)
	{
		count[t[i] - 'a']--;
		if (count[t[i] - 'a'] == -1)
			return false;
	}
	for (auto x : count)
		if (x != 0)
			return false;
	return true;
}

int main(){
	string s1,s2;
	cin>>s1>>s2;
	cout<<endl<<isAnagram(s1,s2);
}