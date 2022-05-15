#include <bits/stdc++.h>
using namespace std;
void matrixsearch(int arr[4][4],int m,int n){
    int r =0 ;int c = n-1;int key = 60;
    bool flag = false;
    while(r<m && c>=0){
        if(arr[r][c]==key){
           flag=true;
        }
        if(arr[r][c]>key){
            c--;
        }else{
            r++;
        }
    }
    if(flag){
        cout<<"elementfound"<<endl;
    } else{
        cout<<"not found"<<endl;
    }
}
int main(){
    int m= 4 ;int n=4;
    int a[4][4] = { {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16} };
        matrixsearch(a,m,n);
    return 0;
}