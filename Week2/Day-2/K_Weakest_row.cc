/*
Leetcode 1337 :The K Weakest Rows in a Matrix
Day-7
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> kWeakestRows(vector<vector<int> > &mat, int k)
{
	vector<pair<int, int> > mp;
	int n = mat.size();
	int m = mat[0].size();
	for (int i = 0; i < n; i++)
	{
		if (mat[i][0] == 0)
		{
			mp.push_back(make_pair(0, i));
		}
		else if (mat[i][m - 1] == 1)
		{
			mp.push_back(make_pair(m, i));
		}
		else
		{
			int l = 0, r = m - 1, mid;
			while (l <= r)
			{
				mid = l + (r - l) / 2;
				if (mid > 0 && mat[i][mid] == 0 && mat[i][mid - 1] == 1)
				{
					cout << mid << " ";
					mp.push_back(make_pair(mid, i));
					break;
				}
				if (mat[i][mid] == 1)
					l = mid + 1;
				if (mat[i][mid] == 0)
					r = mid - 1;
			}
		}
	}
	sort(mp.begin(), mp.end());
	vector<int> res(k);
	int i = 0;
	for (auto &x : mp)
	{
		// cout<<x.first<<" "<<x.second<<endl;
		if (i < k)
			res[i++] = x.second;
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
	cin>>value;
	vector<int>v;
	v = kWeakestRows(a,value);
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << v[i] << " ";
	}
	return 0;
}