/*
Leetcode 1051: Height Checker
*/

#include<bits/stdc++.h>
using namespace std;

int heightChecker(vector<int> &heights)
{
	vector<int> temp(heights);
	int res = 0;
	sort(heights.begin(), heights.end());
	for (int i = 0; i < heights.size(); i++)
	{
		if (heights[i] != temp[i])
			res++;
	}
	return res;
}

int main()
{
	int n, value;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> value;
		a[i] = value;
	}
	cout << endl
		 << heightChecker(a);
}