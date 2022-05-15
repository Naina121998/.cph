#include <bits/stdc++.h>
using namespace std;
int dp[100][100][100];
int lcsof3(string &x,string &y,string &z,int m , int n,int o){
   
    if(m==0 || n==0 || o==0){
        return 0;
    }else if(dp[m][n][o]!=-1){
        return dp[m][n][o];
    }else if(x[m-1]==y[n-1] && x[m-1]==z[o-1]){
        return dp[m][n][o]= 1 + lcsof3(x,y,z,m-1,n-1,o-1);
    }else{
        return dp[m][n][o]= max(max(lcsof3(x,y,z,m-1,n,o),lcsof3(x,y,z,m,n-1,o)),lcsof3(x,y,z,m,n,o-1));
    }
}
int main(){
         string X = "AGGT12XB";
    string Y = "12TXAYB";
    string Z = "12XB";
    memset(dp,-1,sizeof(dp));
    int m = X.length();
    int n = Y.length();
    int o = Z.length();
 
    cout << "Length of LCS is " << lcsof3(X, Y,
                                    Z, m, n, o);
    return 0;
    
}