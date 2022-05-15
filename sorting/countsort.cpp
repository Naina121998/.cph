#include <bits/stdc++.h>
using namespace std;

void countsort(vector<int>&arr,int n){
   int k =arr[0];
   for(int i=0;i<n;i++){
       if(arr[i]>k){
           k = arr[i];
       }
   }
   vector<int>count(k+1,0);
   for(int i=0;i<n;i++){
       count[arr[i]]++;
   }
   for(int i=1;i<=k;i++){
        count[i]=count[i]+count[i-1];
   }
   vector<int> output(n,0);
   for(int i = n-1;i>=0;i--){
       output[--count[arr[i]]]=arr[i];
   }
   for(int i=0;i<n;i++){
       arr[i]=output[i];
   }
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
   vector<int> arr = { 3,7,5,9,8,5,1,3};
    int n = arr.size();
    countsort(arr,n);
    
    return 0;
}
//time complexity = o(n2);average=nlogn