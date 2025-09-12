#include<bits/stdc++.h>
using namespace std;

int main()
{
	int b1, b2;
	string n1;
	int dec = 0;
	cout << "Base and Number, Base: ";
	cin >> b1 >> n1 >> b2;
	list<int> newNumber;
	for(int i=0; i<n1.size(); i++)
	{
		dec += pow(b1,n1.size()-i-1)*(int)(n1[i]-'0');
	}
	while(dec>0)
	{
		int digits;
		digits = dec%b2;
		dec /= b2;
		newNumber.push_front(digits);
	}
	for(int i: newNumber) cout << i;
	cout << endl;
	return 0;
}
