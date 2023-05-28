#include <bits/stdc++.h>
using namespace std;

const int N=0;

int main()
{
	int n;
	cin >> n;
	
	/*
	
	1
	0 1
	1 0 1
	0 1 0 1
	1 0 1 0 1

i
0	1
1	0 1
2	1 0 1
	
	*/
	
	int start = 1;
	for (int i=0; i<n ; i++){
		if (i%2 == 0) start = 1;
		else start = 0;
		for (int j=0; j<i+1; j++){
			cout << start;
			start = 1 - start;
		}
		cout << endl;
	}
	
	return 0;
}