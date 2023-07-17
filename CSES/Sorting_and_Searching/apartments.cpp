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
	int m;
	int k;
	
	cin >> n >> m >> k;
	
	vector<int> desired = {};
	vector<int> apartments = {};
	
	while (n--){
		int x;
		cin >> x;
		desired.push_back(x);
	}
	n = desired.size();
	
	while (m--){
		int x;
		cin >> x;
		apartments.push_back(x);
	}
	m = apartments.size();
	
	int cnt = 0;
	sort(desired.begin(), desired.end());
	sort(apartments.begin(), apartments.end());
	
	int i=0, j=0;
	
	while(i<n & j<m){
		if (desired[i] - k > apartments[j]){
			j++;
		}else if (desired[i] +k < apartments[j]){
			i++;
		}else{
			i++;
			j++;
			cnt++;
		}
	}	
	
	
	/*
	// new array of desired and apartments for sorted and distinct
	sort(desired.begin(), desired.end());
	vector<int> new_desired = {};
	new_desired.push_back(desired[0]);
	for (int i=1; i<n; i++){
		if (desired[i-1] != desired[i]) new_desired.push_back(desired[i]);
	}
	n = new_desired.size();
	//print(new_desired);
	*/
	/*
	sort(apartments.begin(), apartments.end());
	vector<int> new_apartments = {};
	new_apartments.push_back(apartments[0]);
	for (int i=1; i<n; i++){
		if (new_apartments[i-1] != new_apartments[i]) new_apartments.push_back(apartments[i]);
	}
	m = new_apartments.size();
	//print(new_apartments);
	
	int cnt=0;
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++){
			if (abs(new_desired[i] - apartments[j]) <= k) {cnt++; break;}
		}
	}
	*/
	
	cout << cnt << endl;	
	return 0;
	
}