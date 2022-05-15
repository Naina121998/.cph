#include <iostream>
#include <algorithm>
using namespace std;
bool iffeasible(int mid,int arr[],int n , int k){
     int pos = arr[0]; int element = 1;
     for(int i = 1;i<n;i++){
         if(arr[i]-pos >= mid){
             pos = arr[i];
             element++;
         }
         if(element == k){
             return true;
         }
     }
     return false;
}
int largestMinDist(int arr[],int n,int k){
    sort(arr,arr+n);
    int result = -1 ; 
    int left = 1 ;
    int right = arr[n-1] - arr[0];
    while(left < right){
        int mid = (left + right)/2;
        if(iffeasible(mid,arr,n,k)){
            result = max(result,mid);
            left = mid +1 ;
        } else {
            right = mid;
        }

    }
    return result;
    
}
int main()
{
    int arr[] = {1, 2, 7, 5, 11, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    cout << largestMinDist(arr, n, k);
    return 0;
}