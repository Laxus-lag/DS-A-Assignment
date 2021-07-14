/*
Leetcode 401: Binary Watch
*/
#include <bits/stdc++.h>
using namespace std;
int func(int x)
    {
        int count =0;
        while(x!=0)
        {
            count++;
            x=x&(x-1);
        }
        return count;
    }
    
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> res;
        vector<int>hr{0,1,1,2,1,2,2,3,1,2,2,3};
        vector<int>min(hr);
        for(int i=12;i<60;i++){
            int count=func(i);
           min.push_back(count); 
        }
        for(int i=0;i<12;i++)
        {
            for(int j=0;j<60;j++)
            {
                if(hr[i]+min[j] ==turnedOn)
                {
                    string n=to_string(i);
                    if(j<10)
                        n+=":0"+to_string(j);
                    else
                        n+=":"+to_string(j);
                    res.push_back(n);
                }
            }
        }
        return res;
    }