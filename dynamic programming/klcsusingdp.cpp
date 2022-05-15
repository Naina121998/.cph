#include <bits/stdc++.h>
using namespace std;
int dp[2005][2005][100];
int klcs(int arr1[],int arr2[],int n,int m,int k){
    if(k<1){
       return 0;
    }
     if(n==0 || m==0){
         return 0;
     }
    int &ans = dp[n][m][k];
     if(dp[n][m][k]!=-1){
         return dp[n][m][k];
      }
     ans = max(klcs(arr1,arr2,n-1,m,k),klcs(arr1,arr2,n,m-1,k));

     if(arr1[n-1]==arr2[m-1]){
          return dp[n][m][k]= 1 + klcs(arr1,arr2,n-1,m-1,k);
     }
   
    return  dp[n][m][k]= max(ans,1 + klcs(arr1,arr2,n-1,m-1,k-1));
     
  
     
}
int main(){
    int k = 1;
    int arr1[] = { 1, 2, 3, 4, 5 };
    int arr2[] = { 5, 3, 1, 4, 2 };
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);
 
    memset(dp,-1,sizeof(dp));
   cout<< klcs(arr1,arr2,n,m,k);
    return 0;
}