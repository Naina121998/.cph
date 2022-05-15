#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 2;
const int MOD = INT32_MAX;
int dp[N];

int minsquare(int n){

   dp[0]= 0;
   dp[1]=1;
   dp[2]=2;
   dp[3]=3;
   for(int i = 4;i<=n;i++){
       dp[i]=i;
     
         for (int x = 1; x*x <=i; x++)
        {
           
                dp[i] = min(dp[i], 1 +
                                  dp[i - (x*x)]);
        }
   }
    
    return dp[n];
}
int main(){
     int n = 20;

    cout <<minsquare(n)<<endl;
    return 0;
}
