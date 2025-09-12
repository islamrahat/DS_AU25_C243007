#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s, t, ans;
	int k, lenk;
	cout << "S, T and K respectively: ";
	cin >> s >> t >> k;
	char temp;
	for(int i=0; s[i]; i++) lenk++;
	for(int i=0; i<k; i++)
	{
		ans.push_back(t[i]);
	}
	for(int i=0; s[i]; i++)
	{
		ans.push_back(s[i]);
	}
	for(int i=k; t[i]; i++)
	{
		ans.push_back(t[i]);
	}
	cout << ans << endl;

}
