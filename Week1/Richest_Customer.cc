/*
Leetcode 1672:Richest Customer Wealth
Day-2
*/
#include<bits/stdc++.h>
using namespace std;
int maximumWealth(vector<vector<int> > &accounts)
{
	int max1 = 0, sum = 0;
	for (int i = 0; i < accounts.size(); i++)
	{
		for (int j = 0; j < accounts[i].size(); j++)
		{
			sum += accounts[i][j];
		}
		max1 = max(max1, sum);
		sum = 0;
	}
	return max1;
}

int main()
{
	int n,m, value;
	cin >> n>>m;
	vector<vector<int> > a(n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> value;
			a[i].push_back(value);
		}
	}
	cout << maximumWealth(a);
	return 0;
}