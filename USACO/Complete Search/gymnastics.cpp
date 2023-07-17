#include <bits/stdc++.h>
using namespace std;

const int N=0;

int main()
{
	freopen("gymnastics.in", "r", stdin);
	freopen("gymnastics.out", "w", stdout);
	
	int n, k;
	cin >> n >> k;
	
	vector<vector<int>> nums = {};
	

	for (int i=0; i<k; i++){
		for (int j=0; j<n; j++){
			cin >> nums[i][j];
			nums[i][j]--;	
		}
	}
			
	vector<vector<int, int>> solution = {0};
	
	for (int i=0; i<k; i++){
		for (int j=0; j<n; j++){
			for(int m=j+1; m<n; m++){
				solution[nums[i][j]][[i][m]]++;
			}
		}
	}
	
	
		
	return 0;
}