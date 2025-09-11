#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	for(int i=0; s2[i]; i++) s1.push_back(s2[i]);
	cout << s1 << endl;
	return 0;
}
