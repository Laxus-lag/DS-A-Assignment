/*
Leetcode 125: Valid Palindrome
Day-10
*/
#include <bits/stdc++.h>
using namespace std;
/*		Inplace in same string		*/
bool isPalindrome(string s)
{
    int l = 0, r = s.size();
    while (l <= r)
    {
        cout << s[l] << " ";
        if (!isdigit(s[l]) && !isalpha(s[l]))
            l++;
        else if (!isalpha(s[r]) && !isdigit(s[r]))
            r--;
        else if (tolower(s[l]) == tolower(s[r]))
        {

            r--;
            l++;
            // cout<<s[l] ==s[r];
        }
        else
            return false;
    }
    return true;
}
/*		by new string		*/
bool isPalindrome(string s)
{
    int r = s.size();
    string res;
    for (int i = 0; i < r; i++)
        if (isalpha(s[i]) | isdigit(s[i]))
            res += tolower(s[i]);
    // cout<<res;
    r = res.size();
    for (int i = 0; i < res.size() - i; i++)
    {
        if (res[i] != res[r - i - 1])
            return false;
    }
    return true;
}
int main(){
    string str;
    cin>>str;
    cout<<endl<<isPalindrome(str);
    return 0;
}