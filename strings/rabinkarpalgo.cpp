#include <bits/stdc++.h>
using namespace std;
int N = 1e5 + 7; 
vector<long long> power(N);
int p = 31;int m = 1e9 + 7;

int main(){
     string str1 = "abcabcd";
     string str2 = "c";
     power[0]= 1;
      for(int i = 1;i<N;i++){
           power[i]= (power[i-1]*p)%m;  
      }
      int t = str1.size(); int s = str2.size();
          vector<long long> h(t+1,0);
          for(int i = 0 ;i<t;i++){
              h[i+1] = (h[i]+ (str1[i]-'a'+1)* power[i])%m;
          }
          long long h_s = 0 ; 
          for(int i = 0 ;i<s;i++){
              h_s = (h_s + (str2[i]- 'a'+ 1)*power[i])%m;
          }
          for(int i = 0 ; i+ s-1<t;i++){
              long long cur_h = (h[i+s]- h[i]+m)%m;
              if(cur_h==(h_s* power[i])%m){
                  cout<<i<<endl;
              }
          }
    return 0;
}
//time complexity = o(s+t);