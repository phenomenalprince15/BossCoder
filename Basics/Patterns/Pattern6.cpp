#include <bits/stdc++.h>
using namespace std;

const int N=0;

int main()
{
	/*
	
	12345
	1234
	123
	12
	1
	
	*/
	int n;
	cin >> n;
	
	for (int i=n; i>0; i--){
		for (int j=0; j<i; j++){
			cout << j+1;
		}
		cout << endl;
	}
	
	return 0;
}