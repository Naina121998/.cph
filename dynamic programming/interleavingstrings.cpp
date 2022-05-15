#include <bits/stdc++.h>
using namespace std;
int interleaving(string a,string b,string c,int m , int n , int o){
    int dp[m+1][n+1];
    memset(dp,0,sizeof(dp));
    for(int i = 0;i<=m;i++){
        for(int j = 0 ; j<=n;j++){
            if(i==0 && j==0){
                dp[i][j]= 1;
            }
            if(i==0 && b[j-1]==c[j-1]){
            dp[i][j]=dp[i][j-1];
            }
            if(j==0 && a[i-1]==c[i-1]){
            dp[i][j]= dp[i-1][j];
            }
            if(a[i-1]==c[i+j-1] && b[j-1]!=c[i+j-1]){
                dp[i][j]= dp[i-1][j];
            }
            if(a[i-1]!=c[i+j-1] && b[j-1]==c[i+j-1]){
                dp[i][j]= dp[i][j-1];
            }
             if(a[i-1]==c[i+j-1] && b[j-1]==c[i+j-1]){
                dp[i][j]= dp[i][j-1] || dp[i-1][j];
            }
        }
    }
    return dp[m][n];
}
bool test(string a,string b,string c){
    int m = a.length();
    int n = b.length();
    int o  = c.length();
    bool ans;
    if(m + n != o){
        return false;
    }else{
     ans = interleaving(a,b,c,m,n,o);
    }
    return ans;

}
int main(){
    cout<< test("XY", "ZW", "WZXY");
  ;
    return 0;
}