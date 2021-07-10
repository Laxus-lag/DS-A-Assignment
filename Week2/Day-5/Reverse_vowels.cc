/*
Leetcode 345: Reverse Vowels of a String
Day-10 
*/
#include<bits/stdc++.h>
using namespace std;
bool isVowel(char ch)
{
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
		ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
	{
		return true;
	}
	return false;
}

/*		ON STRING DIRECTLY*/
string reverseVowels(string s)
{
	int l = 0, r = s.size();
	while (l < r)
	{
		while (l < r && !isVowel(s[l]))
			l++;
		while (l < r && !isVowel(s[r]))
			r--;
		char ch = s[l];
		s[l] = s[r];
		s[r] = ch;
		l++;
		r--;
	}
	return s;
}

/*		BY NEW VECTOR		*/
string reverseVowels(string s)
{
	vector<char> vowels;
	int k = 0;
	for (int i = 0; i < s.size(); i++)
		if (isVowel(s[i]))
			vowels.push_back(s[i]);
	reverse(vowels.begin(), vowels.end());
	for (int i = 0; i < s.size(); i++)
		if (isVowel(s[i]))
			s[i] = vowels[k++];
	return s;
}

int main(){
	string s;
	cin>>s;
	cout<<endl<<reverseVowels(s);
	return 0;
}