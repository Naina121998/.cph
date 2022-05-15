#include <bits/stdc++.h>
using namespace std;
int dp[1000][1000];
int un_kp(int price[],int length[],int n , int maxlen){
    
    if(maxlen==0 || n==0){
        return 0;
    }
    if(length[n-1]>maxlen){
         return dp[n][maxlen]= un_kp(price, length,n-1,maxlen);
    }else{
        return dp[n][maxlen]= max(price[n-1] + un_kp(price,length,n-1,maxlen-length[n-1]),un_kp(price,length,n-1,maxlen));
    }
    return dp[n][maxlen];
}
int main(){
    int price[] = {1, 5, 8, 9, 10, 17, 17, 20};
    int n = sizeof(price) / sizeof(price[0]);
    int length[n];
    for (int i = 0; i < n; i++) {
        length[i] = i + 1;
    }
    int Max_len = n;
 
    // Function Call
    cout << "Maximum obtained value  is "
         << un_kp(price, length, n, Max_len) << endl;
    return 0;
}