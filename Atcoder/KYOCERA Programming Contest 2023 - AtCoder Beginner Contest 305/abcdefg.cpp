#include <bits/stdc++.h>
using namespace std;

const int N=0;

int main()
{
	string p, q;
	string str = "ABCDEFG";
	
	cin >> p >> q;
	int x, y;
	x = str.find(p);
	y = str.find(q);
	
	cout << x << " " << y << endl;
	
	if (x > y){
		swap(x, y);
	}
	
	cout << x << " " << y << endl;
	
	vector<int> dis;
	dis = {0, 3, 1, 4, 1, 5, 9};
	
	int sum = 0;
	for (int i=x+1; i<=y; i++){
		sum += dis[i];
	}
	
	cout << sum << endl;
	
	return 0;
}