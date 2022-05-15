#include <bits/stdc++.h>
using namespace std;

int knapSack(int W,int wt[],int val[],int n,vector<vector<int>>dp){
    if(n==0 || W==0){
        return 0;
    }
    if(dp[W][n]!=-1){
        return dp[W][n];
    }
    if(wt[n-1]>W){
        dp[W][n]= knapSack(W,wt,val,n-1,dp);
        return dp[W][n];
    }else{
    dp[W][n] = max(knapSack(W,wt,val,n-1,dp),(knapSack(W-wt[n-1],wt,val,n-1,dp)+val[n-1]));
    }
    return dp[W][n];
}
int main()
{
    int val[] = { 60, 100, 120 };
    int wt[] = { 10, 20, 30 };
    int W = 50;
    int n = sizeof(val)/sizeof(val[0]);
   vector<vector<int>> dp(W+1,vector<int>(n+1,-1));

    cout << knapSack(W, wt, val, n,dp);
    return 0;
}