#include <iostream>
using namespace std;
void heapify(int arr[],int n, int i){
    int l = 2*i + 1;
    int r = 2*i + 2;
    int smallest = i;
 ;
    if(l<n && arr[l]<arr[i]){
        smallest = l;
    }
    if(r<n && arr[r]<arr[smallest]){
        smallest = r;
    }
    if(smallest != i ){
        swap(arr[i],arr[smallest]);
        heapify(arr,n,smallest);
    }
}
void heapsort(int arr[],int n){
    int start = n/2 - 1;
    for(int i = start ; i>=0 ; i--){
        heapify(arr, n,i);
    }
   
}
int extractmin(int arr[],int n){
    if(n==0){
        return 0;
    }
  
     int min = arr[0];
   if(n > 1){
   
    arr[0] = arr[n-1];
    heapify(arr,n,0);
   
    }
     n = n - 1 ;
  
    return min;
}
int kthlargest(int arr[],int n ,int k){
    
    if(n - k <0 || k<1){
        cout<<"DOES NOT EXIST"<<endl;
        return -1;
    }
    for(int i = 0 ; i<n - k ; i ++ ){
        extractmin(arr,n);
    }
    return arr[0];
}
int main(){
    int arr[] = { 12, 3, 5, 7, 19 };
    int n = sizeof(arr) / sizeof(arr[0]), k = 1;
    heapsort(arr,n);
   cout<< kthlargest(arr,n,k);

   
    return 0;
}