#include <iostream>
#include <bits/stdc++.h>
using namespace std;
const int N = 1e3+2;
int dp[N][N];
int coinchange(int arr[],int n,int x ){
    if(x==0){
        return 1;
    } 
    if(x<0){
        return 0;
    }
    if(n<=0 && x>0){
        return 0;
    }
    if(dp[n][x]!=-1){
        return dp[n][x];
    }
    dp[n][x]= coinchange(arr,n,x-arr[n-1]) +coinchange(arr,n-1,x);
    return dp[n][x];
}
int main(){
     int arr[] = {1, 2, 3};
     for(int i = 0 ; i<N;i++){
         for(int j = 0 ; j<N;j++){
             dp[i][j]=-1;
         }
     }
    int n= sizeof(arr)/sizeof(arr[0]);
    int x = 1024;
    cout<<coinchange(arr,n,x);
    return 0;
}