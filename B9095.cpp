#include <stdio.h>
#include <iostream>
using namespace std;
int main(){


	int T;
	cin >> T;
	int arr[11][4];

	arr[1][0] = 1;
	arr[2][0] = 2;
	arr[3][0] = 4;

	
	for(int i = 4; i < 11; i++)
	{
		arr[i][1] = arr[i - 1][0] ;
		arr[i][2] = arr[i - 2][0] ;
		arr[i][3] = arr[i - 3][0] ;
		arr[i][0] = arr[i][1] + arr[i][2] + arr[i][3];
	}
	int x[1000];
	for (int n = 0; n < T; n++)
	{
		cin >> x[n];
		
	}
	for (int n = 0; n < T; n++)
	{
		cout << arr[x[n]][0] << "\n";
	}
	return 0;

}