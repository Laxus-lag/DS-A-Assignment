/*
Leetcode 733:Flood Fill
Day-6
*/
#include<bits/stdc++.h>
using namespace std;
void dfs(vector<vector<int> > &image, int sr, int sc, int c, int key)
{
	int n = image.size();
	int m = image[0].size();
	image[sr][sc] = c;
	if (sr + 1 < n && image[sr + 1][sc] == key)
		dfs(image, sr + 1, sc, c, key);
	if (sr - 1 >= 0 && image[sr - 1][sc] == key)
		dfs(image, sr - 1, sc, c, key);
	if (sc + 1 < m && image[sr][sc + 1] == key)
		dfs(image, sr, sc + 1, c, key);
	if (sc - 1 >= 0 && image[sr][sc - 1] == key)
		dfs(image, sr, sc - 1, c, key);
	return;
}
vector<vector<int> > floodFill(vector<vector<int>> &image, int sr, int sc, int newColor)
{
	if (image[sr][sc] == newColor)
		return image;
	int key = image[sr][sc];
	dfs(image, sr, sc, newColor, key);
	return image;
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
	int sr,sc,newColor;
	cin>>sr>>sc>>newColor;
	a=floodFill(a,sr,sc,newColor);
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout << endl;
	}
	return 0;
}