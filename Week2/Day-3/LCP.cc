/*
Leetcode 14: Longest Common Prefix
Day-8
*/

#include <bits/stdc++.h>
using namespace std;

/*     Approach 1: Sorting                                     */
string longestCommonPrefix(vector<string> &strs)
{
	sort(strs.begin(), strs.end());
	int n = strs.size();
	int i = 0;
	string res = "";
	while (i < strs[0].size() && i < strs[n - 1].size() && strs[0].at(i) == strs[n - 1].at(i))
	{
		res += strs[0].at(i);
		i++;
	}
	return res;
}

/*        Approach 2: Search                                 */
string longestCommonPrefix(vector<string> &strs)
{
	// sort(strs.begin(),strs.end());
	int n = strs.size();
	int i = 0;
	string res = strs[0];
	for (int i = 1; i < strs.size(); i++)
	{
		int j = 0;
		while (j < strs[i].size() && j < res.size() && res.at(j) == strs[i].at(j))
			j++;
		res = res.substr(0, j);
		// cout<<res<<" ";
	}
	return res;
}

/*       Approach 3: divide and conquer                                     */
string common(string s1, string s2)
{
	int m = min(s1.size(), s2.size());
	for (int i = 0; i < m; i++)
	{
		if (s1.at(i) != s2.at(i))
			return s1.substr(0, i);
	}
	return s1.substr(0, m);
}
string find_common(vector<string> &strs, int l, int r)
{
	if (l == r)
		return strs[l];
	int mid = l + (r - l) / 2;
	string s1 = find_common(strs, l, mid);
	string s2 = find_common(strs, mid + 1, r);
	return common(s1, s2);
}

string longestCommonPrefix(vector<string> &strs)
{
	// sort(strs.begin(),strs.end());
	int n = strs.size();
	return (find_common(strs, 0, n - 1));
}