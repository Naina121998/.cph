#include <bits/stdc++.h>
using namespace std;


 bool issafe(vector<string>ans,int row,int col,int n){
        for(int i=col;i>=0;i--){
            if(ans[row][i]=='Q'){
                return false;
            }
        }
       for(int i=row,j=col;i>=0 && j>=0;i--,j--){
           if(ans[i][j]=='Q'){
               return false;
           }
       }
          for(int i=row,j=col;i<n && j>=0;i++,j--){
           if(ans[i][j]=='Q'){
               return false;
           }
       }
        return true;
    }
    void solve(vector<string>&ans,int col,vector<vector<string>>&board,int n){
        if(col==n){
            board.push_back(ans);
        }
        for(int i=0;i<n;i++){
            if(issafe(ans,i,col,n)){
                ans[i][col]='Q';
               solve(ans,col+1,board,n);
                ans[i][col]='.';
            }
        }

    }
    vector<vector<string>> solveNQueens(int n) {
        
        vector<vector<string>>board;
        if(n==2 || n==3){
            return board;
        }
        string s(n,'.');
        vector<string>ans(n,s);
        solve(ans,0,board,n);
        return board;
        
    }
  

int main()
{
    vector<vector<string>>board = solveNQueens(4);
    for(int i=0;i<board.size();i++){
        for(int j=0;j<board[0].size();j++){
            cout<<board[i][j]<<" ";
            cout<<endl; 
        }
        cout<<endl;
    }
    return 0;
}