#include <bits/stdc++.h>
using namespace std;
void uniquenumber(int arr[],int n){
    unordered_map<int,int> ans;
    for(int i = 0 ;i<n;i++){
        ans[arr[i]]++;
    }
    for(auto i = ans.begin();i!=ans.end();i++){
        if(i->second==1){
            cout<< i->first<<" ";
        }
    }
}
int main(){
    int arr[]={1,3,2,3,7,2,1,1,3,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    uniquenumber(arr,n);
    return 0;
}