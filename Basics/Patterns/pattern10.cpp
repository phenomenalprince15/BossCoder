#include <bits/stdc++.h>
using namespace std;

const int N=0;

int main()
{
	int n;
	cin >> n;
	
	/*

n = 5
2*n - 1 = 9 (0 -> 8)
	
0	*----
1	**---
2	***--
3	****-
4	*****
5	****-
6	***--
7	**---
8	*----

n = 5	
i	stars spaces
0	1		4
1	2		3
2	3		2
3	4		1
4	5		0

n = n-1 = 4
i stars spaces 
0	4	1
1   3	2
2	2	3
3   1 	4

	*/
	
	/*
	for (int i=0; i<n; i++){
		for (int j=0; j<i+1; j++){
			cout << "*";
		}
		for (int k=n-i-1; k>0; k--){
			cout << "-";
		}
		cout << endl;
	}
	
	int num = n-1;
	
	for (int i=0; i<num; i++){
		for (int j=num-i; j>0; j--){
			cout << "*";
		}
		for (int k=0; k<i+1; k++){
			cout << "-";
		}
		cout << endl;
	}
	
	cout << endl;
	*/
	for (int i=0; i<2*n-1; i++){
		if (i >= n){
			int stars = 2*n - i - 1;
			for (int j=0; j<stars; j++){
				cout << "*";
				}
			}else{
				for (int j=0; j<i+1; j++){
					cout << "*";
				}
		}
		cout << endl;
	}
	
	
	return 0;
}