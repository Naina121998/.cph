#include <bits/stdc++.h>
using namespace std;
const int N = 1e3+2;
int dp[N][N];
int MatrixChainOrder(int arr[],int l,int r){
    if(l>=r){
        return 0;
    }
    if(dp[l][r]!=-1){
        return dp[l][r];
    }
   int min = INT32_MAX;

    for(int k = l;k<r;k++){
       dp[l][r] = MatrixChainOrder(arr,l,k)+MatrixChainOrder(arr,k+1,r)  + arr[l-1]*arr[k]*arr[r];
         if(dp[l][r]<min){
             min = dp[l][r];
         }
    }
    return min;
}
int main(){
  int arr[] = { 1, 2, 3, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i=0;i<N;i++){
        for(int j = 0;j<N;j++){
            dp[i][j]=-1;
        }
    }
    cout << "Minimum number of multiplications is "
         << MatrixChainOrder(arr, 1, n - 1);
    return 0;
}