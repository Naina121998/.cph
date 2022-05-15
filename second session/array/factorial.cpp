#include <bits/stdc++.h>
using namespace std;
int isfactorial(int num){
    int n = 1;
    for(int i=2;i<=num;i++){
        n = n * i;
    }
    return n;
}
int main(){

int num = 6;
cout<<isfactorial(num)<<endl;





    return 0;
}