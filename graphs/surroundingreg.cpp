#include <iostream>
#include <vector>
using namespace std;
void dfs(vector<vector<char>> &arr,int x , int y){
   arr[x][y]= '1';
   int dx[] = {0,-1,0,1};  // r u l d
   int dy[] = {1,0,-1,0};
   for(int i = 0 ; i<4;i++){
       int cx = x + dx[i];
       int cy = y + dy[i ];
       if(cx >=0 && cy>=0 && cy<arr.size() && cx < arr[0].size() && arr[cx][cy]=='O' ){
           dfs(arr,cx,cy);
       }
   }
   
}



void solve(vector<vector<char> > &A) {
      for(int i=0;i<A.size();i++){
         for(int j=0;j<A[0].size();j++){
             if(i==0 || j==(A[0].size()-1) || j==0 || i ==(A.size()-1)){
                if(A[i][j]=='O'){
                  dfs(A,0,i);
                }
             }
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
    return;
}
int main(){
      
      int n = 4;int m = 4;
    vector<vector<char>> arr {{'X','X','X','X'},
           {'X','O','O','X'},
           {'X','X','O','X'},
           {'X','O','X','X'},
        };
     
solve(arr);
for(int i = 0 ; i<arr.size();i++){
    for(int j = 0 ; j<arr[0].size();j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
     
    return 0;
}