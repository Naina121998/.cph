#include <bits/stdc++.h>
using namespace std;
void printarray(int arr[],int start ,int end){
    for(int i = start ;i<end;i++){
        cout<<arr[i]<<" ";
    }
}
void subArray(int arr[],int n){
      
      for(int i = 0 ;i<n;i++){
          int end = i ;
          while(end<=n){
              printarray(arr,i,end);
              cout<<endl;
              end++;
          }
        
      }
       
} 
int main()
{
    int arr[] = {-1,4,7,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "All Non-empty Subarrays\n";
    subArray(arr, n);
    return 0;
}