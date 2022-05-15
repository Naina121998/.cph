#include <bits/stdc++.h>
using namespace std;
void addEdge(vector<pair<int,int>> adj[], int src, int dest,int wt)
{
    adj[src].push_back({dest,wt});
    
}
bool topologicalsort(int a,stack<int>&st,vector<pair<int,int>>adj[],int N,vector<int>&vis ){
     vis[a]=1;
     for(auto it: adj[a]){
         if(!vis[it.first]){
             topologicalsort(it.first,st,adj,N,vis);

         }
     }
     st.push(a);

     
}
vector<int> shortestpath(int src, int n, vector<pair<int,int>> adj[]) {
    vector<int>vis(n,0);stack<int>st;
    for(int i=0;i<n;i++){
        if(!vis[i]){
          topologicalsort(i,st,adj,n,vis);
        }
    }
   

    vector<int>dist(n,INT_MAX);
    dist[src] = 0;
    while(!st.empty()){
        int temp = st.top();
        st.pop();
        if(dist[temp]!=INT_MAX){
            for(auto it: adj[temp]){
                if(dist[temp]+it.second<dist[it.first]){
                    dist[it.first] = dist[temp]+it.second;
                }
           }
        }
        
    } 
return dist;

}
int main(){
     int n = 6;
	vector<pair<int,int>> adj[n]; 
	addEdge(adj,0, 1, 5);
    addEdge(adj,0, 2, 3);
    addEdge(adj,1, 3, 6);
    addEdge(adj,1, 2, 2);
    addEdge(adj,2, 4, 4);
    addEdge(adj,2, 5, 2);
    addEdge(adj,2, 3, 7);
    addEdge(adj,3, 4, -1);
    addEdge(adj,4, 5, -2);
	vector<int>ans = shortestpath(1, n, adj);
    for(int i=0;i<n;i++){
        if(ans[i]==INT_MAX){
            cout<<"INF"<<" ";
        }else{
            cout<<ans[i]<<" ";
        }
        
    } 

	return 0; 
 
}