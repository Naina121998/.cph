#include <bits/stdc++.h>
using namespace std;
void addEdge(vector<int>arr[],int x,int y){
    arr[x].push_back(y);
}
void bfs(int n, vector<int> arr[]){
    queue <int> pq;
    map<int , bool> visited;
    pq.push(n);
    visited[n]=true;
    while(!pq.empty()){
        int node = pq.front();
        pq.pop();
        cout<<node<<" ";
      // to this vertex
 vector<int>::iterator i;
    for (auto i = arr[node].begin(); i != arr[node].end(); ++i){
        if (!visited[*i]){
            visited[*i]= true;
            pq.push(*i);
           }
        }
    }
}

int main(){
   

    vector<int> arr[4];
   addEdge(arr,0, 1);
    addEdge(arr,0, 2);
   addEdge(arr,1, 2);
    addEdge(arr,2, 0);
  addEdge(arr,2, 3);
    addEdge(arr,3, 3);
    bfs(2,arr);
    return 0;
}