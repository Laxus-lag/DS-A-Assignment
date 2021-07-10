
#include <bits/stdc++.h>
using namespace std;

bool isConsonant(char ch)
{
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
		ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
	{
		return true;
	}
	return false;
}

/*		ON STRING DIRECTLY*/
string reverseConsonants(string s)
{
	int l = 0, r = s.size() - 1;
	while (l < r)
	{
		// cout << s[l] << " " << s[r] << endl;
		while (l < r && isConsonant(s[l]))
			l++;
		while (l < r && isConsonant(s[r]))
			r--;

		char ch = s[l];
		s[l] = s[r];
		s[r] = ch;
		l++;
		r--;
	}
	return s;
}

/*		BY NEW VECTOR		*/
string reverseConsonants(string s)
{
	vector<char> Consonants;
	int k = 0;
	for (int i = 0; i < s.size(); i++)
		if (!isConsonant(s[i]))
			Consonants.push_back(s[i]);
	reverse(Consonants.begin(), Consonants.end());
	for (int i = 0; i < s.size(); i++)
		if (!isConsonant(s[i]))
			s[i] = Consonants[k++];
	return s;
}

int main()
{
	string s;
	cin >> s;
	cout << endl
		 << reverseConsonants(s);
	return 0;
}