#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 2;
const int MOD = INT32_MAX;
int dp[N];

int minsquare(int n){

    if(n>=0 && n<=3){
        return n;
    }
    if(dp[n]!=INT32_MAX){
        return dp[n];
    }
  
    int x = sqrt(n);
    for(int i = 1 ; i<=x;i++){
        dp[n]= min(dp[n],1+minsquare(n-(i*i)));
    }
    return dp[n];
}
int main(){
     int n = 1024;
  for(int i = 0 ; i<=N;i++){
      dp[i]=MOD;
  }
    cout <<minsquare(n)<<endl;
    return 0;
}