#include <bits/stdc++.h>
using namespace std;

const int N=0;

int main()
{
	int n;
	cin >> n;
	
	/*
	
	*****
	****
	***
	**
	*
	
	0 - 5
	1 - 4
	2 - 3
	3 - 2
	4 - 1
	
	*/
	
	/*
	for (int i=0; i<n;i++){
		for (int j=0; j<i+1; j++){
			cout <<
		}
	}
	*/
	
	for (int i=n; i>0 ; i--){
		for (int j=i; j>0; j--){
			cout << "*";
		}
		cout << endl;
	}
	
	
	return 0;
}