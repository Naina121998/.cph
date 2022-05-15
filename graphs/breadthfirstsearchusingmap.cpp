#include <bits/stdc++.h>
using namespace std;

class graph{
    public:
     map<int,list<int>>adj;
     map<int , bool> visited;
     void addEdge(int x,int y);
     void DFS(int v);
};
void graph:: addEdge( int x,int y){
    adj[x].push_back(y);
    adj[y].push_back(x);
}
void graph:: DFS(int v){
   
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
   

  graph g;
    g.addEdge(1,2);
    g.addEdge(1, 3);
    g.addEdge(2,4);
    g.addEdge(2, 5);
    g.addEdge(2, 6);
    g.addEdge(2,7);
    g.addEdge(3,7);
    g.DFS(1);
    return 0;
}