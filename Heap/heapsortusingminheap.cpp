#include <iostream>
using namespace std;
void heapify(int arr[],int n, int i){
    int l = 2*i + 1;
    int r = 2*i + 2;
    int smallest = i;
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
        heapify(arr,n,i);
    }
    for(int i = n - 1;i>0;i--){
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
    }
}
void printheap(int arr[],int n){
    for(int i = 0 ; i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
     int arr[] = { 1,3,6,5,9,8};
    int n = sizeof(arr) / sizeof(arr[0]);
    heapsort(arr,n);

    printheap(arr,n);
    return 0;
}