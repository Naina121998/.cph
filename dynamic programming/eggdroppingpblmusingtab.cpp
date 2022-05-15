#include <bits/stdc++.h>
using namespace std;
int eggDrop(int n, int k)
{
  int dp[n+1][k+1];
  for(int i = 1;i<=n;i++){
      dp[i][0]=0;
      dp[i][1]=1;
  }
  for(int j =1;j<=k;j++){
      dp[1][j]=j;
  }
  int res;
  for(int i = 2;i<=n;i++){
      for(int j = 2;j<=k;j++){
          
         dp[i][j]= INT32_MAX;
          for(int x=1;x<=j;x++){
          res =  max(dp[i-1][x-1],dp[i][j-x]);
          dp[i][j] = min(1+res,dp[i][j]);
      }
  }
}
  return dp[n][k];
}
int main(){
       int n = 2, k = 36;
    cout << "Minimum number of trials "
            "in worst case with "
         << n << " eggs and " << k
         << " floors is "
         << eggDrop(n, k) << endl;
    return 0;;
}