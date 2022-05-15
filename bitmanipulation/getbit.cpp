#include <bits/stdc++.h>
using namespace std;
int getbit(int n,int pos){
    return ((n & (1<<pos))!=0);
}
int setbit(int n,int pos){
    return (n | (1<<pos));
}
int clearbit(int n,int pos){

    return (n & ~(1<<pos));
}
int updatebit(int n,int pos,int val){

     int ans = (n & ~(1<<pos));
     return (ans | val<<pos);
}
int main(){
    cout<<getbit(21,3);
    cout<<endl;
    cout<<setbit(21,3);
    cout<<endl;
    cout<<clearbit(21,2);
     cout<<endl;
    cout<<updatebit(21,1,1);
    return 0;
}