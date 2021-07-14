/*
Leetcode 231: Power of Two
Day-12
*/

#include<bits/stdc++.h>
using namespace std;

string func(string x, int y){
	float a=0,b=0;
	int i=x.find('.')-1,k=0;
	while(i>=0){
		// cout << pow(y, k) * (x[i] - '0');
		a += pow(y, k) * (x[i] - '0'),
			k++,i--;
	}
	i = x.find('.') + 1,k=-1;
	while(i<x.size())
		b+=pow(y,k)*(x[i]-'0'),i++,k--;
	cout<<endl<<x.size()<<" " <<a<<" "<<b;
	x = to_string(a + b) ;
	return x;
}

int main(){
	string n;
	int m;
	cin>>n;
	cin>>m;
	cout<<endl<<func(n,m);
	return 0;
}