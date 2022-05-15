#include <bits/stdc++.h>
using namespace std;
void snakeandladder(vector<vector<int>> &a,vector<vector<int>> &b){
    unordered_map<int,int> snake;
    unordered_map<int,int> ladder;
    vector<int> visited(101,false);
    for(auto i : a){
        snake[i[0]] = i[1];
    }
     for(auto i : b){
        ladder[i[0]] = i[1];
    }
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
        cout<<moves<<endl;
    } else {
        cout<<"-1"<<endl;
    }

}
int main(){
    vector<vector<int>> a ={{32,62},{42,68},{12,98}};
    vector<vector<int>> b = {{95,13},{97,25},{93,37},{79,27},{75,19},{49,47},{67,17}};
    
  snakeandladder(a,b);
    return 0;
}