#include <bits/stdc++.h>
using namespace std;


 void addEdge( map<int,vector<int>> &arr,int x,int y){
    arr[x].push_back(y);
    arr[y].push_back(x);
}
 bool iscyclic(int src,map<int,vector<int>> &adj,map<int,bool>visited,int parent){
     visited[src]=true;
     for(auto i : adj[src]){
        if(i!= parent){
            if(visited[i]){
                return true;
            } if(!visited[i] && iscyclic(i,adj,visited,src)){
                return true;
            }
        }
     }
     return false;

 }
 void cycledetection(map<int,vector<int>> &arr){
     map<int,vector<int>> ::iterator it;
      map<int , bool>visited;
     bool cycle = false;
     for(it = arr.begin();it!=arr.end();it++){
         if(!visited[it->first] && iscyclic(it->first,arr,visited,-1)){
             cycle = true;
         }
     }
     if(cycle){
         cout<<"cycle found"<<endl;
     } else{
         cout<<"cycle not found"<<endl;

     }
 }
int main(){
    map<int,vector<int>> adj;
     addEdge(adj,7,6);
    addEdge(adj,7,9);
    addEdge(adj,6,8);
    addEdge(adj,6,10);
  
    addEdge(adj,9,11);
  cycledetection(adj);
    
 return 0;
}