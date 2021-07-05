/*
Leetcode 349:Intersection of Two Arrays
Day-2
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{
	vector<int> res;
	set<int> s;
	for (int i = 0; i < nums1.size(); i++)
	{
		if (find(nums2.begin(), nums2.end(), nums1[i]) != nums2.end())
			s.insert(nums1[i]);
	}
	set<int>::iterator itr;
	for (itr =s.begin() ;itr!=s.end() ;itr++)
		res.push_back(*itr);
	return res;
}
int main(){
	int n,m,value;
	vector<int> a,b;
	cin >>n;
	for(int i=0;i<n;i++){
		cin>>value;
		a.push_back(value);
	}
	cin>>m;
	for (int i = 0; i < m; i++)
	{
		cin >>value;
		b.push_back(value);
	}
	a = intersection(a,b);
	for(int i=0;i<a.size();i++){
		cout<<a[i]<<" ";
	}
	return 0;
}