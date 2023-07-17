/*
N apples - known weights

group -> 2 groups

wof g1 - wof g2 is minimum.



5

3 2 7 4 1

g1 = 2 3 4 = 9
g2 = 1 7 = 8

o/p = 1

3 2 = 5
	3 2 7 = 12
		3 2 7 4 = 16
	
3 7 = 10
	3 7 4 = 14
		3 7 4 1 = 15

Think Recursion :
	- There are two possibilities :
		- add number either add to set 1 or to set 2.
		- check what sum is in set 1 and set 2.

long long appleHelper(long long i, long long sum1, long long sum2)
{
	if (i == n){
		//base case
	}
	else{
	//recursive case
	long long explore1 = appleHelper(i+1, sum1 + weights[i], sum2);
	long long explore2 = appleHelper(i+1, sum1, sum2 + weights[i]);
	}
}


*/
#include <bits/stdc++.h>
using namespace std;

const long long N=0;
long long n;
vector<long long> weights;

long long appleHelper(long long i, long long sum1, long long sum2)
{
	if (i == n){
		//base case
		return abs(sum1 - sum2);
	}
	else{
	//recursive case
	long long explore1 = appleHelper(i+1, sum1 + weights[i], sum2);
	
	long long explore2 = appleHelper(i+1, sum1, sum2 + weights[i]);
	
	return min(explore1, explore2);
	}
}


int main()
{
	cin >> n;
	weights.resize(n);
	for (long long i = 0; i < n; i++) { cin >> weights[i];}
	
	cout << appleHelper(0, 0, 0) << endl;
	
	return 0;
}
