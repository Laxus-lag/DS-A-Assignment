/*
Leetcode 1431:Kids With the Greatest Number of Candies
Day-2
*/
#include<bits/stdc++.h>
using namespace std;
vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
{
	int n = candies.size();
	int max1 = *max_element(candies.begin(), candies.end());
	vector<bool> res;
	for (int i = 0; i < n; i++)
	{
		if (candies[i] + extraCandies >= max1)
		{
			res.push_back(true);
		}
		else
			res.push_back(false);
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
	cin>>value;
	vector<bool>res;
	res= kidsWithCandies(a, value);
	for (int i = 0; i < a.size(); i++)
	{
		if(res[i] ==1)
			cout <<"true"<< " ";
		else
			cout<<"false"<<" ";
	}
	return 0;
}
