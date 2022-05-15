#include <bits/stdc++.h>
using namespace std;
vector <vector<int>> ans;

void printarr(vector<vector<int>>ans,int n){
    for(auto it : ans){
       for(auto j: it){
           cout<<j<<" ";
       }
       cout<<endl;
    }
    cout<<endl;
}
void heapPermutation(vector<int> arr,int idx,int n){
   
   if(idx == n ){
       ans.push_back(arr);
       return;
   }
   for(int i = idx ; i<n;i++){
       if(i!=idx && arr[i]==arr[idx]){
           continue;
       }
       swap(arr[idx],arr[i]);
       heapPermutation(arr,idx+1,n);
  
   }
}
int main()
{
   vector<int>  a = {  1,2,3};
    int n = sizeof(a) / sizeof(a[0]);
    heapPermutation(a, 0,n);
    printarr(ans,n);
    return 0;
} 
//for non distinct repeating integers