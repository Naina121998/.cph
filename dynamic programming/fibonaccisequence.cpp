#include <iostream>
using namespace std;
int fib(int n){
    int dp[n+1];
    for(int i = 0 ; i<=n;i++){
        dp[i]=-1;
    }
    if(n==0 || n==1){
           return n;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    int res = fib(n-1) + fib(n-2);
    dp[n] = res;
    return res;
}
int main(){
    int n = 9;
    cout<<fib(n)<<endl;
    return 0;
}