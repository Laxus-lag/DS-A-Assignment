/*
Leetcode 20: Valid Parentheses
Day-9
*/
#include <bits/stdc++.h>
using namespace std;
/*		BY SWITCH-CASE		*/
bool isValid(string s)
{
	stack<char> st;
	st.push('$');
	int n = s.length();
	if (n % 2 != 0 || (s[0] == ')' || s[0] == ']' || s[0] == '}'))
		return false;
	for (int i = 0; i < n; i++)
	{
		// cout<<st.top();
		switch (s[i])
		{
		case '(':
			st.push(s[i]);
			break;
		case '[':
			st.push(s[i]);
			break;
		case '{':
			st.push(s[i]);
			break;
		case ')':
			if (st.top() == '(')
				st.pop();
			else
				return false;
			break;
		case ']':
			if (st.top() == '[')
				st.pop();
			else
				return false;
			break;
		case '}':
			if (st.top() == '{')
				st.pop();
			else
				return false;
			break;
		}
	}
	if (st.top() == '$')
		return true;
	else
		return false;
}

/*		IF-ELSE		*/
bool isValid(string s)
{
	stack<char> st;
	st.push('$');
	int n = s.length();
	if (n % 2 != 0 ||(s[0] == ')' || s[0] == ']' || s[0] == '}'))
		return false;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == '(' || s[i] == '[' || s[i] == '{')
			st.push(s[i]);
		else if (st.top() == '(' && s[i] == ')')
			st.pop();
		else if (st.top() == '[' && s[i] == ']')
			st.pop();
		else if (st.top() == '{' && s[i] == '}')
			st.pop();
		else
			return false;
	}
	if (st.top() == '$')
		return true;
	else
		return false;
}

int main(){
	string str;
	cin>>str;
	cout<<endl<<isValid(str);
	return 0;
}