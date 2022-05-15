#include<bits/stdc++.h>

#include <vector>
using namespace std;
int  lengthOfSmallestSubsequence(vector<int> arr,int k){
    int currsum = 0 ;
    int count = 0 ; 
    priority_queue<int,vector<int>>pq(arr.begin(),arr.end());
    while(!pq.empty()){
        currsum+=pq.top();
        pq.pop();
        count++;
        if(currsum>=k){
            break;
        }
    }
    if(currsum<k){
        return -1;
    }return count;
}
int main()
{
 
    vector<int> v{ 2, 3, 1, 5,
                   6, 3, 7, 9,
                   14, 10, 2, 5 };
    int K = 35;
 
    cout << lengthOfSmallestSubsequence(v,K);
 
    return 0;
}