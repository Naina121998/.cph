#include <bits/stdc++.h>
using namespace std;
int minJumps(int arr[],int n){
    if(n<=1){
        return 0;
    }
    if(arr[0]==0){
        return -1;
    }
    int maxreach = arr[0];
    int steps= arr[0];
    int jump=1;
    for(int i = 1;i<n;i++){
        maxreach = max(maxreach,arr[i]+i);
        steps--;
        if(steps==0){
               if(i>=maxreach){
                   return -1;
               }else{
                   steps=maxreach-i;
                   jump++;
               }
        }
    }
    return jump;
}
int main(){
    int arr[] = { 1,2,0,1,1,9 };
    int n = sizeof(arr) / sizeof(arr[0]);
    // Calling the minJumps function
    cout << ("Minimum number of jumps to reach end is %d ",
             minJumps(arr, n));
    return 0;
  
}
//time complexity = o(n) and space = o(1);