#include <iostream>
using namespace std;
bool ifsafe(int arr[4][4], int x, int y,int n){
    if(arr[x][y]==1 && x<n && y<n){
        return true;
    }
    return false;
}
bool ratinmaze(int arr[4][4],int solarr[4][4],int x,int y , int n ){
    if(x==n-1 && y==n-1 && arr[x][y]==1){
        solarr[x][y]=1;
        return true;
    }
    if(ifsafe(arr,x,y,n)){
        solarr[x][y] = 1;
        if(ratinmaze(arr,solarr,x+1,y,n)){
            return true;
        }
         if(ratinmaze(arr,solarr,x,y+1,n)){
            return true;
        }
        solarr[x][y] = 0; //backtracking
        return false;
    }
    return false;
}

void solveMaze(int solarr[4][4] ,int n){
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<n;j++){
            cout<<solarr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int maze[4][4] = { { 1, 0, 0, 0 },
                    { 1, 1, 0, 1 },
                    { 0, 1, 0, 0 },
                    { 1, 1, 1, 1 } };
 int n = 4;
 int solarr[4][4];
    for(int i = 0 ; i<n;i++){
        for(int j = 0 ; j<n ; j++){
            solarr[i][j] = 0 ;
        }
    }

    ratinmaze(maze,solarr,0,0,4);
    solveMaze(solarr,n);
    return 0;
}