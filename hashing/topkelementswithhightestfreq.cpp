#include <bits/stdc++.h>
using namespace std;
bool compare(pair <int,int>p1,pair<int,int>p2){
    if(p1.second == p2.second){
        return p1.first>p2.first;
    } else{
        return p1.second >p2.second;
    }
}
void topkelements(int arr[ ],int n , int k){
    unordered_map<int , int > um;
    for(int i = 0 ; i<n;i++){
        um[arr[i]]++;
    }
    vector <pair<int,int>> pq(um.begin(),um.end());
    sort(pq.begin(),pq.end(),compare);
    for(int i = 0 ; i<k;i++){
        cout<<pq[i].first<<" ";
    }
}
int main()
{
    int arr[] = { 3, 1, 4, 4, 5, 2, 6, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    topkelements(arr, n, k);
    return 0;
}