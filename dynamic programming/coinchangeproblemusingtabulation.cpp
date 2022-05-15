#include <bits/stdc++.h>
using namespace std;
int coinchange(int arr[],int n,int amt){
    vector<vector<int>> dp(n+1,vector<int>(amt+1));
    
    for(int i = 0 ; i<=n;i++){
        dp[i][0]=1;
    }
    for(int i = 1 ; i<=amt;i++){
         dp[0][i]=0;
    }
    for(int i = 1;i<=n;i++){
        for(int j = 1; j<=amt;j++){
            if(j>=arr[i-1]){
                dp[i][j]=dp[i][j-arr[i-1]]+ dp[i-1][j];
            } else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    return dp[n][amt];

}
int main(){
    int arr[]={1,2,3};
    int amount =1024;
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<coinchange(arr,n,amount);

    return 0;
}
//time complexity o(n*amt);