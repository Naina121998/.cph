#include <bits/stdc++.h>
using namespace std;
void wavesort(int arr[],int n){
   for(int i=1;i<n;i+=2){
       if(arr[i]>arr[i-1] && i>0){
           swap(arr[i],arr[i-1]);
       }
       if(arr[i]>arr[i+1] && i<n-1){
           swap(arr[i],arr[i+1]);
       }
   }
}
int main(){
     int arr[] = {1,3,4,7,5,6,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    wavesort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
//time complexity = o(n);