#include <bits/stdc++.h> 
int fibonacciNumber(int n){
    // Write your code here.
    int f1 = 1;
    int f2 = 1;
    int f3= 0, res = 0;
    for (int i=3; i<=n; i++){
        f3 = f1 + f2;
        res += f3;

    return res;

/*
5
1 1
1 1 2 3 5  

*/

}