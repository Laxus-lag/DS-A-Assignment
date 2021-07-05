/*
Leetcode 1389:Create Target Array in the Given Order
Day-3
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n=nums.size();
        vector <int>res;
        for(int i=0;i<n;i++){
            res.insert(res.begin()+index[i],nums[i]);
        }
        return res;
}
int main()
{
	int n, value;
	cin >> n;
	vector<int> a(n),b(n);
	for (int i = 0; i < n; i++)
	{
		cin >> value;
		a[i] = value;
	}
	for (int i = 0; i < n; i++)
	{
		cin >> value;
		b[i] = value;
	}
	a = createTargetArray(a, b);
	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}