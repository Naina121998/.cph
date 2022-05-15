#include <bits/stdc++.h>
using namespace std;

#define v 5

void printpath(int parent[],int i){
    if(parent[i]==-1){
        return;
    }
    printpath(parent,parent[i]);
    cout<<i<<" ";
}
void print(int parent[],int key[],int x){
     int src = x;
     for(int i = 1 ; i<v;i++){
        
        cout<<src<<" "<<i<<" "<<" :"<<" " <<key[i]<<" : "<<" "<<src<<" ";
        printpath(parent,i);
        cout<<endl;
    }
}
void bellmanford(int graph[][3],int e,int src){
    int t = 1;
    while(t--){
    int dist[v];
    int parent[v];
    for(int i = 0;i<v;i++){
        dist[i]=INT32_MAX;
    }
    dist[src]=0;
    parent[src]=-1;
    for(int i = 0 ; i<v-1;i++){
        for(int j = 0 ; j<e;j++){
            if(dist[graph[j][0]]!=INT32_MAX && dist[graph[j][0]] + graph[j][2] < dist[graph[j][1]]){
                dist[graph[j][1]] = dist[graph[j][0]] + graph[j][2];
                parent[graph[j][1]] = graph[j][0];
            }
        }
    }

   //to detect negative weighted cycle
  bool flag = false;
   for(int i = 0 ; i<e;i++){
       int x = graph[i][0];
       int y = graph[i][1];
       int z = graph[i][2];
       if(dist[x]!=INT32_MAX && dist[x]+z <dist[y]){
           flag = true;
            cout<<"negative weighted cycle exist"<<endl;
            break;
            
       }
       

    }
    if(flag==true){
        break;
    } else{
    print(parent,dist,src);
    }
}
   
}
int main()
{
  
    int E =8; // Number of edges in graph
 
    // Every edge has three values (u, v, w) where
    // the edge is from vertex u to v. And weight
    // of the edge is w.
     int graph[][3] = { { 0, 1, -1 }, { 2,0, -3 },
                       { 1, 2, 3 }, { 1, 3, 2 },
                       { 1, 4, 2 }, { 3, 2, 5 },
                       { 3, 1, 1 }, { 4, 3, -2 } };
 
 
    bellmanford(graph, E, 0);
    return 0;
}