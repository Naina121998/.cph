#include <bits/stdc++.h>
using namespace std;

struct edge{
    int src;
    int dst;
    int wt;
};

void printpath(int parent[],int i){
    if(parent[i]==-1){
        return;
    }
    printpath(parent,parent[i]);
    cout<<i<<" ";
}
void print(int parent[],int key[],int x){
     int src = x;
     for(int i = 1 ; i<5;i++){
        
        cout<<src<<" "<<i<<" "<<" :"<<" " <<key[i]<<" : "<<" "<<src<<" ";
        printpath(parent,i);
        cout<<endl;
    }
}

void bellmanford(vector<edge> &edges,int e,int v,int src){
    int parent[v];
    int key[v];
    int  costparent[v];
    for(int i =0 ; i<v;i++){
        key[i]=INT32_MAX; 
    }
    key[0] = 0 ; 
    parent[0]=-1;
    bool updated;
    for(int i = 0 ; i<v-1;i++){
        updated =false;
      
    
        for(int j = 0 ; j<e;j++){
            //to update adj nodes and parent node of adj nodes
            //constraints:
            //1: not included in mst
            //2: value of graph[u][j]<value[j]
            //3: graph[u][j] should not be equal to 0;
            int U = edges[j].src;
            int V = edges[j].dst;
            int wt = edges[j].wt;
            if(key[U]!=INT32_MAX && key[U] + wt< key[V]){
                parent[V] = U;
                key[V] = key[U]+wt;
                costparent[V] = key[V];
                updated = true;
            }
        }
        if(updated==false){
            break;
        }

    }
    for(int j = 0 ; j<e and updated==true;j++){
          int U = edges[j].src;
            int V = edges[j].dst;
            int wt = edges[j].wt;
             if(key[U]!=INT32_MAX && key[U] + wt< key[V]){
                 cout<<"graph has negative edge cycle";
                 return;
             }
    }
      print(parent,key,src);
}
int main(){
    // steps of prim algo:
    //step1: choose the minimum size node
    //step2: include it in mst
    //step3: update the size and parents of adj nodes
    // requires parent array, value array, mst set
    //initialize everything by infinite except source node
    int V = 5;
     int E = 8;
    
     vector<edge> edges;
     for(int i=0;i<E;i++ ){
         int src;int dist;int wt;
         cin>>src>>dist>>wt;
         edges[i].src= src;
         edges[i].dst = dist;
         edges[i].wt = wt;
     }
      bellmanford(edges,E,V,0);
    return 0;
}