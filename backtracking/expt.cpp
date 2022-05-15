#include <bits/stdc++.h>
using namespace std;
#define n 4
vector<vector<vector<int>>>ans;
bool ifsafe(vector<vector<int>>arr, int x, int y){
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
bool solveNQUtil(vector<vector<int>>arr , int x ){
    if(x>=n){
        ans.push_back(arr);
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

void printSolution(vector<vector<vector<int>>>board ){
    for(int i = 0 ; i<board.size() ; i++){
        for(int j = 0 ; j<board[i][0].size();j++){
            for(int k=0;k<board[i][0].size();k++){
                cout<<board[i][j][k]<<" ";
            }
          cout<<endl;
        }
        cout<<endl;
    }
}
bool solve()
{
    vector<vector<int>>board = { { 0, 0, 0, 0 },
                        { 0, 0, 0, 0 },
                        { 0, 0, 0, 0 },
                        { 0, 0, 0, 0 } };
  
    if (solveNQUtil(board,0) == false) {
        printf("Solution does not exist");
        return false;
    }
  
    printSolution(ans);
    return true;
}
  

int main()
{
    solve();
    return 0;
}