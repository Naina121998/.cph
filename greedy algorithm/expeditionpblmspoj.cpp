#include <bits/stdc++.h>
using namespace std;
void noofstop(vector<pair<int,int>> arr,int n){
    int l = 25; int p = 10;int t = 1;
    for(int i = 0 ; i<n;i++){
        arr[i].first= l-arr[i].first;
    }
    sort(arr.begin(),arr.end());
    priority_queue<int , vector<int>> pq;
    int curr = p;int ans = 0;bool flag = 0;
    while(t--){
    for(int i = 0 ; i<n;i++){
        if(curr>=l){
            break;
        }
         while(curr<arr[i].first){
            if(pq.empty()){
                bool flag = 1;
                break;
            }
            curr+=pq.top();
            pq.pop();
            ans++;
        }
        if(flag){
            break;
        }
        
        pq.push(arr[i].second);

    }
    if(flag){
        cout<<"-1"<<endl;
       
    }
    while(!pq.empty()&& curr<l){
        curr += pq.top();
        pq.pop();
        ans++;
    }
    if(curr<l){
        cout<<"-1"<<endl;
        break;
    }
    cout<< ans<<endl;
 }



}
int main(){
    vector <pair<int,int>> arr = {{20 ,4},{9,6},{10,2},{3,1}};
    int n = 4;
    noofstop(arr,n);
    return 0;
}