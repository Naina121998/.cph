#include <iostream>
using namespace std;
int minimumsum(int arr[],int n,int k){
    if(n<k){
        return -1 ;
    }
    int sum = 0;
   for(int i = 0 ; i< k ; i++){
       sum += arr[i];
   }
   int result = sum;
   for(int i = k ; i<n;i++){
       result = result + arr[i] - arr[i-k];
       sum = min(sum,result);
   }
   return sum;
}
int main(){
    int arr[] = {-2,10,1,3,2,-1,4,5};
    int k = 3;
    int n = sizeof(arr)/sizeof(arr[0]);
   cout<< minimumsum(arr,n,k);
    return 0;
}