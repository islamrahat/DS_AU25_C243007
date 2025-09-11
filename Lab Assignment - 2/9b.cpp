#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s1, s2;
	cin >> s1;
	int len = 0;
	for(int i=0; s1[i]; i++)
	{
		s2.push_back(s1[i]);
	}
	cout << s2 << endl;
	return 0;
}
