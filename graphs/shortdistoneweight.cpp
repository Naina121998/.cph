#include <bits/stdc++.h>
using namespace std;
void add_edge(vector<int> adj[], int src, int dest)
{
    adj[src].push_back(dest);
    adj[dest].push_back(src);
}
int shortestdistance(vector<int>adj[],int src,int dest,int v){
         vector<int>dist(v,INT16_MAX);
         queue<int>pq;
         pq.push(src);
         dist[src] = 0;
         while(!pq.empty()){
              int temp = pq.front();
              pq.pop();
              for(auto it: adj[temp]){
                  if(dist[temp]+1 < dist[it]){
                      dist[it] = dist[temp]+1;
                      pq.push(it);
                  }
              }
         }
         return dist[dest];
}
int main()
{
    
    int v = 8;
 
    vector<int> adj[v];
 
    add_edge(adj, 0, 1);
    add_edge(adj, 0, 3);
    add_edge(adj, 1, 2);
    add_edge(adj, 3, 4);
    add_edge(adj, 3, 7);
    add_edge(adj, 4, 5);
    add_edge(adj, 4, 6);
    add_edge(adj, 4, 7);
    add_edge(adj, 5, 6);
    add_edge(adj, 6, 7);
    int source = 1, dest =7;
   cout<< shortestdistance(adj, source, dest, v);
    return 0;
}