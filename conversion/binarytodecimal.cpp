#include <bits/stdc++.h>
using namespace std;
void binarytodecimal(int n){
   int x = 1;
   int ans = 0;
   while(n>0){
       int lastdigit = n%10;
       ans = ans + x*lastdigit;
       x = x*2;
       n= n/10;
   }
   cout<<ans;
}
int main(){
    binarytodecimal(10111);
    return 0;
}
