/*
Leetcode 136: Single Number
Day-12
*/
#include<bits/stdc++.h>
using namespace std;
/*		Brute Force		*/
int singleNumber(vector<int>& nums) {
        int res;
        for(int i=0;i<nums.size();i++){
            int count=0;
            for(int j=0;j<nums.size();j++){
                if(nums[i] ==nums[j])
                    count++;
                if(count>1)
                    break;
            }
            if(count ==1)
                return nums[i];
        }
        return res;
    }

	/*		Sort		*/
	int singleNumber(vector<int> &nums)
	{
        sort(nums.begin(),nums.end());
        int res;
        for(int i=0;i<nums.size();i++){
            int count=0;
            res=nums[i];
            while(i<nums.size()-1&&nums[i]==nums[++i])
                count++;
            i-=1;
            if(count ==0)
                return res;
        }
        return 0;
    }
/*		EXOR		*/
int singleNumber(vector<int> &nums)
{
	for (int i = 1; i < nums.size(); i++)
		nums[0] ^= nums[i];
	return nums[0];
}