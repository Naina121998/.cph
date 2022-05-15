#include <bits/stdc++.h>
using namespace std;
map<int,list<int>>adj;
map<int , bool> visited;

void addEdge( int x,int y){
    adj[x].push_back(y);
}
void DFS(int v){
   
   
    visited[v] = true;
    cout<<v<<" ";
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DFS(*i);
    
}

int main(){
   


 
    addEdge(0, 1);
    addEdge(0, 9);
    addEdge(1, 2);
    addEdge(2, 0);
    addEdge(2, 3);
    addEdge(9, 3);
    DFS(2);
    return 0;
}