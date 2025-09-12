#include<bits/stdc++.h>
using namespace std;

int main()
{
	string t, ans;
	int l, k;
	cout << "T, K and L respectively: ";
	cin >> t >> k >> l;
	for(int i=0; i<k; i++)
	{
		ans.push_back(t[i]);
	}
	int tlen = 0;
	for(int i=0; t[i]; i++) tlen++;
	for(int i=k+l; i<tlen; i++)
	{
		ans.push_back(t[i]);
	}
	cout << ans << endl;
	return 0;
}
