#include <bits/stdc++.h>
using namespace std;
int  minComputation(int n,int arr[]){
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i = 0 ; i<n;i++){
        pq.push(arr[i]);
    }
    int ans = 0;
    while (pq.size()>1)
    {
        int v1 = pq.top();
        pq.pop();
        int v2 = pq.top();
        pq.pop();
        ans = ans + v1 + v2;
        pq.push(v1 + v2);
    }
    return ans;
    

    
}
int main()
{
      
 
    int n = 5;
      
   
    int files[] = {  4, 9, 13, 15, 6 };
 
    cout << "Minimum Computations = "
         << minComputation(n, files);
  
    return 0;
}