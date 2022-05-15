#include <bits/stdc++.h>
using namespace std;

int  maxSubArraySum(int arr[],int n){
    int sum=0;int mx= INT16_MIN;int start = 0 ; int end = 0;int s =0;
   for(int i= 0 ;i<n;i++){
       sum = sum + arr[i];
      if(sum>mx){
          mx = sum;
          end = i;
          start = s;
      }
       if(sum<0){
           sum = 0;
           s = i+1;
       }
       
   }
   cout<< mx<<" "<<start<<" "<<end<<endl;
} 
int main()
{
  int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a)/sizeof(a[0]);
   maxSubArraySum(a, n);
    return 0;
}