#include <bits/stdc++.h>
using namespace std;
 int snakeandladder(vector<vector<int>>& board) {
    unordered_map<int,int> snake;
    unordered_map<int,int> ladder;
    vector<int> visited(101,false);
    int timer = 1  ; bool flag = false;
    for(int i=board.size()-1;i>=0;i--){
        if(flag==false){
            for(int j=0;j<board[i].size();j++){
                 
                if(board[i][j]!=-1){
                    
                        ladder[timer] = board[i][j];
                    
                }
               timer++;
                
            }
            flag = true;
        }else {
            for(int j=board[i].size()-1;j>=0;j--){
                if(board[i][j]!=-1){
                  
                        ladder[timer] = board[i][j];
                 
             }
               timer++;
            }
            
             flag = false;
        }
    }
    for(auto it = ladder.begin();it!=ladder.end();it++){
        cout<<it->first<<" "<< it->second<<" ";
        cout<<endl;
    }
    cout<<endl;
     
   
    queue <int> pq;
    pq.push(1);
    visited[1]=true;
    bool found = false;
    int moves =0;
    while(!pq.empty() && !found){
        int sz = pq.size();
        while(sz--){
             int t = pq.front();
                pq.pop();
            for(int die = 1 ; die<=6;die++){
               
                if(t+die==100){
                    found = true;
                }
                if(!visited[ladder[t+die]] && t+die <=100 && ladder[t+die]){
                    visited[ladder[t+die]]=true;
                    if(ladder[t+die]==100){
                        found =true;
                    }
                    pq.push(ladder[t+die]);
                }
                 else if(!visited[snake[t+die]] && t+die <=100 && snake[t+die]){
                    visited[snake[t+die]]=true;
                    if(snake[t+die]==100){
                        found =true;
                    }
                    pq.push(snake[t+die]);
                } else if(t+die<=100 && !snake[t+die] && !ladder[t+die] && !visited[t+die]){
                        visited[t+die] = true;
                        pq.push(t+die);
                }
            }
        } 
        moves++;
    }
    if(found){
        return moves;
    } else {
        return -1;
    }
 }
int main(){
  
    vector<vector<int>> board = {{-1,-1,-1,-1,-1,-1},{-1,-1,-1,-1,-1,-1},{-1,-1,-1,-1,-1,-1},{-1,35,-1,-1,13,-1},{-1,-1,-1,-1,-1,-1},{-1,15,-1,-1,-1,-1}};
   cout<<snakeandladder(board);
    return 0;
}