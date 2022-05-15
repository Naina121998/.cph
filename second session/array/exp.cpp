#include <bits/stdc++.h>
using namespace std;
vector<int> selectionsort(vector<int>&arr,int n){
    
    for(int i=0;i<n-1;i++){
       
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                swap(arr[i],arr[j]);
            }
        }
     
    }
       
    return arr;
}
int main(){
    vector<int> arr = {26,14,9,13,1};
    int n = arr.size();
   selectionsort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}