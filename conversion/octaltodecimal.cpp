#include <bits/stdc++.h>
using namespace std;
void hexadecimaltodecimal(int n){
    int x = 0;int count = 0;
    while(n>0){
       int m = n%10;
        count = count + m*pow(8,x);
        x = x+1;
       n = n/10;
    }
    cout<< count;
}

int main(){
    hexadecimaltodecimal(114);
    return 0;
}
