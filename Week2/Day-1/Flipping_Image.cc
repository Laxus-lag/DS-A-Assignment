/*
Leetcode 832:Flipping an Image
Day-6
*/
#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > flipAndInvertImage(vector<vector<int> > &image)
{
	int n = image.size();
	int m = image[0].size();
	vector<vector<int> > res(n, vector<int>(m));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			res[i][m - 1 - j] = 1 ^ image[i][j];
		}
	}
	return res;
}

int main()
{
	int n, m, value;
	cin >> n >> m;
	vector<vector<int> > a(n, vector<int>(m));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> value;
			a[i][j] = value;
		}
	}
	a = flipAndInvertImage(a);
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}