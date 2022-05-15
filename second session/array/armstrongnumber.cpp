#include <bits/stdc++.h>
using namespace std;
int cube(int n){
    int num = n*n*n;
    return num;
}
int main(){
    int n ;int count = 0;cout<<"enter a number:";
    cin>>n;int orig = n;
    while(n>0){
        int m = n%10;
       
        count += cube(m);
   
        n = n/10;
    }
   
    if(count==orig){
      cout<<"armstrong number"<<endl;
    }else{
        cout<<"not a armstrong number"<<endl;
    }
  
    return 0;
}