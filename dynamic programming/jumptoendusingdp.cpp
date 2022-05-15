#include <bits/stdc++.h>
using namespace std;
int minJumps(int arr[],int n){
    int jump[n];
    jump[0]=0;
    if(n==0 || arr[0]==0){
        return 0;
    }
    for(int i = 1;i<n;i++){
        jump[i]=INT32_MAX;
        for(int j = 0 ;j<i;j++){
          if(i<=j+arr[j] ){
              jump[i]= min(jump[i],jump[j]+1);
          }
        }
    }
    return jump[n-1];
}
int main(){
   int arr[] = { 2,2,3,1,1,9 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum number of jumps to reach end is "
         << minJumps(arr,n);
    return 0;
}