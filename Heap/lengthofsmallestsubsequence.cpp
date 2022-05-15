#include<bits/stdc++.h>

#include <vector>
using namespace std;
int  lengthOfSmallestSubsequence(vector<int> arr,int k){
    priority_queue <int,vector<int>> s;
    for(int i = 0 ; i<arr.size();i++){
        s.push(arr[i]);
    }
    int sum = 0;int count = 0;
    while(!s.empty()){
         sum += s.top();
        s.pop();
        count++;
        if(sum >=k){
            break;
        }
      }
       
       if(sum<k){
           return -1;
       } else {
           return count;
       }
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