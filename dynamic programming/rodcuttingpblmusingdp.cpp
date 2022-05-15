#include <bits/stdc++.h>
using namespace std;
int dp[1000][1000];
int un_kp(int price[],int n ){
    
    if(n<=0){
        return 0;
    }
    int res = INT16_MIN;
    for(int i = 0 ;i<n ;i++){
        res = max(res,price[i]+ un_kp(price,n-i-1));
    }
    return res;
}
int main(){
    int price[] = {1, 5, 8, 9, 10, 17, 17, 20};
    int n = sizeof(price) / sizeof(price[0]);
    
    cout << "Maximum obtained value  is "
         << un_kp(price, n) << endl;
    return 0;
}