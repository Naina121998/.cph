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
}
void graph:: DFS(int v){
   
   
    visited[v] = true;
    cout<<v<<" ";
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DFS(*i);
    
}

int main(){
   

  graph g;
 
    g.addEdge(0, 1);
    g.addEdge(0, 9);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(9, 3);
    g.DFS(2);
    return 0;
}