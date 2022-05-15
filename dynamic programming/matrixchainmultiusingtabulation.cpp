#include <bits/stdc++.h>
using namespace std;
const int N = 1e3+2;
int dp[N][N];
int MatrixChainOrder(int arr[],int n){
   int dp[n][n];
   for(int i = 0;i<n;i++){
       dp[i][i]=0;
   }

   for(int l = 2;l<n;l++ ){
       for(int i = 1;i<n-l+1;i++){
           int j = i + l -1;
           dp[i][j]=INT32_MAX;
            for(int k = i;k<=j-1;k++){
                dp[i][j] = min(dp[i][j],dp[i][k] + dp[k+1][j]+arr[i-1]*arr[k]*arr[j]);
              
            }
       }
   }
   return dp[1][n-1];
}
int main(){
  int arr[] = { 1, 2, 3, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);
   
    cout << "Minimum number of multiplications is "
         << MatrixChainOrder(arr, n);
    return 0;
}