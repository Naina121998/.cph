#include <bits/stdc++.h>
using namespace std;
int getbit(int n,int pos){
    return ((n & (1<<pos))!=0);
}
int setbit(int n , int pos){
    return (n | (1<<pos));
}
void uniquenumber(int arr[],int n){
   int result = 0;
   for(int i=0;i<64;i++){
       int sum =0;
       for(int j=0;j<n;j++){
            if(getbit(arr[j],i)){
                sum++;
            }
       }
       if(sum%3!=0){
          result = setbit(result,i);
       }
      
   }
   cout<<result<<endl;
}
int main(){
  int arr[]={1,3,2,3,7,2,1,1,3,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    uniquenumber(arr,n);
    return 0;
}