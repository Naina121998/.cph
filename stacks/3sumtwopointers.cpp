#include <bits/stdc++.h>
#include <iostream>
using namespace std;
bool find3Numbers(int arr[],int n,int sum){
       sort(arr, arr + n);
    int l ,r;
    for(int i = 0 ;i<n-2;i++){
         l = i+1;
         r = n-1;
        while(l<r){
            if(arr[i]+arr[l]+arr[r]==sum){
                cout<<arr[i]<<" "<<arr[l]<<" "<<arr[r]<<endl;
                return true;
            } else if (arr[i]+arr[l]+arr[r]<sum){
                l++;
            } else {
                r--;
            }
        }
    }
    return false;
}
int main()
{
    int A[] = { 1, 4, 45, 6, 10, 8 };
    int sum = 220;
    int arr_size = sizeof(A) / sizeof(A[0]);
 
    find3Numbers(A, arr_size, sum);
 
    return 0;
}