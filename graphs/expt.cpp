#include <bits/stdc++.h>
using namespace std;
void addEdge(vector<pair<int,int>> adj[], int src, int dest,int wt)
{
    adj[src].push_back({dest,wt});
    
}
bool topologicalsort(int node,stack<int>&st,vector<pair<int,int>>adj[],vector<int>&vis ){
    vis[node] = 1; 
    for(auto it : adj[node]) {
        if(!vis[it.first]) {
            topologicalsort(it.first, st, adj,vis); 
        }
    }
    st.push(node);
     
}
void shortestpath(int src, int N, vector<pair<int,int>> adj[]) {
   vector<int>vis(N,0);
	stack<int> st; 
	for (int i = 0; i < N; i++) 
		if (!vis[i]) 
			topologicalsort(i,  st, adj,vis); 
			
 
	int dist[N]; 
	for (int i = 0; i < N; i++) 
		dist[i] = INT_MAX; 
	dist[src] = 0; 

	while(!st.empty()) 
	{  
		int node = st.top(); 
		st.pop(); 
 
		if (dist[node] != INT_MAX) {
		    for(auto it : adj[node]) {
		        if(dist[node] + it.second < dist[it.first]) {
		            dist[it.first] = dist[node] + it.second; 
		        }
		    }
		}
	} 

	for (int i = 0; i < N; i++) 
		(dist[i] == INT_MAX)? cout << "INF ": cout << dist[i] << " "; 
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
shortestpath(0, n, adj);
    
	return 0; 
 
}