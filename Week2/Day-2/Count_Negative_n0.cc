/*
Leetcode 1351: Count Negative Numbers in a Sorted Matrix
Day-7
*/
#include<bits/stdc++.h>
using namespace std;
int countNegatives(vector<vector<int>> &mat)
{
	int n = mat.size();
	int m = mat[0].size();
	int res = 0;
	for (int i = 0; i < n; i++)
	{
		if (mat[i][0] < 0)
		{
			res += (m);
		}
		else if (mat[i][m - 1] >= 0)
		{
			res += 0;
		}
		else
		{
			int l = 0, r = m - 1, mid;
			while (l <= r)
			{
				mid = l + (r - l) / 2;
				if (mid > 0 && mat[i][mid] < 0 && mat[i][mid - 1] >= 0)
				{
					// cout<<mid<<" ";
					res += m - mid;
					break;
				}
				if (mat[i][mid] >= 0)
					l = mid + 1;
				if (mat[i][mid] < 0)
					r = mid - 1;
			}
		}
	}
	return res;
}

int main()
{
	int n, m, value;
	cin >> n >> m;
	vector<vector<int>> a(n, vector<int>(m));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> value;
			a[i][j] = value;
		}
	}
	cout<< endl<<countNegatives(a);

	return 0;
}