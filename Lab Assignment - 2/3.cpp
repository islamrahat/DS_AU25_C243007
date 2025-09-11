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
	int row, column, rowSum=0, columnSum=0;
	cout << "Enter the row number you want to see the sum of(1 based indexing): ";
	cin >> row;
	cout << "Enter the column number you want to see the sum of(1 based indexing): ";
	cin >> column;
	
	for(int i=0; i<c; i++)
		rowSum += arr[row-1][i];

	for(int i=0; i<r; i++)
		columnSum += arr[i][column-1];

	cout << "The sum of the " << row << "th row is: " << rowSum << endl;
	cout << "THe sum of the " << column << "th column is: " << columnSum << endl;
	return 0;
}
