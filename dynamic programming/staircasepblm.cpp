#include <bits/stdc++.h>
using namespace std;
int dp[1000];
int climbstairs(int n){
    if(n==0 || n==1 || n==2){
        return n;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    else{
        dp[n]= climbstairs(n-1) + climbstairs(n-2);
    }
    return dp[n];
}
int main(){
    memset(dp,-1,sizeof(dp));
    cout<<climbstairs(2);
    return 0;
}