#include <bits/stdc++.h>
using namespace std;

int rotOranges(vector<vector<int>> &arr){

  int r = arr.size();
  int c = arr[0].size();
 queue <pair<int,int>> pq;
 int fresh = 0;
  for(int i =0 ; i<r;i++){
      for(int j = 0 ; j<c;j++){
          if(arr[i][j]==2){
          pq.push({i,j});
          }else if(arr[i][j]==1){
              fresh++;
          }
      }
  }

  int t = 0;
   while(!pq.empty()){
       int size = pq.size();
      while(size--){
         
          
           int x = pq.front().first;
           int y = pq.front().second;
            pq.pop();
           if(x > 0 && arr[x-1][y]==1){
                arr[x-1][y]=2; fresh--;
                pq.push({x-1,y});
           }
            if(y > 0 && arr[x][y-1]==1){
                arr[x][y-1]=2; fresh--;
                pq.push({x,y-1});
           }
           if(x < r-1 && arr[x+1][y]==1){
                arr[x+1][y]=2; fresh--;
                pq.push({x+1,y});
           }
           if(y <c-1 && arr[x][y+1]==1){
                arr[x][y+1]=2; fresh--;
                pq.push({x,y+1});
           }
       }
      if(!pq.empty()){
          t++;
      }
   }
  
   return (fresh == 0) ? t : -1; 



}
int main()
{
 
    vector<vector<int>> arr = 
                  { { 2, 1, 0, 2, 1 },
                    { 1, 1 , 1, 0, 2 },
                    { 1, 2, 0, 1, 1 },
                     { 0, 1, 2, 1, 2 } };
 
    cout << "Max time incurred: " << rotOranges(arr);
 
    return 0;
}