/*
Leetcode 168: Excel Sheet Column Title
Day-10
*/


#include<bits/stdc++.h>
using namespace std;

string convertToTitle(int columnNumber)
{
	string str = "";
	while (columnNumber > 0)
	{
		str += 'A' + ((columnNumber - 1) % 26);
		columnNumber = (columnNumber - 1) / 26;
	}
	reverse(str.begin(), str.end());
	return str;
}

int main(){
	int num;
	cin>>num;
	cout<<endl<<convertToTitle(num);
	return 0;
}