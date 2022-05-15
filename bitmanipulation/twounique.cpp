#include <bits/stdc++.h>
using namespace std;
int setbits(int n,int pos){
    return ((n & (1<<pos))!=0);
}
void uniquenumber(int arr[],int n){
       int xorsum = 0;
       for(int i= 0;i<n;i++){
           xorsum = xorsum^arr[i];
       }
       int temp = xorsum;
       int pos = 0; 
       int setbit=0;
       
       while(setbit!=1){
           setbit = xorsum & 1;
           pos++;
           xorsum = xorsum>>1;

       }
      
       int newxor=0;
       for(int i= 0 ;i<n;i++){
           if(setbits(arr[i],pos-1)){
              newxor = newxor^arr[i];
           }
       }
     
      cout<<newxor<<endl; 
      cout<<(temp^newxor)<<endl;
}
int main(){
    int arr[]={2,3,4,6,1,8,3,4,6,2};
    int n = 10;
    uniquenumber(arr,n);
    return 0;
}