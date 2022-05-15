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
     for(int i = 0 ; i<v;i++){
        
        cout<<src<<" "<<i<<" "<<" :"<<" " <<key[i]<<" : "<<" "<<src<<" ";
        printpath(parent,i);
        cout<<endl;
    }
}
void bellmanford(vector<vector<int>>graph,int e,int src){
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
        for(auto j: graph){
            int x = j[0];
            int y = j[1];
            int weight = j[2];
            if(dist[x]!=INT32_MAX && dist[x] + weight < dist[y]){
                dist[y] = dist[x] + weight;
                parent[y] = x;
            }
        }
    }

   //to detect negative weighted cycle
  bool flag = false;
   for(auto i: graph){
       int x =i[0];
       int y = i[1];
       int z = i[2];
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
  
  vector<vector<int>> edges;
    int e = 8;
    
        edges.push_back({0,1,-1});
        edges.push_back({2,0,-1});
        edges.push_back({1,2,3});
        edges.push_back({1,3,2});
        edges.push_back({1,4,2});
        edges.push_back({3,2,5});
        edges.push_back({3,1,1});
        edges.push_back({4,3,-3});
 
 // time complexity = 0(ve)
    bellmanford(edges, e, 2);
    return 0;
}