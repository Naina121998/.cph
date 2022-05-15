#include <bits/stdc++.h>
using namespace std;
int longestincsubseq(int arr[],int n){
    int dp[n];
    for(int i =0 ;i<n;i++){
        dp[i]=1;
    }
    for(int i = 1;i<n;i++){
        for(int j = 0 ;j<i;j++){
            if(arr[i]>arr[j]){
                dp[i]= max(dp[i],dp[j]+1);
            }
        }
    }
    int max = dp[0];
    for(int i = 1 ; i<n;i++){
         if(dp[i]>max){
             max = dp[i];
         }
    }
    return max;

}
int main(){
    int arr[] = { 10, 22, 9, 33, 21, 50, 41, 60 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<longestincsubseq(arr,n);
    return 0;
}
//time complexity = o(n2) spaxe = o(n)