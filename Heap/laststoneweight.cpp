#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int maxweightleft(vector <int> s){
    priority_queue <int> maxheap;
    int n = s.size();
    for(int i = 0;i<n;i++){
        maxheap.push(s[i]);
    }
    int first,second;
    while(n>1){
        first = maxheap.top();
        maxheap.pop();
        second = maxheap.top();
        maxheap.pop();
        n = n - 2 ;
        if(first - second>0){
            maxheap.push(first - second);
            n = n + 1;
        }
    }
    if(!maxheap.empty()){
        return maxheap.top();
    } else {
        return 0;
    }

}
int main(){
    vector <int> s = {1,7,4,10};
    cout<<maxweightleft(s);
    return 0;
}