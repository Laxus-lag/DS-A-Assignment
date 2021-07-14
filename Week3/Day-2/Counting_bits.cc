/*
Leetcode 338: Counting Bits
*/
#include <bits/stdc++.h>
using namespace std;
int func(int x)
{
	int count = 0;
	while (x != 0)
	{
		count++;
		x = x & (x - 1);
	}
	return count;
}
vector<int> countBits(int n)
{
	vector<int> res(n + 1);
	for (int i = 0; i <= n; i++)
		res[i] = func(i);
	return res;
}