#include <bits/stdc++.h>
using namespace std;
void decimaltobinary(int n){
    stack<int> pq;
    while(n>0){
        int ans = n%2;
        pq.push(ans);
        n = n/2;
    }
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
}
int main(){
    decimaltobinary(8);
    return 0;
}
