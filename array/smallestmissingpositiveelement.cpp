#include <bits/stdc++.h>
using namespace std;

int findMissing(int arr[],int n){
      
      bool visited[n+1];
      for(int i = 0 ;i<=n;i++){
          visited[i]= false;
      }
      for(int i = 0 ;i<=n;i++){
          if(arr[i]>=0 && arr[i]<=n){
              visited[arr[i]]=true;
          }
      }
      for(int i = 1;i<=n;i++){
          if(!visited[i]){
              return i;
          }
      }
      return n+1;
} 
int main(){
    int arr[] = { -2,-12,3,4,6 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    int missing = findMissing(arr, arr_size);
    cout << "The smallest positive missing number is " << missing;
    return 0;
   
}