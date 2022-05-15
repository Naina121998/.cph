#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void addEdge(map<int,vector<int>> &arr,int x,int y){
    arr[x].push_back(y);
    arr[y].push_back(x);
}
bool bfs(int v,map<int,vector<int>> &arr,map<int,bool> &visited,map<int,int>color){
  
   
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
                   break;
                }
            }
        }
    }
    return true;
}
bool bipartition(map<int,vector<int>> &arr)   {
     map<int, bool > visited; map<int,int> color;
     vector<int> components;
     map<int,vector<int>> :: iterator it;
     for(it = arr.begin();it!=arr.end();it++){
         if(!visited[it->first] ){
            components.push_back(bfs(it->first,arr,visited,color));
         }
     }
    for(int i = 0 ; i<components.size()-1;i++){
        if(components[i]==components[i+1]==1){
            continue;
        } else{
            return false;
        }
    }
    return true;
}

int main(){
  map<int,vector<int>> adj;
   addEdge(adj,7,6);
    addEdge(adj,7,9);
    addEdge(adj,6,8);
    addEdge(adj,6,10);
   
     addEdge(adj,0,1);
    addEdge(adj,1,2);
   
    
  if(bipartition(adj)){
      cout<<"it is a bipartion";
  } else {
      cout<<" it is not a bipartition";
  }

 
    return 0;
}