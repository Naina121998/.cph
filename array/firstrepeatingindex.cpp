#include <bits/stdc++.h>
using namespace std;

void indexrep(int arr[],int n){
    int N = 0;
    for(int i = 0 ;i<n;i++){
        N = max(N,arr[i]);
    }
    int visited[N];
    for(int i = 0 ;i<N;i++){
        visited[i]=-1;
    }
    int mx = INT_MAX;
    for(int i=0;i<n;i++){
        if(visited[arr[i]]!=-1){
            mx = min(mx,visited[arr[i]]);
        }else{
            visited[arr[i]]= i;
        }
    }
    if(mx==INT_MAX){
        cout<<"-1"<<endl;
    }else {
        cout<<mx<<endl;
    }
}
int main(){
    int arr[] = {1,5,3,4,3,5,6};
 
    int n = sizeof(arr) / sizeof(arr[0]);
    indexrep(arr,n);
    return 0;
}