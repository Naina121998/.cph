#include <bits/stdc++.h>
using namespace std;
int countofsub(int arr[],int n ,int k){
   int count = 0; 
    for(int i = 0 ; i<n ; i++){
        int sum = 0; 
        for(int j = i;j<n;j++){
            sum = sum + arr[j];
              if(sum==0){
                count++;
            }
      }
    
    }
    return count;
}
int main()
{
    int arr[] = {1,-2,1,3,-3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 0;
    cout<<countofsub(arr,n,k);
    
  
    return 0;
}