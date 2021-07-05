/*
Leetcode 867:Transpose Matrix
Day-6
*/
#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > transpose(vector<vector<int> > &matrix)
{
	int n = matrix.size();
	int m = matrix[0].size();
	vector<vector<int> > mat(m, vector<int>(n));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			mat[j][i] = matrix[i][j];
		}
	}
	return mat;
}
int main(){
	int n,m, value;
	cin >> n>>m;
	vector<vector<int> > a(n,vector<int>(m));
	for (int i = 0; i < n; i++)
	{
		for(int j=0;j<m;j++)
		{
			cin >> value;
			a[i][j] = value;
		}
		
	}
	a = transpose(a);
	cout<<endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}