#include <bits/stdc++.h>
using namespace std;

const int N=0;

/*
: minimum magnetic force between any two balls is maximum.

1 	2 	3 	4 	7 | m = 3
b1  b2  b3 - d = 1
b1      b2      b3 - d = 2
b1          b2   b3  - d = 3
b1              b2 -> ballsplaced < m
d = min(a) to max(a)

22 57 74 79

*/

bool isPlaceBall(int dis, vector<int>& nums, int m)
{
    int noOfBalls = 1, lastBallPlaced = nums[0];
    for (int i=1; i<nums.size(); i++){
        if (nums[i] - lastBallPlaced >= dis){
            noOfBalls++;
            lastBallPlaced = nums[i];
        }
        if (noOfBalls >= m) return true;
    }
    return false;
}

int maxDistance(vector<int>& nums, int m) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    // int mini = *min_element(nums.begin(), nums.end());
    // int maxi = *max_element(nums.begin(), nums.end());
    int mini = nums[0];
    int maxi = nums[n-1];
    int ans = -1;
    int low = mini, high = maxi;
    while (low <= high)
    {
        int mid = low + (high-low)/2;
        if (isPlaceBall(mid, nums, m)){
            ans = mid;
            low = mid + 1;
        }else{
            high = mid-1;
        }
    }
    // for (int pos=mini; pos<=maxi-mini; pos++){
    //     if (isPlaceBall(pos, nums, m)){
    //         continue;
    //     }else{
    //         ans = pos-1;
    //         break;
    //         //return ans;
    //     }
    // }
    return ans;
}

int main()
{
		
	int n;
	vector<int> nums = {1, 2, 3, 4, 7};
	cout << maxDistance(nums, 3) << endl;
    vector<int> v = {79,74,57,22};
    cout << maxDistance(v, 4) << endl;
    	
	return 0;
}