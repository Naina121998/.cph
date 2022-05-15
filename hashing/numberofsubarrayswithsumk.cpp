#include <bits/stdc++.h>
using namespace std;
int findSubarraySum(int arr[],int n , int k ){
    unordered_map <int , int> mp;
    int sum = 0;int count = 0;
    for(int i = 0 ; i<n ; i++){
        sum += arr[i];
        if(sum == k){
            count ++;
        }
        if(mp.find(sum-k) != mp.end()){
            count += mp[sum-k];
        }
        mp[sum]++;
    }
    return count;
}
int main()
{
    int arr[] = { 10, 2, -2, -20, 10 };
    int sum = -10;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << findSubarraySum(arr, n, sum);
    return 0;
}