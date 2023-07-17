#include <bits/stdc++.h>
using namespace std;

const int N=0;

int main()
{
	int n;
	cin >> n;
	vector<pair<int, int>> v = {};
	
	int a, b;
	while (n--)
	{
		cin >> a >> b;
		v.push_back(make_pair(a, 1));
		v.push_back(make_pair(b, 0));
	}
	
	sort(v.begin(), v.end());
	n = v.size();
	
	int cnt = 0;
	int ans = 0;
	
	for (int i=0; i<n; i++){
		if (v[i].second == 1){
			cnt++;
			ans = max(cnt, ans);
		}else{
			cnt--;
		}
	}
	
	cout << ans << endl;
	
	return 0;
}