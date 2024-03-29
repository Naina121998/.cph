#include <bits/stdc++.h>
using namespace std;
int sum(int arr[],int from,int to){
    int total = 0;
    for(int i= from;i<=to;i++){
          total += arr[i];
    }
    return total;
}
int partition(int arr[],int n,int k){
       int dp[k+1][n+1];
       memset(dp,-1,sizeof(dp));
        if(k==1){
            return dp[k][n]= sum(arr,0,n-1);
        }if(n==1){
            return dp[k][n]= arr[0];
        }
        int best = INT32_MAX;
        for(int i=1;i<n;i++){
            best = min(best,max(partition(arr,i,k-1),sum(arr,i,n-1)));
            dp[k][n]=best;
        }
        return dp[k][n];
}
int main(){
     int arr[] = { 10, 20, 60, 50, 30, 40 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    cout << partition(arr, n, k) << endl;
 
    return 0;
}