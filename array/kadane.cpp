#include <bits/stdc++.h>
using namespace std;

void  maxSubArraySum(int arr[],int n){
    int sum=0;int mx= INT16_MIN;
   for(int i= 0 ;i<n;i++){
       sum = sum + arr[i];
    mx = max(mx,sum);
       if(sum<0){
           sum = 0;
        
       }
       
   }
   cout<< mx<<endl;
} 
int main()
{
  int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a)/sizeof(a[0]);
   maxSubArraySum(a, n);
    return 0;
}