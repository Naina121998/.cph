#include <bits/stdc++.h>
using namespace std;
int  reverse(int ans){
    int res = 0;
    while(ans>0){
          int lastdigit = ans%10;
          res = res*10 + lastdigit;
          ans = ans/10;
    }
    return res;
}
int addBinary(int a , int b){
    int prevcarry = 0;
    int ans = 0;
    while(a>0 && b>0){
        if(a%2==0 && b%2==0){
            ans = ans*10 + prevcarry;
            prevcarry = 0;
        }
        else if((a%2==1 && b%2==0) || (a%2==0 && b%2==1)){
            if(prevcarry==1){
                ans = ans*10 + 0;
                prevcarry = 1;
            }else{
                ans = ans*10 + 1;
                prevcarry = 0;
            }
        }else{
            if(prevcarry==1){
                ans = ans*10 + 1;
                prevcarry = 1;
            }else{
                ans = ans*10 + 0;
                prevcarry = 1;
            }
        }
        a = a/10;
        b = b/10;
    }
    while(a>0){
        if(prevcarry==1){
            if(a%2==1){
                ans = ans*10 + 0;
                prevcarry = 1;
            }else{
                ans = ans*10 + 1;
                prevcarry = 0;
            }
        }
        else{
            ans = ans*10 + (a%2);
        }
        a = a/10;
    }
     while(b>0){
        if(prevcarry==1){
            if(b%2==1){
                ans = ans*10 + 0;
                prevcarry = 1;
            }else{
                ans = ans*10 + 1;
                prevcarry = 0;
            }
        } else{
            ans = ans*10 + (b%2);
        }
        b = b/10;
    }
    if(prevcarry==1){
        ans = ans*10 + 1;
    }
   
    return ans;
}
int main(){
   int a = 10101, b=11010;
    cout << addBinary(a, b) << endl;
    return 0;
}