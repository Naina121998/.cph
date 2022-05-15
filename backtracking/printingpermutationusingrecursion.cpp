#include <bits/stdc++.h>
using namespace std;
set <vector<int>> ans;

void printarr(set<vector<int>>ans,int n){
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
       ans.insert(arr);
       return;
   }
   for(int i = idx ; i<n;i++){
       swap(arr[idx],arr[i]);
       heapPermutation(arr,idx+1,n);
       swap(arr[idx],arr[i]);
   }
}
int main()
{
   vector<int>  a = {  1,2,2};
    int n = sizeof(a) / sizeof(a[0]);
    heapPermutation(a, 0,n);
    printarr(ans,n);
    return 0;
} 