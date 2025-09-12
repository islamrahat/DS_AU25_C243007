#include<bits/stdc++.h>
using namespace std;

int GCD(int a, int b)
{
        while(b != 0)
	{
		int t = b;
		b = a%b;
		a = t;
	}
	return a;
}

int LCM(int a, int b)
{
	if(b>a) swap(a,b);
	if(a == 0 || b == 0) return a;
	int multiple = a;
	while(1)
	{
		if(multiple%b==0) {return multiple;}
		multiple += a;
	}
}

int main()
{
        int a, b;
        cin >> a >> b;
        cout << "GCD: "  << GCD(a,b) << endl;
	cout << "LCM: "  << LCM(a,b) << endl;
        return 0;
}
