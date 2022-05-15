#include <bits/stdc++.h>
using namespace std;
int countpath(int n )
{
  int dp[n+1];
  memset(dp,-1,sizeof(dp));
  if(n==0){
      return 0;
  }
  if(n==1){
      return 1;
  }
  if(dp[n]!=-1){
    return dp[n];
  }
   return dp[n]= countpath(n-1) + countpath(n-2);
}
 
// Driver Code
int main()
{
    
  cout<< countpath(4);
 
    return 0;
}