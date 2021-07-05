/*
Leetcode 1470: Shuffle the Array
Day-1
*/
#include<bits/stdc++.h>
using namespace std;

vector<int> shuffle(vector<int> &nums, int n)
{
	int low = 0, high = n;
	vector<int> res(nums.size());
	for (int i = 0; i < nums.size(); i = i + 2)
	{
		res[i] = nums[low++];
		res[i + 1] = nums[high++];
	}
	
	return res;
}
int main(){
	int n,value;
	cin>>n;
	vector<int> a(2*n);
	for(int i=0;i<2*n;i++){
		cin>>value;
		a[i]=value;
	}
	a = shuffle(a,n);
	for(int i=0;i<a.size();i++){
	    cout<<a[i]<<" ";
	}
	return 0;
}