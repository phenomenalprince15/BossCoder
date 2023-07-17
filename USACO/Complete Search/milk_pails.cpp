#include <bits/stdc++.h>
using namespace std;

const int N=0;

int main()
{
	freopen("pails.in", "r", stdin);
	freopen("pails.out", "w", stdout);
	
	int x, y, m;
	
	cin >> x >> y >> m;
	
	int ans=0;
	int flag = 0;
	for (int i=0; i*x < m ; i++){
		//if (flag == 1) break;
		int amt = 0;
		for (int j=0; j*y < m ; j++){
			if (x * i + y * j > m) break;
			amt  = x * i + y * j;
			ans = max(amt, ans);
		}
		
	}	
	
	cout << ans << endl;
	
	return 0;
}