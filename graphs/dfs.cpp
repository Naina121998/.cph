#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void addEdge( map<int,vector<int>> &arr,int x,int y){
    arr[x].push_back(y);
    arr[y].push_back(x);
}
void dfs(int v, map<int,vector<int>> &arr,   map<int, bool> &visited){

    visited[v]= true;
    cout<<v<<" ";

        for(auto i : arr[v]){
            if(!visited[i]){
                visited[i]=true;
                 dfs(i,arr,visited);
            }
        }
    
    
}
int main(){
    map<int,vector<int>> adj;
       map<int, bool > visited;
   addEdge(adj,7,6);
    addEdge(adj,7,9);
    addEdge(adj,6,8);
    addEdge(adj,6,10);
    addEdge(adj,9,10);
    addEdge(adj,9,11);
    dfs(7,adj,visited);
    return 0;
}