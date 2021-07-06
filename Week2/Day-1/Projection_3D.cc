/*
Leetcode 883 :Projection Area of 3D Shapes
Day-6
*/
#include<bits/stdc++.h>
using namespace std;
int projectionArea(vector<vector<int> > &grid)
{
	int n = grid.size();
	int m = grid[0].size();
	int res = m * n;
	for (int i = 0; i < n; i++)
	{
		int x = 0, y = 0;
		for (int j = 0; j < m; j++)
		{
			if (grid[i][j] == 0)
				res--;
			x = max(x, grid[i][j]); //row
			y = max(y, grid[j][i]); //columb
		}
		res += x + y;
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
	cout << endl;
	cout << projectionArea(a);
	return 0;
}