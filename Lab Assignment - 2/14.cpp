#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	vector<int> count(26);
	for(int i=0; s[i]; i++)
	{
		count[(int)s[i]-'a']++;
	}
	for(int i=0; i<26; i++)
	{
		if(count[i]) {cout << (char)(i+'a') << ": " << count[i] << endl;}
	}
	return 0;
}
