#include <bits/stdc++.h>
using namespace std;
void dfs(vector<vector<char>> &arr,int x , int y){
  
   arr[x][y]= '1';

   if(x+1 <arr.size()){
       dfs(arr,x+1,y);
   }
   if(x>1 ){
       dfs(arr,x-1,y);
   }
   if(y+1 <arr[0].size()){
       dfs(arr,x,y+1);
   }
   if(y>1 ){
       dfs(arr,x,y-1);
   }
}



void solve(vector<vector<char> > &A) {
    // Do not write main() function.
     for(int i=0;i<A[0].size();i++){
        if(A[0][i]=='O'){
            dfs(A,0,i);
        }
    }
    
    // rightmost col
    for(int i=1;i<A.size();i++){
        if(A[i][A[0].size()-1]=='O'){
            //cout<<i<<" ";
            dfs(A,i,A[0].size()-1);
        }
    }
    
    // leftmost col
    for(int i=1;i<A.size();i++){
        if(A[i][0]=='O'){
            dfs(A,i,0);
        }
    }
    
    // downmost row
    for(int i=1;i<A[0].size()-1;i++){
        if(A[A.size()-1][i]=='O'){
            dfs(A,A.size()-1,i);
        }
    }
    
    for(int i=0;i<A.size();i++){
        for(int j=0;j<A[0].size();j++){
            if(A[i][j]=='1'){
                A[i][j] = 'O';
            }else if(A[i][j]=='O'){
                A[i][j] = 'X';
            }
        }
    }
     for(int i = 0 ; i<A.size();i++){
    for(int j = 0 ; j<A[0].size();j++){
        cout<<A[i][j]<<" ";
    }
    cout<<endl;
}
    
}
int main(){
 
    vector<vector<char>> arr ;
    arr.push_back({'X','X','X','X'});
     arr.push_back({'X','O','O','X'});
     arr.push_back({'X','X','O','X'});
     arr.push_back({'X','O','X','X'});
  for(int i = 0 ; i<arr.size();i++){
    for(int j = 0 ; j<arr[0].size();j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
       
  
solve(arr);

    return 0;
}