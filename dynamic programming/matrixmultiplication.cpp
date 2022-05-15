#include <bits/stdc++.h>
using namespace std;
int MatrixChainOrder(int arr[],int l,int r){
    if(l>=r){
        return 0;
    }
    int ans ;int min = INT32_MAX;
    for(int k = l;k<r;k++){
       ans = MatrixChainOrder(arr,l,k)+
        MatrixChainOrder(arr,k+1,r)
        + arr[l-1]*arr[k]*arr[r];

        if(ans<min){
            min = ans;
        }
    }
    return min;
}
int main(){
    int arr[] = { 40,20,30,10,30 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum number of multiplications is "
         << MatrixChainOrder(arr, 1, n - 1);
    return 0;
}