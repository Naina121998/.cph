#include <bits/stdc++.h>
using namespace std;
int dp[105][100005];
bool issubset(int arr[],int n,int sum){
    if(n==0){
        return 0;
    }
    if(dp[n][sum]!=-1){
        return dp[n][sum];
    }
    if(sum==0){
        return 1;
    }
    if(arr[n-1]>sum){
        return dp[n][sum]=issubset(arr,n-1,sum);
    }
    if(arr[n-1]<=sum){
        return dp[n][sum]=issubset(arr,n-1,sum) || issubset(arr,n-1,sum-arr[n-1]);
    }
}
int main()
{
    int set[] = {1, 5, 3, 7};
    int sum = 12;
    int n = sizeof(set) / sizeof(set[0]);
     memset(dp,-1,sizeof(dp));
    if (issubset(set, n, sum) == true)
        printf("Found a subset with given sum");
    else
        printf("No subset with given sum");
    return 0;
}