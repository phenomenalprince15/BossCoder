#include <bits/stdc++.h>
using namespace std;

const int N=0;

int main()
{
	freopen("pails.in", "r", stdin);
	freopen("pails.out", "w", stdout);
	
	int n;
	cin >> n;
	
	vector<pair<int, int>> a = {};
	
	while(n--){
		char c;
		int x;
		cin >> ch >> x;
		a.push_back(make_pair(x, ch));
	}
	
	
	int ans=0;
	int n = a.size();
	
	for (int i=0; i<n; i++){
		int liars = 0;
		for (int j=0; j<i; j++){
			if (nums[j].second == 'L'){
				liars++;
			}
		for (int j=i+1; j<n; j++){
			if (nums[j].second == 'G'){
				liars++;
			}
		ans = min(ans, liars);
		}
		}
	}
	
	cout << ans << endl;
	
	return 0;
}