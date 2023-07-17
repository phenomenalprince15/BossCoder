#include <bits/stdc++.h>
using namespace std;

const int N=0;

int main()
{
	int n, m;
	cin >> n;
	vector<int> arr;
	while(n--){
		int x;
		cin >> x;
		arr.push_back(x);
	}
	n = arr.size();
	cin >> m;
	
	vector<pair<int, int>> wake, sleep;
	for (int i=1; i<n-1; i++){
		wake.push_back(make_pair(arr[i-1], arr[i]));
		sleep.push_back(make_pair(arr[i], arr[i+1]));
	}
	
	int l = 480, r = 1920;
	int x = -1,y = -1;
	
	for (int i=0; i<wake.size(); i++)
	{
		if (l>= wake[i].first & l <= wake[i].second)
		{
			x = i;
		}
		if (r>= wake[i].first & r <= wake[i].second)
		{
			y = i;
		}
	}
	
	for (int i=0; i<sleep.size(); i++)
	{
		if (l>= sleep[i].first & l <= sleep[i].second)
		{
			y = i;
		}
	}
	
	if (x == -1 & y == -1){
		cout << 0 << endl;
	}else if (x == -1 & y != -1){
		cout << sleep[y] - 
	}
	
	return 0;
}