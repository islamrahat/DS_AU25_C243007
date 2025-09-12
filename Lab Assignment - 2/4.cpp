#include<bits/stdc++.h>
using namespace std;

int main()
{
	int d; cin >> d;
	int a[d][d], b[d][d], ans[d][d]={};
	for(int i=0; i<d; i++)
		for(int j=0; j<d; j++)
			cin >> a[i][j];
	for(int i=0; i<d; i++)
		for(int j=0; j<d; j++)
			cin >> b[i][j];
	int k = 0;
	for(int i=0; i<d; i++)
	{
		for(int j=0; j<d; j++)
		{
			for(int k=0; k<d; k++)
			{
				ans[i][j] += a[i][k]*b[k][j];
			}
		}
	}
	for(int i=0; i<d; i++)
	{
		for(int j=0; j<d; j++)
		{cout << ans[i][j] << " ";}
		cout << endl;
	}
	return 0;
}
