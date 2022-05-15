#include <bits/stdc++.h>
using namespace std;
void addEdge(vector<int>arr[],int x,int y){
    arr[x].push_back(y);
    arr[y].push_back(x);
}
void printgraph(vector<int>arr[],int n){

 for(int i = 1 ; i<=7 ; i++){
     for(auto x: arr[i]){
         cout<<x<<" ";
     }
     cout<<endl;
 }
    
}
int main(){
    int n = 7;
    vector<int>adj[n+1];
    addEdge(adj, 1,2);
    addEdge(adj, 1 ,3);
    addEdge(adj, 2,4);
    addEdge(adj, 2,5);
    addEdge(adj, 2,6);
    addEdge(adj, 2, 7);
    addEdge(adj, 3,7);
    printgraph(adj, n);
    return 0;
}