#include <bits/stdc++.h>
using namespace std;
#define v 5
int selectmin(int key[],bool mstset[]){
    int min = INT16_MAX;
    int vertex;
    for(int i = 0 ; i<v;i++){
        if(!mstset[i] && key[i]<=min){
            vertex = i ;
            min = key[i];
        }
    }
    return vertex;
}
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
void djikstra(int graph[v][v],int src){
    int parent[v];
    int key[v];
    bool mstset[v];
    for(int i = 0 ; i<v;i++){
        key[i]=INT16_MAX; mstset[i]=false;
       
    } 
    
    key[src] = 0 ; 
   parent[src]=-1;
    for(int i = 0 ; i<v-1;i++){
        int u = selectmin(key,mstset);
        mstset[u]=true;
        for(int j = 0 ; j<v;j++){
            //to update adj nodes and parent node of adj nodes
            //constraints:
            //1: not included in mst
            //2: value of graph[u][j]<value[j]
            //3: graph[u][j] should not be equal to 0;
            if(graph[u][j]!=0 && mstset[j]==false && key[u]!=INT16_MAX && (graph[u][j] + key[u]< key[j])){
              parent[j] = u;
                key[j] = key[u] + graph[u][j];
                  
            }
        }

    }
    print(parent,key,src);
    
}
int main(){
    // steps of prim algo:
    //step1: choose the minimum size node
    //step2: include it in mst
    //step3: update the distance and parents of adj nodes
    // requires parent array, value array, mst set
    //initialize everything by infinite except source node
          int graph[v][v] = { { 0, -2, 0, 6, 0 }, 
                        { 2, 0, 3, -8, 5 }, 
                        { 0, 3, 0, 0, 7 }, 
                        { 6, -8, 0, 0, 9 }, 
                        { 0, 5, 7, 9, 0 } }; 
      djikstra(graph,0);
    return 0;
}