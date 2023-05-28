#include <bits/stdc++.h>
using namespace std;

const int N=0;

int main()
{
	int n;
	vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
	vector<int> a;
	
	a.push_back(nums[0]);
	cout << a[0] << endl;
	
	for (int i=1; i<nums.size(); i++){
		if (nums[i-1] != nums[i]){
			a.push_back(nums[i]);
		}
	}
	
	for (int i=0; i<a.size(); i++){
		cout << a[i] << " ";
	}
	
	return 0;
}