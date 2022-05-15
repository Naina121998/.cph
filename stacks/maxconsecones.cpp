#include <iostream>
using namespace std;
int longestSubSeg(int arr[],int n , int k){
    int l = 0 ; int mx = 0 ;int count = 0;
    for(int i = 0 ; i<n ;i++){
        if(arr[i]==0){
            count++;
        }
        while(count>k){
            if(arr[l]==0){
                count--;
            }
            l++;
        }
          mx = max(mx,i-l+1);
    }
  
    return mx;
}
int main()
{
   int a[5];
   for(int i =0;i<5;i++){
       cin>>a[i];
   }
    int k = 2;
    int n = sizeof(a) / sizeof(a[0]);
    cout << longestSubSeg(a, n, k);
    return 0;
}