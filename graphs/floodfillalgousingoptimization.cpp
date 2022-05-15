#include <bits/stdc++.h>
using namespace std;
#define m 8
#define n 8
bool isvalid(int x , int y){
    if(x<0 || y<0){
        return 0;
    }
    if(x>=m || y>=n){
        return 0;
    }
    return 1;
}
void floodFill(int arr[][n],int x,int y,int color){
    int vis[101][101];
    memset(vis,0,sizeof(vis));
    queue <pair<int,int>> obj;
    obj.push({x,y});
    vis[x][y]=1;
    while(!obj.empty()){
        pair<int,int>coord = obj.front();
        int x = coord.first;
        int y = coord.second;
        int precolor = arr[x][y];
        arr[x][y]= color;
        obj.pop();
        if(isvalid(x+1,y) && vis[x+1][y]==0 && arr[x+1][y]==precolor){
           obj.push({x+1,y});
           vis[x+1][y]=1;
        }
        if(isvalid(x-1,y) && vis[x-1][y]==0 && arr[x-1][y]==precolor){
           obj.push({x-1,y});
           vis[x-1][y]=1;
        }
        if(isvalid(x,y+1) && vis[x][y+1]==0 && arr[x][y+1]==precolor){
           obj.push({x,y+1});
           vis[x][y+1]=1;
        }
        if(isvalid(x,y-1) && vis[x][y-1]==0 && arr[x][y-1]==precolor){
           obj.push({x,y-1});
           vis[x][y-1]=1;
        }
    }
    for(int i = 0 ;i<m;i++){
        for(int j = 0 ;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
   ;
    int screen[m][n] = {{1, 1, 1, 1, 1, 1, 1, 1},
                      {1, 1, 1, 1, 1, 1, 0, 0},
                      {1, 0, 0, 1, 1, 0, 1, 1},
                      {1, 2, 2, 2, 2, 0, 1, 0},
                      {1, 1, 1, 2, 2, 0, 1, 0},
                      {1, 1, 1, 2, 2, 2, 2, 0},
                      {1, 1, 1, 1, 1, 2, 1, 1},
                      {1, 1, 1, 1, 1, 2, 2, 1},
                     };
    int x = 4, y = 4, newC = 3;
    floodFill(screen, x, y, newC);
 
    cout << "Updated screen after call to floodFill: \n";
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
           cout << screen[i][j] << " ";
        cout << endl;
    }
    return 0;
}