#include <bits/stdc++.h>
using namespace std;


void addEdge(map<int,vector<int>> &adj,int x,int y){
  adj[x].push_back(y);
  adj[y].push_back(x);
}
void print(map<int,vector<int>> adj){
    map<int,vector<int>> :: iterator it;

    for(it = adj.begin();it!=adj.end();it++){
      cout<<it->first<<" ";
        for(int  i = 0 ; i< it->second.size();i++){
            cout<<it->second[i]<<" ";
        }
        cout<<endl;
    }
}
int main(){
 map<int,vector<int>> adj;
 addEdge(adj,7,6);
    addEdge(adj,7,9);
    addEdge(adj,6,8);
    addEdge(adj,6,10);
    addEdge(adj,9,10);
    addEdge(adj,9,11);
   
    print( adj);





    return 0;
}