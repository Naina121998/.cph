#include <bits/stdc++.h>
using namespace std;
int dp[1000];
int countpath(int n )
{

  if(n==0){
      return 0;
  }
  if(n==1){
      return 1;
  }
  if(n==2){
      return 2;
  }
  if(dp[n]!=-1){
      return dp[n];
  }else
  {
   dp[n]= countpath(n-1) + (n-1)* countpath(n-2);
  }
  return dp[n];
}
 
// Driver Code
int main()
{
    memset(dp,-1,sizeof(dp));
  cout<< countpath(3);
 
    return 0;
}