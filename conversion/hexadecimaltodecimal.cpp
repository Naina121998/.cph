#include <bits/stdc++.h>
using namespace std;
void binarytodecimal(string s){
    int ans = 0 ;
    int x = 1;
   for(int i = s.size()-1 ;i>=0;i-- ){
       if(s[i]>= '0' && s[i]<='9'){
             ans = ans + x*(s[i]-'0');
       }else if (s[i]>='A' && s[i]<='F'){
           ans = ans + x*(s[i]-'A' + 10);
       }
       x= x*16;
   }
   cout<<ans;
}
int main(){
    binarytodecimal("1CF");
    return 0;
}
