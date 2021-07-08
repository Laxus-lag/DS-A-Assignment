/*
Leetcode 1863: Sum of All Subset XOR Totals
Day-4
*/

#include<bits/stdc++.h>
using namespace std;

int dfs(vector<int> &nums, int n, int x)
{
	if (n == 0)
	{
		return x;
	}
	int sum1 = dfs(nums, n - 1, x ^ nums[n - 1]);
	int sum2 = dfs(nums, n - 1, x);
	return sum1 + sum2;
}
int subsetXORSum(vector<int> &nums)
{
	int n = nums.size();
	return (dfs(nums, n, 0));
}

int main()
{
	int n, value;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i <n; i++)
	{
		cin >> value;
		a[i] = value;
	}
	cout << endl
		 << subsetXORSum(a);
}