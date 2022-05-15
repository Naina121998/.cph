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

void printHeap(int arr[],int n){
    for(int i = 0;i<n;i++){
        cout<< arr[i]<<" ";
       
    }
     cout<<endl;
}
int extractmax(int arr[],int n){
    if(n < 1){
        return -1;
    }
  
    int max = arr[0];
    arr[0] = arr[n-1];
    n = n - 1;
    heapify(arr,0,n);
    printHeap(arr,n);
   
    return max;
}
void increasekey(int arr[],int key,int i,int n){
    if(arr[i]>key){
        return ;
    }
    arr[i] = key;
   while(i>0 && arr[i-1/2] < arr[i]){
       swap(arr[i-1/2],arr[i]);
       i = i/2;
   }
}
int main(){
    int arr[] = {9,8,7,5,4,3,2};
    int n = sizeof(arr)/sizeof(arr[0]);
   increasekey(arr,14,4,n);
    
    printHeap(arr,n);
    cout<<endl;
    cout<<extractmax(arr,n);
   
    return 0;
}