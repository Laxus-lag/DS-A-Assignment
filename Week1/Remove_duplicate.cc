/*
leetcode 26 :Remove Duplicates from Sorted Array
Day-1
*/

#include <bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int> &nums)
{
	// cout<<nums.size()<<endl;
	int k = 1;
	if (nums.size() <= 1)
		return nums.size();
	for (int i = 1; i < nums.size(); i++)
	{
		if (nums[i - 1] != nums[i])
		{
			nums[k++] = nums[i];
		}
	}
	nums.resize(k);
	
	return k;
}
int main()
{
	int n, value;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
			cin >> value;
			a[i]=value;
	}
	n=removeDuplicates(a);
	for(int i=0;i<n;i++){
		cout<<a[i]<<"  ";
	}
	return 0;
}