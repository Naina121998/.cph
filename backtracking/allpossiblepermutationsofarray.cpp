#include <bits/stdc++.h>
using namespace std;
vector<vector<int>>ans;

void heapPermutation(vector<int>&arr,int idx){
    if(idx==arr.size()){
        ans.push_back(arr);
        return;
    }
    for(int i = idx;i<arr.size();i++){
       swap(arr[i],arr[idx]);
       heapPermutation(arr,idx+1);
       swap(arr[i],arr[idx]);
    }
  
}
int main()
{
    vector<int> arr= { 1, 2, 2 };
 
    int n = arr.size();
    heapPermutation(arr, 0);
   for(int i = 0;i<ans.size();i++){
       for(auto x : ans[i]){
           cout<<x<<" ";
       }
       cout<<endl;
   }
    return 0;
} 
//for distinct characters