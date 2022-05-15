#include <iostream>
using namespace std;
bool find3Numbers(int arr[],int n,int sum){
    for (int i = 0; i < n-2; i++)
    {
      for (int j = i+1; j <n-1; j++)
      {
          for(int k = j+1;k<n;k++){
              if(arr[i]+arr[j]+arr[k]==sum){
                  cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                  return true;
              } 
          }
      }
      
    }
   return false;
    
}
int main()
{
    int A[] = { 1, 4, 45, 6, 10, 8 };
    int sum = 24;
    int arr_size = sizeof(A) / sizeof(A[0]);
    find3Numbers(A, arr_size, sum);
    return 0;
}