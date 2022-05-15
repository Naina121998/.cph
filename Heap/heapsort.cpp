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
    for(int i = n - 1; i>0;i--){
        swap(arr[i],arr[0]);
        heapify(arr,i,0);
    }
}
void inversearray(int arr[],int n){
    int start = 0 ; int end = n - 1;
    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end]=temp;
        start ++ ;
        end --;
    }
}
void printheap(int arr[],int n){
    for(int i = 0 ; i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
     int arr[] = { 5,23,6,4,2,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    heapsort(arr,n);
    inversearray(arr,n);
    printheap(arr,n);
    return 0;
}