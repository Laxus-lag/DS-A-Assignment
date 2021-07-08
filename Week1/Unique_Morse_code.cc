/*
Leetcode 804: Unique Morse Code Words
Day-4
*/
#include<bits/stdc++.h>
using namespace std;

int uniqueMorseRepresentations(vector<string >& words) {
        vector<string> alpha{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        map<string,int> m;
        for(int i=0;i<words.size();i++){
            string str=words[i];
            string temp="";
            for(int j=0;j<str.length();j++){
                cout<<str[j]-'a'<<" "<<alpha[str[j]-'a'];
                temp+=alpha[str[j]-'a'];
            }
            m[temp]=i;
        }
        return m.size();
}

int main()
{
	int n;
	string value;
	cin>>n;
	vector<string >v;
	for(int i=0;i<n;i++){
		cin>>value;
		v.push_back(value);
	}
	cout << endl<< uniqueMorseRepresentations(v);
	return 0;
}