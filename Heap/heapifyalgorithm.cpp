#include <iostream>
using namespace std; 
void heapify(int arr[], int i,int n){
   int l = 2*i+1;
   int r = 2*i+2;
  
   int largest;
   if(arr[l] > arr[i] && l < n){
       largest = l;
   } else {
       largest = i;
   }
   if(arr[r] > arr[largest] && r<n){
       largest = r;
   } 
   if(largest != i){
       swap(arr[largest],arr[i]);
       heapify(arr,largest,n) ;
   }

}
void printheap(int arr[],int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]= {1,8,6,3,4,2,5};
     int n = sizeof(arr)/sizeof(arr[0]);
    heapify(arr,0,n);
    printheap(arr,n);
    return 0;
}
//time complexity = o(logn)