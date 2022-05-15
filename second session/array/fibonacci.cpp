#include <bits/stdc++.h>
using namespace std;
vector<int> fib(int n){
    int a = 0 ; int b = 1;
    vector<int> arr;
    arr.push_back(0);
    arr.push_back(1);
    for(int i = 2 ;i<n;i++){
        int m = arr[i-1]+arr[i-2];
        arr.push_back(m);
    }
    return arr;
}
int main(){
    int n = 10;
   vector<int>arr =fib(n);
   for(int i=0;i<arr.size();i++){
       cout<<arr[i]<<" ";
   }





    return 0;
}