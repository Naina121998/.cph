#include <bits/stdc++.h>
using namespace std;
#define m 8
#define n 8
void floodfill(int arr[][n],int x,int y,int pcolor,int color){
        if(x<0 || y<0 || x>=m || y>=n){
            return ;
        } 
        if(arr[x][y]!=pcolor){
            return;
        }
        if(arr[x][y]==color){
            return;
        }
        arr[x][y]= color;
        floodfill(arr,x+1,y,pcolor,color);
        floodfill(arr,x,y+1,pcolor,color);
        floodfill(arr,x-1,y,pcolor,color);
        floodfill(arr,x,y-1,pcolor,color);
}
void floodFill(int arr[][n],int x,int y,int color){
    int pcolor = arr[x][y];
    floodfill(arr,x,y,pcolor,color);
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