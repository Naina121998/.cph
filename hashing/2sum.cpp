#include <bits/stdc++.h>
using namespace std;
void printsum(int arr[],int k , int n){
   unordered_set<int> pq;
   for(int i = 0 ; i<n;i++){
      int temp = k - arr[i] ;
      if(pq.find(temp) != pq.end()){
          cout<<temp <<" "<<arr[i]<<endl;
      }
      pq.insert(arr[i]);
   }
}
int main()
{
    int arr[] = { 24, 4,8, 45,6,10,8, -8 };
    int n = 16;
    int arr_size = sizeof(arr) / sizeof(arr[0]);
 
    printsum(arr,n,arr_size);
    
    return 0;
}