#include <bits/stdc++.h>
#include <vector>
using namespace std;
const int N = 1e5+6;
map<int,int> parent;
map<int,int> size;
void makeparent(int v){
    parent[v]=v;
    size[v]=1;
}
int findset(int v){
    if(parent[v]==v){
        return v;
    } 
    return parent[v]=findset(parent[v]);
}
void Union(int a,int b){
    a = findset(a);
    b = findset(b);

   if(a!=b){
        if(size[a]>size[b]) {
       
            parent[b]=a;
            size[a]+= size[b];
        } else{
            parent[a]=b;
            size[b]+=size[a];
        }
   }
}
int main(){
    for(int i = 0 ; i<N;i++){
        makeparent(i);
    }
 
    vector<vector<int>> edges;
    edges.push_back({7,6});
    edges.push_back({7,9});
    edges.push_back({6,8});
    edges.push_back({6,10});
    edges.push_back({9,11});
    edges.push_back({6,9});
   
    bool cycle=false;

    for(auto i : edges){
        int u = i[0];
        int v = i[1];
        int x = findset(u);
        int y = findset(v);
        if(x==y){
            cycle = true;
        } else{
            Union(u,v);
        }
    }
    if(cycle){
        cout<<"cycle detected";
    } else{
        cout<<"cycle no found";
    }
    return 0;
}