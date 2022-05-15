#include <bits/stdc++.h>
using namespace std;
void countFreq(int arr[],int n){
    unordered_map<int,int> mp;
    for(int i = 0 ; i<n ; i++){
        mp[arr[i]]++;
    }
    for(int i = 0 ; i< n ; i++){
        if(mp[arr[i]] != -1)
        {
            cout<<arr[i]<<" "<<mp[arr[i]]<<endl;
            mp[arr[i]] = -1;
        }
    }
}
int main()
{
    int arr[] = { 10, 20, 20, 10, 10, 20, 5, 20 };
    int n = sizeof(arr) / sizeof(arr[0]);
    countFreq(arr, n);
    return 0;
}