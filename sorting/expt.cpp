#include <bits/stdc++.h>
using namespace std;

vector<int> countsort(vector<int>&arr,int n){
    int mx = arr[0];
     for(int i=0;i<n;i++){
          mx = max(mx,arr[i]);
     }
  
     vector<int>a(mx+1,0);vector<int>ans(n,0);
     for(int i=0;i<n;i++){
       a[arr[i]]++;
     }
     for(int i=1;i<=mx;i++){
           a[i] = a[i] + a[i-1];
     }
     for(int i=n-1;i>=0;i--){
    
        ans[--a[arr[i]]] = arr[i];
     }
     return ans;
}

int main(){
   vector<int> arr = { 3,7,5,9,8,5,1,3};
    int n = arr.size();
    vector<int>ans = countsort(arr,n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
//time complexity = o(n2);average=nlogn