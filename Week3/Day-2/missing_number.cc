/*
Leetcode 268: Missing Number
*/
#include <bits/stdc++.h>
using namespace std;
/*      Brute Force     */
int missingNumber(vector<int> &nums)
{
    for (int i = 0; i <= nums.size(); i++)
    {
        int f = 1;
        for (int j = 0; j < nums.size(); j++)
        {
            if (i == nums[j])
            {
                f = 0;
                break;
            }
        }
        if (f)
            return i;
    }
    return 0;
    }
   /*      Sorting     */
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
            if(i!=nums[i])
                return i;
        return nums.size();
    }
   /*      Sum of Natural Numbers     */
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++)
            sum+=nums[i];
        return (n*(n+1))/2-sum;
    }
