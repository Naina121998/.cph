#include <bits/stdc++.h>
using namespace std;
#define v 5
#define INF INT32_MAX
void printsolution(int dist[v][v]){
    bool flag = false;
    for(int i = 0 ; i<v;i++){
        for(int j =0;j<v;j++){
          if(i==j && dist[i][j]!=0){
              cout<<"Negative weighted cycle exist";
              flag = true;
              break;
          }else
            if(dist[i][j]==INF){
                cout <<"INF"<<" ";
            }else{
            cout<<dist[i][j]<<" ";
            }
        }
        if(flag){
            break;
        }
        cout<<endl;
    }
}
 void floydWarshall(int graph[v][v]){
     int dist[v][v];
     for(int i = 0 ; i<v;i++){
         for(int j = 0 ; j<v;j++){
             dist[i][j]=graph[i][j];
         }
     }
bool flag = false;
for(int k = 0 ; k<v;k++){
     for(int i = 0 ; i<v;i++){
         for(int j = 0 ; j<v;j++){
             if(dist[i][k]!=INF && dist[k][j]!=INF && dist[i][j]>dist[i][k]+dist[k][j]){
                 dist[i][j]=dist[i][k] + dist[k][j];
              }
             
         }
     }
    
    } 
 

     printsolution(dist);
    
 }


 
int main(){
    int graph[v][v] = { { 0, -1, INF,INF,INF },
                        { INF, 0, 3, 2,2 },
                        { -1, INF, 0, INF,INF },
                        { INF, -1, 5, 0,INF },
                        {INF,INF,INF,-1,0} };
 
    // Print the solution
    floydWarshall(graph);
    return 0;
}
//time complexity = o(v3)