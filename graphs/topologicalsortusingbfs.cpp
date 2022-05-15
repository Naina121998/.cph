#include <bits/stdc++.h>
using namespace std;


 void addEdge( map<int,vector<int>> &arr,int x,int y, map<int , int>&indegree){
    arr[x].push_back(y);
    indegree[y]++;
 
}
 
 void topologicalsort(map<int,vector<int>> &arr, map<int ,int>&indegree){
     map<int,vector<int>> ::iterator it;

     queue <int> pq;


     for(it = arr.begin();it!=arr.end();it++){
        if(!indegree[it->first] ){
            pq.push(it->first);
        }
     }
     while(!pq.empty()){
         int x = pq.front();
         pq.pop();
         cout<<x<<" ";
         for(auto i : arr[x]){
             indegree[i] = indegree[i]-1;
             if(indegree[i]==0){
                 pq.push(i);
             }
         }
     }
    
 }
int main(){
    map<int,vector<int>> adj;
     map<int , int>indegree;
     
    addEdge(adj,1,2,indegree);
    addEdge(adj,2,1,indegree);
   addEdge(adj,3,1,indegree);
   
  topologicalsort(adj,indegree);
    
 return 0;
}