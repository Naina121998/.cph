#include <bits/stdc++.h>
using namespace std;
int maxsumsubarray(int arr[],int start ,int end){
    int sum = 0 ;int mx= INT32_MIN;
    for(int i = start ;i<end;i++){
        sum += arr[i];
        
    }
   
    return sum;
}
int  subArray(int arr[],int n){
   int mx = INT16_MIN;   
      for(int i = 0 ;i<n;i++){
          int end = i ;
          while(end<=n){
              
              mx = max(mx,maxsumsubarray(arr,i,end));
              end++;
          }
        
      }
      return mx;
       
} 
int main()
{
   int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a)/sizeof(a[0]);
    cout << "All Non-empty Subarrays\n";
   cout<<subArray(a, n);
    return 0;
}