/*
Leetcode 819: Most Common Word
Day-11
*/

#include<bits/stdc++.h>
using namespace std;
string mostCommonWord(string paragraph, vector<string> &banned)
{
	unordered_map<string, int> count;
	int max = INT_MIN;
	for (int i = 0; i < paragraph.size(); i++)
	{
		string word;
		while (isalpha(paragraph[i]))
		{
			word += tolower(paragraph[i]);
			i++;
		}
		if (!(find(banned.begin(), banned.end(), word) != banned.end()) && word != "")
			count[word]++;
	}
	// for(auto &x:count)
	//     cout<<x.first<<" "<<x.second<<endl;
	string word;
	for (auto &x : count)
	{
		if (x.second > max)
		{
			word = x.first;
			max = x.second;
		}
	}
	return word;
}

int main(){
	string s;
	cin>>s;
	int n;
	cin>>n;
	vector<string> v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	cout<<endl<<mostCommonWord(s,v);
	return 0;
}