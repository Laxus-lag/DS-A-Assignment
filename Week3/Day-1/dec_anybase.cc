#include <bits/stdc++.h>
using namespace std;

string func(float x, int y)
{
	string res;
	vector<float> freq;
	int i = x, k = 0;
	float a = x - i;
	while (i != 0)
		res += to_string(i % y), i /= y;
	reverse(res.begin(), res.end());
	res += '.';
	while (k != 5)
	{
		freq.push_back(a);
		k++;
		i = a * y;
		a = a * y - i;
		res += to_string(i);
		if (find(freq.begin(), freq.end(), a) != freq.end())
			break;
	}
	return res;
}
int main()
{
	float n;
	int m;
	cin >> n;
	cin >> m;
	cout << endl
		 << func(n, m);
	return 0;
}