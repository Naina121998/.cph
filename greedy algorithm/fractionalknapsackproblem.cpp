#include <bits/stdc++.h>
using namespace std;
bool compare(pair<int,int> p1,pair<int,int> p2){
        double v1 = (double)p1.first/(double)p1.second;
        double v2 = (double)p2.first/(double)p2.second;
        return v1 > v2;
}
void fractionknapsack(vector <pair<int,int>> arr,int n,int W){
   int ans=0;
    sort(arr.begin(),arr.end(),compare);
    for(int i = 0 ; i<n;i++){
        if( arr[i].second <= W){
            ans += arr[i].first;
            W = W - arr[i].second; 
           
        }else{
            if(W>0){
            double a = (double)arr[i].first/(double)arr[i].second;
            ans = ans + a*W;
           W=0;
            }
        }
    }
    cout<<ans<<endl;
}
int main(){
     int W = 50; 
    vector <pair<int,int>> arr={ { 60, 10 },{100,20}, { 120, 30 }};
    int n = arr.size();
    fractionknapsack(arr,n,W);

    return 0;
}