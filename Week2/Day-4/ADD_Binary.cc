/*
Leetcode 67: Add Binary
Day-9
*/
#include<bits/stdc++.h>
using namespace std;
string addBinary(string a, string b) {
        int i=a.length()-1;
        int j=b.length()-1;
        int carry=0;
        string res="";
        while(i>=0 || j>=0 )
        {
            int x,y;
            if(i>=0)
                x=a[i--]-'0';
            else
                x=0;
            if(j>=0)
                y=b[j--]-'0';
            else
                y=0;
            res+=to_string(x^y^carry);
            carry=(carry&x) | (carry&y) |(x&y) ;
        }
        if(carry >0)
            res+=to_string(carry);
        reverse(res.begin(),res.end());
        // cout<<res;
        return res;
    }

int main(){
	string s1,s2;
	cin>>s1>>s2;
	cout << endl<<addBinary(s1,s2);
	return 0;
}