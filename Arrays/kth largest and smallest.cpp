#include <bits/stdc++.h> 
#include <iostream>
#include<algorithm>

using namespace std;

vector<int> removeDuplicates(int arr[], int n)
{
  vector<int> v {};
  v.push_back(arr[0]);
  for (int i = 1; i < n; i++) {
    if (arr[i] != arr[i-1]) v.push_back(arr[i]);
    }
    
    return v;
}

void kthSmallestLargest(int arr[], int n, int k) {
    //Write your code here
    sort(arr, arr+n);
    vector<int> v = removeDuplicates(arr, n);
    int s = v.size();
    //for (int i=0; i<s; i++){
      //  cout << v[i] << " ";
    //}
    cout << v.size() << endl;
    if (s == 1 & k > 1){
        cout << "-1" << " " << "-1";
    }else if (s == 1 & k == 1){
        cout << v[0] << " " << v[0];
    }
    else{
        cout << v[s-k] << " " << v[k-1];   
    }
    cout << endl;
    
}

int main() {
    int t;
    cin >> t;

    while (t > 0) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        kthSmallestLargest(arr, n, k);
        t--;
    }
    return 0;
}