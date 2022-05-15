#include <bits/stdc++.h>
using namespace std;
int incbitonic(int arr[],int n){
    int forward[n];int backward[n];
    for(int i= 0 ;i<n;i++){
        forward[i]=1;backward[i]=1;
    }
    for(int i = 1;i<n;i++){
        for(int j = 0;j<i;j++){
            if(arr[i]>arr[j]){
               forward[i]= max(forward[i],forward[j]+1);
            }
        }
    }
    for(int i = n-1;i>=0;i--){
        for(int j = n-1;j>i;j--){
            if(arr[i]>arr[j]){
                backward[i]= max(backward[i],backward[j]+1);
            }
        }
    }
    int maxcount = 0;
    for(int i = 0 ;i<n;i++){
        maxcount = max(maxcount,forward[i]+backward[i]-1);
    }
    return maxcount;

}
int main(){
   int arr[] = {0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5,
              13, 3, 11, 7, 15};
  int n = sizeof(arr)/sizeof(arr[0]);
  cout<<incbitonic(arr,n);
    return 0;
}