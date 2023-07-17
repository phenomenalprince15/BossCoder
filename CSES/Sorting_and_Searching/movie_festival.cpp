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
		v.push_back(make_pair(b,a));
		//v.push_back(make_pair(a));
	}
	
	sort(v.begin(), v.end());
	n = v.size();
	//for (int i=0; i<n; i++){
	//	cout << v[i].first << " " << v[i].second << endl;
	//}
	n = v.size();
	
	int cnt = 0;
	int ans = 0;
	int i=0;
	int temp=0;
	
	while (i < n){
		if (temp <= v[i].second){
			temp = v[i].first;
			i++;
			cnt++;
		}else{
			i++;
		}
	}
	
	/*
	for (int i=1; i<n; i++){
		if (v[i].second >= v[i-1].first){
			cnt++;
		}else{
			i--;
			v.erase(v.begin()+i);
		}
		//cout << cnt << " ";
	}
	*/
	
	cout << cnt << endl;
	
	return 0;
}

/*

4 3
5 4
6 5
6 3

*/
