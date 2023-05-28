#include <bits/stdc++.h>
using namespace std;

const int N=0;

int main()
{
	/*
	
	*********
	-*******-
	--*****--
	---***---
	----*----
	
	0 - 9
	1 - 7
	2 - 5
	3 - 3
	4 - 1
	
	space - stars - space
0	0 9 0
1	1 7 1
2	2 5 2
3	3 3 3
4	4 1 4
	*/
	int n;
	cin >> n;
	
	for (int i=0; i<n; i++){
		for (int j=0; j<i; j++){
			cout << "-";
		}
		for (int k=0; k<2*(n-i)-1; k++){
			cout << "*";
		}
		for (int l=0; l<i; l++){
			cout << "-";
		}
		cout << endl;
	}
	
	return 0;
}