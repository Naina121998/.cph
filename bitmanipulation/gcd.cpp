#include <bits/stdc++.h>
using namespace std;
void gcd(int a,int b){
    int rem;
    while(a!=0){
        rem = b%a;
        b =a;
        a = rem;
    }
    cout<<b<<endl;
}
int main(){
    int a = 10,b=15;
    gcd(a,b);
    return 0;
}