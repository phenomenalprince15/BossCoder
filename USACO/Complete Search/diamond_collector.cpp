/*

5 3
1 6 4 3 1

she decides that she will not include two diamonds in the case,
if their sizes differ by more than K
Determine the maximum number of diamonds she can display in the case.

*/

#include <bits/stdc++.h>
using namespace std;

const int N=0;

int main()
{
	
	freopen("diamond.in", "r", stdin);
	freopen("diamond.out", "w", stdout);
	
	int n, k;
	cin >> n;
	cin >> k;	
	
	vector<int> a = {};
	
	while (n--){
		int x;
		cin >> x;
		a.push_back(x);
	}
	n = a.size();
	
	int ans = 0;
	//cout << n <<endl;
	
	for (int i=0; i<n; i++)
	{
		int cnt=0;
		for (int j=0; j<n; j++){
			if (a[j] >= a[i] && a[j] <= a[i] + k){
				cnt++;
			}
			ans = max(cnt, ans);
		}	
	}
	cout << ans << endl;
	
	return 0;
}
