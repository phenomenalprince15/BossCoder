#include <bits/stdc++.h>
using namespace std;

const int N=0;

vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> pos;
        vector<int> neg;
        vector<int> ans(n, 0);

        for (int i=0; i<n; i++){
            if (nums[i] < 0){
                neg.push_back(nums[i]);
            }else{
                pos.push_back(nums[i]);
            }
        }
        for (auto i:pos){
        	cout << i << " ";
        }
        cout << endl;
        for (auto j:neg){
        	cout << j << " ";
        }
        cout << endl;
        
        int j=0;
        for (int i=0; i<pos.size(); i++){
            ans[j] = pos[i];
            j+=2;
        }
        
        for (auto i : ans){
        	cout << i << " ";
        }
        cout << endl;

        j=1;
        for (int i=0; i<neg.size(); i++){
            ans[j] = neg[i];
            j+=2;
        }
        for (auto i : ans){
        	cout << i << " ";
        }
        cout << endl;
        
        return ans;
}

int main()
{
	int n;
//	cin >> n;
	
	vector<int> a;
	a = {3, 1, -2, -5, 2, -4};
	vector<int> b;
	
	b = rearrangeArray(a);
	
	return 0;
}