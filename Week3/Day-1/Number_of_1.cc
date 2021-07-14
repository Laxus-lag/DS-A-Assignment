/*
Leetcode 191: Number of 1 Bits
Day-12
*/
#include <bits/stdc++.h>
using namespace std;
int hammingWeight(uint32_t n)
{
	int count = 0;
	while (n != 0)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}