#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n){
    for(int i = 0 ;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void insertionSort(int arr[],int n){
     for(int i = 1;i<n;i++){
         int key = arr[i];
         int j = i-1;
         while(j>=0 && arr[j]>key){
             arr[j+1]= arr[j];
             j = j-1;
         }
         arr[j+1]= key;
     }
}
int main(){
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, n);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}