#include <bits/stdc++.h>
using namespace std;

const int N=0;

int main()
{
	int n;
	cin >> n;
	vector<int> a = {};
	
	while (n != 0){
		int x;
		cin >> x;
		a.push_back(x);
		n--;
	}
	n = a.size();
	
	sort(a.begin(), a.end());
	int cnt=1;
	
	for (int i=1; i<n; i++){
		if (a[i-1] != a[i]) cnt++;
	}
	
	cout << cnt;
	
	return 0;
}