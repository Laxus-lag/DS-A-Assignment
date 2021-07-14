/*
Leetcode 231: Power of Two
Day-12
*/

#include <bits/stdc++.h>
using namespace std;
/*		Right Shift		*/
bool isPowerOfTwo(int n)
{
	if (n == 0)
		return false;
	while (n > 1 && (n & 1) == 0)
		n = n >> 1;
	return n == 1;
}
/*		By Log		+*/
bool isPowerOfTwo(int n)
{
	if (n == 0)
		return false;
	return ceil(log2(n)) == floor(log2(n));
}