/*
Leetcode 1720:Decode XORed Array
Day-3
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> decode(vector<int> &encoded, int first)
{
	int n = encoded.size();
	vector<int> arr(n + 1);
	arr[0] = first;
	for (int i = 0; i < n; i++)
	{
		arr[i + 1] = arr[i] ^ encoded[i];
	}
	return arr;
}
int main(){
	int n, value;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> value;
		a[i] = value;
	}
	cin>>value;//first of arr
	a = decode(a,value);
	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}