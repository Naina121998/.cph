#include <bits/stdc++.h>
using namespace std;
void findFourElements(int arr[],int n , int x){
    unordered_map<int ,pair<int,int>> s;set<vector<int>> mi;
    for(int  i = 0 ; i<n-1;i++){
        for(int j = i +1;j<n ; j++){
             s[arr[i]+ arr[j]]= {i,j};
        }
        
        for(int i = 0 ; i<n-1;i++){
            for(int j = i+1 ; j<n ; j++){
                int sum = arr[i]+arr[j];
          
            int k = x - sum; 
            if(s.find(k)!= s.end()){
                pair <int,int>p = s[k];
                if(p.first != i && p.first != j && p.second != i && p.second != j){
                    vector<int> vi;
                   vi.push_back(arr[i]);
                   vi.push_back(arr[j]);
                   vi.push_back(arr[p.first]);
                   vi.push_back(arr[p.second]);
                   mi.insert(vi);
                   
                }
            }
         }
        }
    }
    vector<vector<int>> ans;
    for(auto i : mi){
        ans.push_back(i);
    }
   for(auto x:ans){
       for(int i = 0 ; i<x.size();i++){
           cout<<x[i]<<" ";
       }
       cout<<endl;
   }
}
int main()
{
    int arr[]= {1 ,0 ,-1, 0 ,-2 ,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int X = 0;
    
    
    findFourElements(arr, n, X);
    return 0;
}