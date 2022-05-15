#include <iostream>
using namespace std;
int minsumsubarray(int arr[],int n,int x){
    int start =0; int end =0;int sum = 0; int maxlen=n+1;
   while(end < n){
       while(sum<=x && end<n){
           sum+=arr[end++];
       }
       while(sum>x && start<n){
           if(end-start<maxlen){
               maxlen=end-start;
           }
           sum-=arr[start++];
       }
   }
   return maxlen;
}
int main(){
    int arr[] = {1, 4, 45, 6, 0, 19};
    int x  =  51;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << minsumsubarray(arr,n,x);
    return 0;
}