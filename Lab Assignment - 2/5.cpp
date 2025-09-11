#include<bits/stdc++.h>
using namespace std;

int main()
{
	int r, c;
	cin >> r >> c;
	int arr[r][c];
	for(int i=0; i<r; i++)
		for(int j=0; j<c; j++)
			cin >> arr[i][j];
	int zero=0;
	for(int i=0; i<r; i++)
		for(int j=0; j<c; j++)
			if(arr[i][j]==0) zero++;
	if(zero>(r*c)/2) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
