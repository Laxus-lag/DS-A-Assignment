/*
Leetcode 999: Available Captures for Rook
Day-6
*/
#include<bits/stdc++.h>
using namespace std;
int numRookCaptures(vector<vector<char> > &board)
{
	int res = 0, i = 0, j;
	for (i = 0; i < 64; i++)
		if (board[i / 8][i % 8] == 'R')
			break;
	j = i / 8;
	while (j < 8)
	{ //down
		if (board[j][i % 8] == 'p')
		{
			res++;
			break;
		}
		if (board[j][i % 8] == 'B')
			break;
		j++;
	}
	j = i / 8;
	while (j >= 0)
	{ //up
		if (board[j][i % 8] == 'p')
		{
			res++;
			break;
		}
		if (board[j][i % 8] == 'B')
			break;
		j--;
	}
	j = i % 8;
	while (j < 8)
	{ //right
		if (board[i / 8][j] == 'p')
		{
			res++;
			break;
		}
		if (board[i / 8][j] == 'B')
			break;
		j++;
	}
	j = i % 8;
	while (j >= 0)
	{ //left
		if (board[i / 8][j] == 'p')
		{
			res++;
			break;
		}
		if (board[i / 8][j] == 'B')
			break;
		j--;
	}
	return res;
}

int main()
{
	int n, m, value;
	cin >> n >> m;
	vector<vector<char> > a(n, vector<char>(m));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> value;
			a[i][j] = value;
		}
	}
	cout << endl;
	cout << numRookCaptures(a);
	return 0;
}