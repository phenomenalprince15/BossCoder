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
*/

// int func(int n)
// {
// 	if (n == 0) return 0;
// 	return n + func(n-1);
// 	// if (n < 1) return sum;
// 	// //add += n;
// 	// return func(n-1, sum + n);
// }

// int fact(int n)
// {
// 	if (n == 0) return 1;
// 	return n*fact(n-1);
// }

// void reverse(vector<int>& nums, int i, int j)
// {
// 	if (i == j || i > j+1){ //i>=j better condition
// 		return;
// 	}
// 	swap(nums[i], nums[j]);
// 	reverse(nums, i+1, j-1);
// }

// void betterRev(vector<int>& nums, int i, int n)
// {
// 	if (i >= n/2) return;
// 	swap(nums[i], nums[n-i-1]);
// 	betterRev(nums, i+1, n);
// }

void print(vector<int>& nums)
{
	for (int i=0; i<nums.size(); i++){
		cout << nums[i] << " ";
	}
	cout << endl;
}

// bool isPalindrome(string s, int i, int n)
// {
// 	if (i >= n/2) return true;
// 	if (s[i] != s[n-i-1]) return false;
// 	return isPalindrome(s, i+1, n);
// }

// int fib(int n)
// {
// 	if (n <= 1) return 1;
// 	return fib(n-1) + fib(n-2);
// }

// void subsequence(vector<int>& nums,vector<int>& arr, int idx, int n)
// {
// 	if (idx == n){
// 		print(arr);
// 		return;
// 	}
// 	arr.push_back(nums[idx]);
// 	subsequence(nums, arr, idx+1, n);
// 	arr.pop_back();
// 	subsequence(nums, arr, idx+1, n);	
// }
/*
[1, 2, 1] sum = 2
0 , 1, 2
								f(0, [], 0)
						/					\
				f(0, [1], 1)					f(0, [], 0)
		f(1, [1, 2], 3)	 f(1, [1, 1], 2)	f(2, [2], 2)	f(2, [1], 1)
f(2,[1,2,1],4)	f(3,[1,2],3)				
f(3)
*/
// int cnt=0;
// void subsequenceSum(vector<int>& nums, vector<int>& arr, int idx, int sum, int k, int n)
// {
// 	cnt++;
// 	if (idx == n){
// 		if (sum == k){
// 			print(arr);
// 			return;
// 		}
// 		else{
// 			return;
// 		}
// 	}
// 	//pick element
// 	arr.push_back(nums[idx]);
// 	sum += arr[idx];
// 	subsequenceSum(nums, arr, idx+1, sum, k, n);
// 	sum -= arr[idx];
// 	arr.pop_back();
// 	//not pick
// 	subsequenceSum(nums, arr, idx+1, sum, k, n);
// 	return;
// }

int trap(vector<int>& height) {
    int ans = 0;
    int n = height.size();
    vector<int> maxLeft(n);
    vector<int> maxRight(n);
    maxLeft[0] = 0;
    maxRight[n-1] = 0;
    
    int mL = height[0];

    for (int i=1; i<n; i++){
        if (height[i] > mL){
            mL = height[i];
        }
        maxLeft[i] = mL;
    }
    
    for (int i=0; i<maxLeft.size(); i++)
    {
    	cout << maxLeft[i] << " ";
    }
    cout << endl;

    int mR = height[n-1];
    

    for (int i=n-2; i>=0; i--){
        if (height[i] > mR){
            mR = height[i];
        }
        maxRight[i] = mR;
    }
    vector<int> water_stored(n);
    for (int i=0; i<n; i++){
        int x = min(maxLeft[i], maxRight[i]);
        if (x - height[i] < 0){
            water_stored[i] = 0;
        }else{
            water_stored[i] = x - height[i];
        }
    }

    for (int x: water_stored){
        ans += x;
    }

    return ans;

}

int main()
{
	
	// int n;
	// cin >> n;
	// cout << func(n) << endl;
	// cout << fact(n) << endl;
	// vector<int> nums = {4, 5, 12, 64, 46, 67};
	// int sz = nums.size();
	// print(nums);
	// reverse(nums, 0, sz-1);
	// print(nums);
	// betterRev(nums, 0, sz);
	// print(nums);
	// string s = "MADAM";
	// string a = "MADSM";
	// cout << isPalindrome(s, 0, s.size()) << endl;
	// cout << isPalindrome(a, 0, a.size()) << endl;
	// cout << fib(5) << endl;
	
	// vector<int> nums = {1, 2, 1};
	// vector<int> arr = {};
	// subsequenceSum(nums, arr, 0, 0, 2, 3);
	// cout << cnt << endl;
	vector<int> height = {4,2,0,3,2,5};
	cout << trap(height) << endl;
	
	return 0;
}