#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printgraph(vector<vector<int>>arr,int n){
   
    for(int i = 0 ; i<n;i++){
        for(int j = 0 ; j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n = 4;
    vector <vector<int>> arr(n,vector<int> (n,0));
    for(int i =0 ;i<=3;i++){
        int x; int y;
        cin>>x>>y;
        arr[x][y]=1;
        arr[y][x]=1;

    }
    if(arr[1][2]==1){
        cout<<"my name is khanna";
    }
   
    
    printgraph(arr,n);
    return 0 ; 
}