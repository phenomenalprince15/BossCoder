#include <bits/stdc++.h>
using namespace std;

const int N=0;

int main()
{
	int n;
	cin >> n;
	
	/*
	----*----
	---***---
	--*****--
	-*******-
	*********
	
	0 - 1
	1 - 3
	2 - 5
	3 - 7
	4 - 9
	
	*/
	
	for (int i=0; i<n; i++){
		for (int j=n-i-1; j>0; j--){
			cout << "-";
		}
		for (int k=0; k<2*i+1; k++){
			cout << "*";
		}
		for (int j=n-i-1; j>0; j--){
			cout << "-";
		}
		cout << endl;
	}
	
	return 0;
}