#include <bits/stdc++.h>
using namespace std;


 void addEdge( map<int,vector<int>> &arr,int x,int y){
    arr[x].push_back(y);
 
}
 bool iscyclic(int src,map<int,vector<int>> &adj,map<int,bool>&visited,map<int,bool>&stack,int parent){
   if(!visited[src]){
       visited[src] = true;
       stack[src] = true;
       for(auto i : adj[src]){
           if(!visited[i] && iscyclic(i,adj,visited,stack,src)){
               return true;
           }else{
               if(stack[i]){
                   return true;
               }
           }
       }
   }
   stack[src] = false;
   return false;

 }
 void cycledetection(map<int,vector<int>> &arr){
     map<int,vector<int>> ::iterator it;
      map<int , bool>visited;
        map<int , bool>stack;
     bool cycle = false;
     for(it = arr.begin();it!=arr.end();it++){
         if(!visited[it->first] && iscyclic(it->first,arr,visited,stack,-1)){
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
     addEdge(adj,0 ,1);
    addEdge(adj,0,2);
    addEdge(adj,1,2);
     addEdge(adj,3,3);
     addEdge(adj,2,3);
 
  cycledetection(adj);
    
 return 0;
}