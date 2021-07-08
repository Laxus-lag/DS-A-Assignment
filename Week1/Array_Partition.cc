/*
Leetcode 561: Array Partition I
Day-4
*/

#include<bits/stdc++.h>
using namespace std;

int arrayPairSum(vector<int> &nums)
{
	sort(nums.begin(), nums.end());
	int res = 0;
	for (int t = 0; t < nums.size(); t += 2)
		res += nums[t];
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
	cout << endl<< arrayPairSum(a);
}