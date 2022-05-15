#include <bits/stdc++.h>
using namespace std;
int coinchange(int arr[],int m,int amt){
    int table[amt+1];
    for(int i= 0 ; i<amt+1;i++){
        table[i]=0;
    }
    table[0]=1;
    for(int i = 0 ;i<m;i++){
        for(int j = arr[i];j<=amt;j++){
            table[j]+= table[j-arr[i]];
        }
    }
    return table[amt];

}
int main(){
    int arr[]={1,2,3};
    int amount =1024;
    int m= sizeof(arr)/sizeof(arr[0]);
    cout<<coinchange(arr,m,amount);

    return 0;
}
//time complexity o(amt);