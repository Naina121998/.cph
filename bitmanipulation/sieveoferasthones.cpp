#include <bits/stdc++.h>
using namespace std;
void findprime(int n){
    vector<int> visited(n+1,0);
    for(int i=2;i<=n;i++){
        if(visited[i]==0){
            for(int j=i*i;j<=n;j+=i){
                 visited[j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(visited[i]==0){
            cout<<i<<" ";
        }
    }
}
int main(){
    findprime(30);
    return 0;
}