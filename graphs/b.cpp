#include <bits/stdc++.h>
using namespace std;
 map<int,list<int>>adj;
 map<int , bool> visited;
    

 void addEdge( int x,int y){
    adj[x].push_back(y);
    adj[y].push_back(x);
}
void DFS(int v){
   
   queue <int> pq;
   
    pq.push(v);
    visited[v]=true;
    while(!pq.empty()){
        int node = pq.front();
        pq.pop();
        cout<<node<<" ";
      list<int>::iterator i;
    for (i = adj[node].begin(); i != adj[node].end(); ++i)
        if (!visited[*i]){
            visited[*i]=true;
            pq.push(*i);
        }
          
    }
}

int main(){
   
    addEdge(1,2);
    addEdge(1, 3);
    addEdge(2,4);
    addEdge(2, 5);
    addEdge(2, 6);
    addEdge(2,7);
    addEdge(3,7);
    DFS(1);
    return 0;
}