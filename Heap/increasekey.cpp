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

void increasekey(int arr[],int key,int i,int n){
    if(arr[i]>key){
        return ;
    }
    arr[i] = key;
   while(i>0 && arr[(i-1)/2] < arr[i]){
       swap(arr[(i-1)/2],arr[i]);
       i = (i-1)/2;
   }
}

void decreasekey(int arr[],int key,int i, int n){
    if(arr[i]<key){
        return;
    }
    arr[i] = key;
    heapify(arr,i,n);

}

void printHeap(int arr[],int n){
    for(int i = 0;i<n;i++){
        cout<< arr[i]<<" ";
       
    }
     cout<<endl;
}
void insertion(int arr[],int n,int key){
    n = n + 1 ; 
    arr[n-1] = key;
    int i = n - 1;
    while(i > 0 && arr[(i-1)/2] < arr[i]) {
        swap(arr[(i-1)/2], arr[i]);
        i = (i - 1)/ 2;
    }
    printHeap(arr,n);
}
void deletion(int arr[],int n , int i){
    int max = arr[i];
    arr[i] = arr[n-1];
    n = n - 1 ;
    heapify(arr,i,n);
    printHeap(arr,n);
}
int main(){
    int arr[] = { 10, 5, 3, 2, 4 };
    int arr1[] = {10,5,3,2,4};
    int n = 5;
  
    int key = 15;
    deletion(arr,n,0);
    insertion(arr1, n, key);
  
   
   
    return 0;
}