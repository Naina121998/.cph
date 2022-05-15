#include <bits/stdc++.h>
using namespace std;

void findprime(int b,int a){
   while(a!=0){
       int m = b%a;
       b = a;
       a = m;
   }
   cout<<b<<endl;
}
int main(){
    findprime(30,40);
    return 0;
}