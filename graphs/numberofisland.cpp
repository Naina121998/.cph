#include <bits/stdc++.h>
using namespace std;
void issafe(vector<vector<int>> &arr,int x ,int y,int n,int m){
    if(x<0 || y<0 || x>=n || y>=m || arr[x][y]!=1){
        return;
    }
    arr[x][y]=2;
    issafe(arr,x+1,y,n,m);
    issafe(arr,x,y+1,n,m);
    issafe(arr,x-1,y,n,m);
    issafe(arr,x,y-1,n,m);
    //ifdiagonalarealsoincluded
    issafe(arr,x+1,y+1,n,m);
    issafe(arr,x-1,y-1,n,m);
    issafe(arr,x+1,y-1,n,m);
    issafe(arr,x-1,y+1,n,m);

}
void numberofisland(vector<vector<int>> &arr){
    int n = arr.size(); int m = arr[0].size();
    int k=0;
    if(n==0){
        return;
    }
    for(int i = 0 ; i<n;i++)
    {
        for(int j = 0 ;j<m;j++)
        {  if(arr[i][j]==1){
            issafe(arr,i,j,n,m);
               k++;
            }
        }
    }
    cout<<k<<endl;
}

int main(){
    vector<vector<int>> arr=   
                   { { 1, 1, 0, 0, 0 },
                     { 0, 1, 0, 0, 1 },
                     { 1, 0, 0, 1, 1 },
                     { 0, 0, 0, 0, 0 },
                     { 1, 0, 1, 0, 1 } };
    numberofisland(arr);
    return 0;
}