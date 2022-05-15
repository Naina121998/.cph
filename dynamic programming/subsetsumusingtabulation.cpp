#include <bits/stdc++.h>
using namespace std;
bool issubset(int arr[],int n,int sum){
   bool dp[n+1][sum+1];
   for(int i=0;i<=n;i++){
       dp[i][0]= true;
   }
   for(int i= 1;i<=sum;i++){
       dp[0][i]= false;
   }
   for(int i = 1;i<=n;i++){
       for(int j=1;j<=sum;j++){
           if(j<arr[i-1]){
               dp[i][j]= dp[i-1][j];
           }
           if(j>=arr[i-1]){
               dp[i][j]= dp[i-1][j] || dp[i-1][j-arr[i]];
           }
       }
   }
   return dp[n][sum];


}
int main()
{
    int set[] = {1, 5, 3, 7};
    int sum = 21;
 
    int n = sizeof(set) / sizeof(set[0]);
    if (issubset(set, n, sum) == true)
        printf("Found a subset with given sum");
    else
        printf("No subset with given sum");
    return 0;
}