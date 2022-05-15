#include <bits/stdc++.h>
using namespace std;
void subarraysum(int arr[],int n){
    int len = 2; int maxlen = 2;int key = arr[1]-arr[0];
     for(int i=2;i<n;i++){
          if(arr[i]-arr[i-1]==key){
              len++;
          }else{
             len = 2;
             key = arr[i]-arr[i-1];
          }
          if(len>maxlen){
              maxlen = len;
          }
     }
     cout<< maxlen;
}
int main(){
    int arr[]= {10,7,4,6,8,10,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    subarraysum(arr,n);
    return 0;
}
//subarray possible = nc2 + n = n*(n+1)/2;
//no of subsequences = 2**n;