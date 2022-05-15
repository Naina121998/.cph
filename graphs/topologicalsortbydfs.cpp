#include <bits/stdc++.h>
using namespace std;


 void addEdge( map<int,vector<int>> &arr,int x,int y){
    arr[x].push_back(y);

}
void topology(int src,map<int,vector<int>> &adj,map<int,bool> &visited,stack<int> &pq){
        visited[src] = true;
        for(auto i : adj[src])
            if(!visited[i]){
                topology(i,adj,visited,pq);
            }
        
    pq.push(src);
}
 void topologicalsort(map<int,vector<int>> &arr){
    map<int,bool> visited;
     stack<int> pq;
     map<int,vector<int>> :: iterator i;
     for(i = arr.begin();i!=arr.end();i++){
         if(!visited[i->first]){
           
             topology(i->first,arr,visited,pq);
         }
     }
     while(!pq.empty()){
         cout<<pq.top()<<" ";
         pq.pop();
     }
   
    
 }
int main(){
    map<int,vector<int>> adj;
  
   addEdge(adj,1,2);
    addEdge(adj,2,1);
    
 
  topologicalsort(adj);
    
 return 0;
}