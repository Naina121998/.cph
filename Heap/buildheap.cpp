#include <iostream>
using namespace std;
void heapify(int arr[],int i,int n){
    int l = 2*i + 1;
    int r = 2*i + 2;
    int largest;
    if(arr[l]>arr[i] && l<n){
        largest = l;
    } else {
        largest = i;
    }
    if(arr[r]>arr[largest] && r<n){
        largest = r;
    }
    if(largest != i){
        swap(arr[largest],arr[i]);
        heapify(arr,largest,n);
    }
}
void buildHeap(int arr[],int n){
    int start = (n/2) - 1;
    for(int i =  start;i>=0;i--){
        heapify(arr,i,n);
    }
}
void printHeap(int arr[],int n){
    for(int i = 0;i<n;i++){
        cout<< arr[i]<<" ";
    }
}
int main(){
   int arr[] = { 1, 3, 5, 4, 6, 13, 10, 9, 8, 15, 17 };
  
    int n = sizeof(arr) / sizeof(arr[0]);
  
    buildHeap(arr, n);
  
    printHeap(arr, n);
    return 0;
}
//time complexity= o(n)