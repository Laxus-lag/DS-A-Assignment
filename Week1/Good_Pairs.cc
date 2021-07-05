/*
Leetcode 1512:Number of Good Pairs
Day-2
*/
#include<bits/stdc++.h>
using namespace std;
int numIdenticalPairs(vector<int> &nums)
{
	int n = nums.size(), res = 0;
	int max1 = *max_element(nums.begin(), nums.end());
	vector<int> count(max1, 0);
	for (int i = 0; i < n; i++)
		count[--nums[i]]++;
	for (int i = 0; i < max1; i++)
	{
		if (count[i] > 1)
			res += (count[i] * (--count[i]) / 2);
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
	cout<<numIdenticalPairs(a);
	return 0;
}