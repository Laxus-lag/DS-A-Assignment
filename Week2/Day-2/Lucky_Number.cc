/*
Leetcode 1380: Lucky Numbers in a Matrix
Day-7
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> luckyNumbers (vector<vector<int> >& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int> v(1);
        for(int i=0;i<n;i++){
            int r=INT_MAX;
            int c=INT_MIN;
            int k;
            for(int j=0;j<m;j++){
                if(r>matrix[i][j])
                {
                    r=matrix[i][j];
                    k=j;
                }
            }
            for(int j=0;j<n;j++)
                c=max(c,matrix[j][k]);
            // cout<<c<<" "<<r<<endl;
            if(r ==c)
                return {r};
        }
        return {};
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
	vector<int> v;
	v = luckyNumbers(a);
	cout << endl;
	for (int i = 0; v.size() < n; i++)
	{
		cout << v[i] << " ";
	}
	return 0;
}