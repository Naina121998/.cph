#include <bits/stdc++.h>
  using namespace std;
  
  int kadane(int arr[],int n){
       
       int currsum = 0 ; int maxsum = INT32_MIN;
      for(int i= 0 ;i<n;i++){
      currsum += arr[i];
      if(currsum<0){
          currsum = 0;
      }
    maxsum = max(currsum,maxsum);
  }
 return maxsum;
}

 
  int main() {
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<kadane(a,n);
    return 0;
  }
   
   