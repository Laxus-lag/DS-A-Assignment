/*
Leetcode 1365:How Many Numbers Are Smaller Than the Current Number
Day-3
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> smallerNumbersThanCurrent(vector<int> &nums)
{
	int n = *max_element(nums.begin(), nums.end()) + 1;
	vector<int> res(n, 0);
	for (int i = 0; i < nums.size(); i++)
	{
		res[nums[i]]++;
	}
	for (int i = 1; i < n; i++)
	{
		res[i] += res[i - 1];
	}
	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] != 0)
		{
			nums[i] = res[--nums[i]];
		}
		else
			nums[i] = 0;
	}
	return nums;
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
	a=smallerNumbersThanCurrent(a);
	for (int i = 0; i < n; i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}