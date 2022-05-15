#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void addEdge( map<int,vector<int>> &arr,int x,int y){
    arr[x].push_back(y);
    arr[y].push_back(x);
}
int dfs(int v, map<int,vector<int>> &arr,   map<int, bool> &visited){
    if(visited[v]){
        return 0;
    }
    visited[v]= true;
    cout<<v<<" ";
    int ans = 1;
        for(auto i : arr[v]){
            if(!visited[i]){
                ans += dfs(i,arr,visited);
           
          }
        }
    
   return ans; 
}

void connectedcomp(map<int,vector<int>> &arr){
          map<int, bool > visited;
          int n = 11;
           map<int,vector<int>> :: iterator i;
           vector <int> components;
        for(i = arr.begin();i!=arr.end();i++){
         if(!visited[i->first]){
           
            components.push_back(dfs(i->first,arr,visited));
            cout<<endl;
         }
     }
     for(auto i : components){
         cout<< i << " ";
     }
     cout<<endl;
    long long ans = 0 ; 
    for(auto i : components){
        ans += i * (n-i);

    }
    // total no of pair possible between unconnected graphs
    cout<<ans/2<<" "<<endl;

}
int main(){
    map<int,vector<int>> adj;
   
   addEdge(adj,7,6);
    addEdge(adj,7,9);
    addEdge(adj,6,8);
    addEdge(adj,6,10);

    addEdge(adj,2,1);
    addEdge(adj,2,5);
    addEdge(adj,1,3);

    addEdge(adj,11,12);
    connectedcomp(adj);

    return 0;
}