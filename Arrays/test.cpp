#include <bits/stdc++.h>
using namespace std;

const int N=0;

vector<int> matchingStrings(vector<string> stringList, vector<string> queries) {
    map<string, int> mp;
    int n = stringList.size();
    int m = queries.size();
    for (int i=0; i<n; i++){
        mp[stringList[i]]++;
    }
    
    vector<int> ans;
    for (int i=0; i< m; i++){
        if (mp.find(queries[i]) != mp.end()){
            string temp = queries[i];
            int x = mp[temp];
            ans.push_back(x);
        }else{
            ans.push_back(0);
        }
    }
    return ans;
}

int main()
{
    int n;
    vector<string> s {"ab", "ab", "abc"};
    vector<string> q {"ab", "abc", "bc"};
    vector<int> v;
    
    v = matchingStrings(s, q);
    
    for (int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    
    return 0;
}