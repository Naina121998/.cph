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
    edges.push_back({2,6,7});
    edges.push_back({5,6,8});
    edges.push_back({7,7,8});
    edges.push_back({8,7,9});
    edges.push_back({1,9,10});
    edges.push_back({3,7,10});
    edges.push_back({9,8,10});
    sort(edges.begin(),edges.end());
   
 
    int cost = 0;
    for(auto i : edges){
        int w = i[0];
        int u = i[1];
        int v = i[2];
        int x = findset(u);
        int y = findset(v);
        if(x==y){
           continue;
        } else{
            cout<<u<<" "<<v<<endl;
            cost += w;
            Union(u,v);
        }
    
    }
    cout<<endl;
    cout<<cost<<endl;
    return 0;
}
//time complexity = o(elogv)