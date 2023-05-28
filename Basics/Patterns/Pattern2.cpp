#include <bits/stdc++.h>
using namespace std;

const int N=0;

int main()
{
	
	/*
	
	*
	**
	***
	****
	*****
	
	0 - 1
	1 - 2
	2 - 3
	3 - 4
	4 - 5
	
	*/
	int n;
	cin >> n;
	for (int i=0; i<n ; i++){
		for (int j=0; j<i+1 ; j++){
			cout << "*";
		}
		cout << endl;
	}
	
	
	return 0;
}