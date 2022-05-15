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

void djikstra(int graph[v][v]){
    int parent[v];
    int key[v];
    bool mstset[v];
    for(int i = 0 ; i<v;i++){
        key[i]=INT16_MAX; mstset[i]=false;
    } 

    key[0] = 0 ; 
    parent[0]=-1;
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
              
                key[j] = key[u] + graph[u][j];
                  parent[j] = u;
            }
        }

    }
     for(int i = 0 ; i<v;i++){
        cout<<"0"<<" "<<i<<" "<<" :"<<" " <<key[i];
        cout<<endl;
    }
}
int main(){
    // steps of prim algo:
    //step1: choose the minimum size node
    //step2: include it in mst
    //step3: update the distance and parents of adj nodes
    // requires parent array, value array, mst set
    //initialize everything by infinite except source node
          int graph[v][v] = { { 0, 2, 0, 6, 0 }, 
                        { 2, 0, 3, 8, 5 }, 
                        { 0, 3, 0, 0, 7 }, 
                        { 6, 8, 0, 0, 9 }, 
                        { 0, 5, 7, 9, 0 } }; 
      djikstra(graph);
    return 0;
}
// time complexity = o(v2) can be reduced to 0(vloge)