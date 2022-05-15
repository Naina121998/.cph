#include <bits/stdc++.h>
using namespace std;
void decimaltoocta(int n){
    stack<int> pq;
    while(n>0){
        int ans = n%8;
        pq.push(ans);
        n = n/8;
    }
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
}
int main(){
    decimaltoocta(101);
    return 0;
}
