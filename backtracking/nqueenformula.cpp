#include <iostream>
using namespace std;
#define n 4

bool ifsafe(int arr[n][n], int x, int y){
   for(int row = 0 ;row<x;row++){
       if(arr[row][y] == 1) 
       return false;
   }
   int row = x;
   int col = y;
   while(row>=0 && col >=0){
       if(arr[row][col]==1){
           return false;
       }
       row--;
       col --;
   }
    row = x;
    col = y;
    while(row>=0 && col < n){
       if(arr[row][col]==1){
           return false;
       }
       row--;
       col ++;
   }
   return true;

}
bool solveNQUtil(int arr[n][n], int x ){
    if(x>=n){
      
        return true;
    }
    for(int col = 0 ; col<n;col++){
    if(ifsafe(arr,x,col)){
       arr[x][col]=1;
           if(solveNQUtil( arr,  x+1 )){
              return true;
           }
           arr[x][col]=0;
          
           }
    }
    return false;
}

void printSolution(int board[n][n] ){
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<n;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
}
bool solveNQ()
{
    int board[n][n] = { { 0, 0, 0, 0 },
                        { 0, 0, 0, 0 },
                        { 0, 0, 0, 0 },
                        { 0, 0, 0, 0 } };
  
    if (solveNQUtil(board,0) == false) {
        printf("Solution does not exist");
        return false;
    }
  
    printSolution(board);
    return true;
}
  

int main()
{
    solveNQ();
    return 0;
}