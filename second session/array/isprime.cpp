#include <bits/stdc++.h>
using namespace std;
bool isprime(int num){
    bool flag =false;
   for(int i=2;i<sqrt(num);i++){
        if(num%i==0){
     
            return false;
        }
    }
    return true;
 
}
int main(){
    int num = 21;
    
   for(int i=2;i<=num;i++){
       if(isprime(i)){
           cout<<i<<" ";
       }
   }


    return 0;
}