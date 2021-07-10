/*
leetcode 463 :Island Perimeter
Day-
*/

#include<bits/stdc++.h>
using namespace std;
int islandPerimeter(vector<vector<int> > &grid)

{
	int res = 0;
	for (int i = 0; i < grid.size(); i++)
	{
		for (int j = 0; j < grid[i].size(); j++)
		{
			if (grid[i][j] == 1)
			{
				res = res + 4;
				if (i > 0 && grid[i - 1][j] == 1)
					res = res - 2;
				if (j > 0 && grid[i][j - 1] == 1)
					res = res - 2;
			}

			// cout<<res;
		}
		// cout<<endl;
	}
	return res;
}
int main(){
	int n,value;
	cin>>n;
	vector<vector<int> > a(n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>value;
			a[i].push_back(value);
		}
	}
	cout << islandPerimeter(a);
	return 0;
}