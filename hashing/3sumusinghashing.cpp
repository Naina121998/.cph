#include <bits/stdc++.h>
using namespace std;
void findTriplets(vector<int>arr,int n,int k){
    bool found =false;
    for(int i = 0 ; i<n-1 ; i++){
         unordered_set<int> s;
        for(int j = i + 1;j<n;j++){
            int x = -(arr[i]+arr[j]);
            if(s.find(x) != s.end()){
                cout<<arr[i]<<" "<< arr[j]<<" "<<x<<endl;
                found = true;
            } else{
                s.insert(arr[j]);
            }
        }
    }
    if(found == false){
        cout<<"no element exist"<<endl;
    }
}
int main()
{
    vector<int> arr {1, -4, 0, 0, 5, -5, 1, 0, -2, 4, -4, 1, -1, -4, 3, 4, -1, -1, -3};
    set<int>s;
    for(int i=0;i<arr.size();i++){
       s.insert(arr[i]);
    }
    vector<int>res(s.begin(),s.end());
   
    int n = s.size();
    findTriplets(res, n,0);
}