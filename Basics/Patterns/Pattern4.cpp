#include <bits/stdc++.h>
using namespace std;

const int N=0;

int main()
{
	/*
	
	1
	22
	333
	4444
	55555
	
	0 - 1
	1 - 22
	2 - 333
	3 - 4444
	4 - 55555
	
	*/
	
	int n;
	cin >> n;
	
	for (int i=0; i<n; i++){
		for (int j=0; j<i+1; j++){
			cout << i+1;
		}
		cout << endl;
	}
	
	return 0;
}