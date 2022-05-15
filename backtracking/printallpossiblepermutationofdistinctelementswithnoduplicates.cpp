#include <bits/stdc++.h>
using namespace std;
void printarr(int arr[],int n){
    for(int i = 0 ; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void heapPermutation(int arr[],int idx,int n){
   
   if(idx == n ){
       printarr(arr,n);
   }
   for(int i = idx ; i<n;i++){
       swap(arr[idx],arr[i]);
       heapPermutation(arr,idx+1,n);
      swap(arr[idx],arr[i]);
   }
}
int main()
{
    int a[] = {  1,2,3};
    int n = sizeof(a) / sizeof(a[0]);
    heapPermutation(a, 0,n);
    return 0;
} 