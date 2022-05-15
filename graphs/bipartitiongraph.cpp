#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void addEdge(map<int,vector<int>> &arr,int x,int y){
    arr[x].push_back(y);
    arr[y].push_back(x);
}
bool bfs(int v,map<int,vector<int>> &arr){
    map<int, bool > visited;
    map<int,int> color;
    queue <int> pq;
    color[v]=0;
    visited[v]= true;
    pq.push(v);
    while(!pq.empty()){
        int node = pq.front();
        pq.pop();
    
        for(auto i : arr[node]){
            if(!visited[i]){
                color[i]=1- color[node];
                visited[i]=true;
                pq.push(i);
            } else{
                if(visited[i] && color[node]==color[i]){
                    return false;
                   
                }
            }
        }
    }
    return true;
}
    

int main(){
  map<int,vector<int>> adj;
    addEdge(adj,0,1);
    addEdge(adj,1,2);
    addEdge(adj,2,0);
    
  
 
   
   if(bfs(0,adj)){
       cout<<"Bipartite exist";
   } else{
       cout<<"Bipartite doesn't exist";
   }
    return 0;
}