#include <bits/stdc++.h>
using namespace std;
void maxtilli(int arr[],int n){
    int mx = arr[0];vector<int>a;
    a.push_back(mx);
    for(int i=1;i<n;i++){
        if(arr[i]>mx){
            mx= arr[i];
        }
        a.push_back(mx);
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int arr[]= {0,-9,1,3,-4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    maxtilli(arr,n);
    return 0;
}
//subarray possible = nc2 + n = n*(n+1)/2;
//no of subsequences = 2**n;