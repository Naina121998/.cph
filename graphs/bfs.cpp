#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void addEdge(map<int,vector<int>> &arr,int x,int y){
    arr[x].push_back(y);
    arr[y].push_back(x);
}
void bfs(int v,map<int,vector<int>> &arr){
    map<int, bool > visited;
    queue <int> pq;
    visited[v]= true;
    pq.push(v);
    while(!pq.empty()){
        int node = pq.front();
        pq.pop();
        cout<<node<<" ";
        vector<int> :: iterator it;
        for(it = arr[node].begin();it!=arr[node].end();it++){
            if(!visited[*it]){
                visited[*it]=true;
                pq.push(*it);
            }
        }
    }
    
}
int main(){
  map<int,vector<int>> adj;
     addEdge(adj,0, 1);
    addEdge(adj,0, 9);
    addEdge(adj,1, 2);
    addEdge(adj,2, 0);
    addEdge(adj,2, 3);
    addEdge(adj,9, 3);
    bfs(0,adj);
    return 0;
}