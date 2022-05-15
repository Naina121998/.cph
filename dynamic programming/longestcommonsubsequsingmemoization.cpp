#include <bits/stdc++.h>
using namespace std;

int lcs(string &a,string &b,int m,int n,vector<vector<int>>dp){
  
    if(n==0 || m==0){
        return 0 ;
    }
    if(dp[m][n]!=-1){
         return dp[m][n];
    }
    if(a[m-1] == b[n-1]){
        dp[m][n]= 1 + lcs(a,b,m-1,n-1,dp);
    }
    else{
        dp[m][n]=max(lcs(a,b,m-1,n,dp) , lcs(a,b,m,n-1,dp));
    }
    return dp[m][n];

}
int main() 
{ 

    string a = "AGGTAB"; 
    string b = "GXTX YB"; 
    int m = a.length(); 
    int n = b.length();  
vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
    
    cout<<"Length of LCS is "<< lcs(a,b,m,n,dp) ; 
      
    return 0; 
} 