#include <bits/stdc++.h>
using namespace std;
void decimaltohexa(int n){
    stack<char> pq;
    while(n>0){
        int ans = n%16;
        if(ans>=0 && ans<=9){
            char res = ans + '0';
           pq.push(res);
        }else if(ans >=10 && ans <=15){
            
            pq.push(ans - 10 + 'A'); 
        }
      
       
        n = n/16;
    }
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
}
int main(){
    decimaltohexa(463);
    return 0;
}
