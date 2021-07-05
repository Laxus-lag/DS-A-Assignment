/*
Leetcode 1313:Decompress Run-Length Encoded List
Day-3
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> decompressRLElist(vector<int> &nums)
{
	vector<int> res;
	for (int i = 0; i < nums.size(); i = i + 2)
	{
		int x = nums[i];
		while (x--)
		{
			res.push_back(nums[i + 1]);
		}
	}
	return res;
}

int main(){
	int n, value;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> value;
		a[i] = value;
	}
	a=decompressRLElist(a);
	for(int i=0;i<a.size();i++){
		cout<<a[i]<<" ";
	}
	return 0;
}