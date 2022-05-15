#include <bits/stdc++.h>
using namespace std;
void findFourElements(int arr[],int n , int x){
    sort(arr,arr+n);set<vector <int>> s;
    vector <int>v;
    for(int i = 0 ; i<n-2;i++){
        for(int j = i+1;j<n-1;j++){
            int sum = arr[i]+arr[j];
            int k = x -sum;
            int l = j+1;int r = n-1;
            while(l<r){
                if(arr[l]+arr[r]==k){
                     v = {arr[i],arr[j],arr[l],arr[r]};
                    s.insert(v);
                }
            }
        }
    }
    vector <vector<int> > p(s.begin(),s.end());
    vector <vector<int>> :: iterator it;
    for(it = p.begin();it!=p.end();it++){
        for(int i = 0;i<p[i].size();i++){
            cout<<v[i]<<" ";
            
        }
        cout<<endl;
    }
}
int main()
{
    int arr[] = { 10, 20, 30, 40, 1, 2 ,68};
    int n = sizeof(arr) / sizeof(arr[0]);
    int X = 91;
    
    
    findFourElements(arr, n, X);
    return 0;
}