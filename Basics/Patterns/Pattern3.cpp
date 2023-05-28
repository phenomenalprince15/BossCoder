#include <bits/stdc++.h>
using namespace std;

const int N=0;

int main()
{
	int n;
	cin >> n;
	
	/*
	
	1
	12
	123
	1234
	12345
	
	0 - 1
	1 - 12
	2 - 123
	3 - 1234
	4 - 12345
	
	*/
	
	for (int i=0; i<n ; i++){
		for (int j=0; j< i+1; j++){
			cout << j+1;
		}
		cout << endl;
	}
	
	return 0;
}