#include <bits/stdc++.h>
using namespace std;
int uniquenumber(int arr[],int n){
       int xorsum = 0;
       for(int i= 0;i<n;i++){
           xorsum = xorsum^arr[i];
       }
       return xorsum;
}
int main(){
     int arr[]={2,4,6,3,4,6,2};
    int n = 7;
    cout<<uniquenumber(arr,n);
    return 0;
}