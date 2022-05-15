#include <bits/stdc++.h>
using namespace std;
    int minRefuelStops(int target, int fuel, vector<vector<int>>& arr) {
        arr.push_back({target,-1});
        int count = 0 ;
        sort(arr.begin(),arr.end());
        priority_queue<int>pq;
        for(int i=0;i<arr.size();i++){
            while(!pq.empty() && fuel<arr[i][0]){
                fuel+=pq.top();
                pq.pop();
                count++;
            }
            if(fuel<arr[i][0]){
                return -1;
            }
            pq.push(arr[i][1]);
        }
        return count;
    }



int main(){
    vector <vector<int>> arr = {{10,60},{20,30},{30,30},{60,40}};
     
    int n = 4 ;int target = 100;int fuel = 10;
   cout<<minRefuelStops(target,fuel,arr);
    return 0;
}