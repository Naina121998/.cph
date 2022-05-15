#include <iostream>
using namespace std;
void heapify(int arr[],int n, int i){
    int l = 2*i + 1;
    int r = 2*i + 2;
    int largest = i;
    if(l<n && arr[l]>arr[i]){
        largest = l;
    }
    if(r<n && arr[r]>arr[largest]){
        largest = r;
    }
    if(largest != i ){
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}
void heapsort(int arr[],int n){
    int start = n/2 - 1;
    for(int i = start ; i>=0;i--){
        heapify(arr,n,i);
    }
}
int extractmax(int arr[],int n){
    if(n==0){
        return 0;
    }
  
     int max = arr[0];
   if(n > 1){
   
    arr[0] = arr[n-1];
    heapify(arr,n,0);
   
    }
     n = n - 1 ;
  
    return max;
}
int kthlargest(int arr[],int n ,int k){
    if(k<1 || k>n){
        return -1;
    }
  
    for(int i = 0 ; i<k-1 ; i ++ ){
        extractmax(arr,n);
    }
    return arr[0];
}
int main(){
   int arr[] = { 12, 3, 5, 7, 19 };
    int n = sizeof(arr) / sizeof(arr[0]), k = 5;
    heapsort(arr,n);
   cout<<kthlargest(arr,n,k);
  
    return 0;
}