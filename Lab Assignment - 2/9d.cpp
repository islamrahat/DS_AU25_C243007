#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	int len1 = 0, len2 = 0;
	for(int i=0; s1[i] || s2[i]; i++)
	{
		if(s1[i]>s2[i]) {cout << "S1 is greater" << endl; return 0;}
		if(s1[i]<s2[i]) {cout << "S2 is greater" << endl; return 0;}
		if(!s1[i]) {cout << "S2 is greater" << endl; return 0;}
		if(!s2[i]) {cout << "S1 is greater" << endl; return 0;}
	}
	cout << "They're equal" << endl;
	return 0;
}
