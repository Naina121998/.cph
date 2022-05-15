#include <bits/stdc++.h>
using namespace std;
void uniquenumber(int arr[],int n){
     int a=0;
   for(int i=0;i<n;i++){
       a = a ^arr[i];
   }
   cout<<a<<endl;
}
int main(){
    int arr[]={1,3,2,3,2,1,4,6,4,1,3,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    uniquenumber(arr,n);
    return 0;
}