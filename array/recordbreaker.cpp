#include <bits/stdc++.h>
using namespace std;
int RecordBreaker(int arr[],int n){
    int count = 0 ;int mx = -1;
      for(int i= 0 ;i<n-1;i++){
         
          if(arr[i]>arr[i+1] && arr[i]>mx){
              count++;
          }
         
          mx = max(mx,arr[i]);
      }
      if(arr[n-1]>mx){
          count = count + 1;
      }
      return count;
      
}
int main(){
    int arr[]= {1,2,0,7,2,0,2,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<RecordBreaker(arr,n);
    return 0;
}
//subarray possible = nc2 + n = n*(n+1)/2;
//no of subsequences = 2**n;