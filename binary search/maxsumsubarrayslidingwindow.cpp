#include <iostream>
using namespace std;
int maxsumarray(int arr[],int k , int x,int n){
    int ans = INT16_MIN; int sum = 0;
    for(int i = 0;i<k;i++){
        sum += arr[i];
    }
    if(sum <=x){
        ans = sum;
    }
    for(int i = k ; i< n ; i++){
        sum = sum + arr[i] - arr[i-k];
        if(sum <= x){
            ans = max(ans,sum);
        }
    }
    return ans;
}
int main(){
   int arr[] = {1, 4, 2, -10, 2, 3, 1, 0, -20};
    int k = 3;
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 6;
    cout<<maxsumarray(arr,k,x,n);

    return 0;
}