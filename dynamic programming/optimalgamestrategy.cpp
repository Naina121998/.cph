#include <bits/stdc++.h>
using namespace std;
int dp[1001][1001];
int optimalStrategyofGame(int arr[],int i,int j){
    if(i==j){
        return arr[i];
    }
    if(i>j){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    int x = arr[i]+min(optimalStrategyofGame(arr,i+1,j-1),optimalStrategyofGame(arr,i+2,j));
     int y = arr[j]+min(optimalStrategyofGame(arr,i,j-2),optimalStrategyofGame(arr,i+1,j-1));
     dp[i][j] = max(x,y);
     return dp[i][j];
}
int main(){
      int arr[] = {2};
    int n = sizeof(arr) / sizeof(arr[0]);
    memset(dp,-1,sizeof(dp));
    printf("%d\n",
           optimalStrategyofGame(arr, 0,n-1));
    return 0;
}