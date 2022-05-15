#include <bits/stdc++.h>
using namespace std;
void maxmindiff(int arr[],int n){
    long long mx=0,mn=0; sort(arr,arr+n);
    for(int i = 0 ; i<n/2;i++){
        mx += arr[n/2+i] - arr[i];
        mn += arr[2*i+1]  - arr[2*i] ;
    }
    cout<<mx<<endl;
    cout<<mn<<endl;

}
int main(){
    int arr[]= {10,24,36,30,93,80,47,99};
    int n = sizeof(arr)/sizeof(arr[0]);
    maxmindiff(arr,n);
    return 0;
}