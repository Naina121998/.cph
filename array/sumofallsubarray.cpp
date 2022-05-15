#include <bits/stdc++.h>
using namespace std;
void sumofallsubarray(int arr[],int n){
   
    for(int i=0 ;i<n;i++){
        int sum = 0;
        for(int j = i ;j<n;j++){
          sum = sum + arr[j];
          cout<<sum<<" ";
          
        }
         
    }
}
int main(){
    int arr[]= {1,2,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    sumofallsubarray(arr,n);
    return 0;
}
//subarray possible = nc2 + n = n*(n+1)/2;
//no of subsequences = 2**n;