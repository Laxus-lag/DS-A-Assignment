/*
Day-1
*/

#include <bits/stdc++.h>
using namespace std;
int removeDuplicatesKeys(vector<int> &nums,int key)
{
	// cout<<nums.size()<<endl;
	int flag=1,k=0;
	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i]!=key || flag)
		{
			nums[k++] = nums[i];
			flag =0;
			// cout<<nums[i];
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
		a[i] = value;
	}
	cin>>value;
	n = removeDuplicatesKeys(a,value);
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "  ";
	}
	return 0;
}