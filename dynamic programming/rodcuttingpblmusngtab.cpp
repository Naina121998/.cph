#include <bits/stdc++.h>
using namespace std;
int dp[1000][1000];
int un_kp(int price[],int n ){
    
  int val[n+1];
  val[0]=0;
  for(int i= 1;i<=n;i++){
      int ans = INT16_MIN;
      for(int j = 0;j<i;j++){
          
          ans= max(ans,price[j] + val[i-j-1]);
          val[i]= ans;
      }
  }
  return val[n];
}
int main(){
    int price[] = {1, 5, 8, 9, 10, 17, 17, 20};
    int n = sizeof(price) / sizeof(price[0]);
    
    cout << "Maximum obtained value  is "
         << un_kp(price, n) << endl;
    return 0;
}