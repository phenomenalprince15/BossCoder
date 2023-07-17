#include <bits/stdc++.h>
using namespace std;

const int N=0;

void print(vector<int> arr)
{
	for (int i=0; i<arr.size(); i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	int n;
	int x;
	cin >> n >> x;
	
	vector<int> a = {};
	while (n--){
		int y;
		cin >> y;
		a.push_back(y);
	}
	n = a.size();
	
	//print(a);
	sort(a.begin(), a.end());
	//print(a);	
	/*
	int idx=0;
	int cnt=0;
	int flag = 0;
	
	for (int i=0; i<n; i++){
		if (a[i] + a[i+1] <= x){
			cnt++;
			//rem = x - a[i] - a[i+1];
			i++;
		}else{
			flag = 1;
			idx = i;
			break;
		}
	}
	if (flag == 1)
		for (int i=idx; i<n; i++){
			cnt++;
		}
	
	cout << cnt << endl;
	*/
	int cnt = n;
	int i=0, j=n-1;
	while(i<j)
	{
		if (a[i] + a[j] <= x){
			cnt--;
			i++;
			j--;
		}else{
			j--;
		}
	}
	
	cout << cnt << endl;
	
	return 0;
}