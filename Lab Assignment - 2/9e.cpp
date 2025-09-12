#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s, rev;
	cin >> s;
	int len = 0;
	for(int i=0; s[i]; i++) {len++;}
	for(int i=0; i<len; i++)
	{
		rev.push_back(s[len-i-1]);
	}
	cout << rev << endl;
	return 0;
}
