#include <bits/stdc++.h>
using namespace std;
vector<int> reducedarray(int arr[],int n){
    vector<pair<int,int>> ans;
    for(int i=0;i<n;i++){
        ans.push_back({arr[i],i});
    }
    sort(ans.begin(),ans.end());
    vector<int>res(n,0);
    for(int i=0;i<ans.size();i++){
        res[ans[i].second]=i;
    }
    return res;
}
int main(){
    int arr[]={10,16,7,14,5,3,12,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>res = reducedarray(arr,n);
    for(int i=0;i<res.size();i++ ){
        cout<<res[i]<<" ";
    }
    return 0;
}