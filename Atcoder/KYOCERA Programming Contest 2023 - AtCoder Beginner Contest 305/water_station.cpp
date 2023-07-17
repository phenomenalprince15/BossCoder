#include <bits/stdc++.h>
using namespace std;

const int N=0;

int solve(int n)
{
	int rem = n%5;
	n = n/5;
	if (rem < 3){
		return n*5;
	}
	return n*5 + 5;
}

int main()
{
	int N;
	cin >> N;
	
	cout << solve(N) << endl;
	
	return 0;
}