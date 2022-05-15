#include <iostream>
using namespace std;
void printarr(int arr[],int n){
    for(int i = 0 ; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void heapPermutation(int arr[],int size,int n){
    if(size==1){
        printarr(arr,n);
        return;
    }
    for(int i = 0 ; i<size;i++){
        heapPermutation(arr,size-1,n);
        if(size%2==1){
            swap(arr[0],arr[size-1]);
        } else {
            swap(arr[i],arr[size-1]);
        }
    }
}
int main()
{
    int a[] = { 1, 2, 3 };
    int n = sizeof a / sizeof a[0];
    heapPermutation(a, n,n);
    return 0;
} 