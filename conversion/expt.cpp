#include <bits/stdc++.h>
using namespace std;

int decimaltobinary(int n ){
    stack<int>pq;
    
    while(n>0){
       int m = n%2;
       pq.push(m);
       n = n/2;

    }
  int ans= 0 ;
   while(!pq.empty()){
      ans = ans*10 + pq.top();
      pq.pop();

   }
   return ans;
}
int main(){
   int n = 11;
    cout<<decimaltobinary(n);
    return 0;
}