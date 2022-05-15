#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> subset(int arr[],int n){
    vector<int> subset;vector<vector<int>> result;
    for(int i=0;i<(1<<n);i++)
    { 
        for(int j=0;j<n;j++){
        if(i & (1<<j)){
           subset.push_back(arr[j]);
        }
      
       }
       result.push_back(subset);
       subset.clear();
    }
    return result;   
}
int main(){
    int arr[]={1,2,3};
    vector<vector<int>> res = subset(arr,3);
    for (int i = 0; i < res.size(); i++) {
        for (int j = 0; j < res[i].size(); j++)
            cout << res[i][j] << " ";
        cout << endl;
    }
    return 0;
}