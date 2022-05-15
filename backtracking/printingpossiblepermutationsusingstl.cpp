#include <bits/stdc++.h>
using namespace std;
void printarr(int arr[],int n){
    for(int i = 0 ; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void heapPermutation(int arr[],int n){
    sort(arr,arr+n);
    do{
        printarr(arr,n);
    } while(next_permutation(arr,arr+n));
}
int main()
{
    int a[] = { 2, 1,2};
    int n = sizeof(a) / sizeof(a[0]);
    heapPermutation(a, n);
    return 0;
} 