/*
Leetcode 342: Power of Four
*/
#include <bits/stdc++.h>
using namespace std;
/*      Brute Force     */
   
    bool isPowerOfFour(int n) {
       if(n<=0)
           return false;
        while(n!=0)
       {
           if(n ==1)
               return true;
           if(n%4!=0)
               return false;
           n/=4;
       }
        return true;
    }
	/*      Right Shift     */
    bool isPowerOfFour(int n) {
        int count=0;
        if(n<=0)
           return false;
        while(!(n&1))
        {
            n=n>>1;
            // cout<<n<<" "<<count<<endl;
            count++;
        }
        // cout<<n<<" "<<count<<endl;
        if(count%2==0 && n==1)
            return true;
        return false;
    }