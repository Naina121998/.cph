#include <bits/stdc++.h>
using namespace std;
 
#include <vector>
typedef pair<int,pair<int,int>> ppi;
vector<int>  mergeKArrays(vector <vector<int>> arr){
    vector<int> output;
    priority_queue <ppi,vector<ppi>,greater<ppi>> pq;
    for(int i = 0 ; i<arr.size();i++){
        pq.push({arr[i][0],{i,0}});
    }
   while(!pq.empty()){
       ppi curr = pq.top();
       pq.pop();
       output.push_back(curr.first);
       int i = curr.second.first;
       int j = curr.second.second;
       if(j+1 < arr[i].size()){
           pq.push({arr[i][j+1],{i,j+1}});
       }
   }
   return output;
}
using namespace std;
int main()
{
    
    vector<vector<int> > arr{ { 1,3,5,7 },
                              { 2,4,5,8 },
                              { 0,9,10,11 } };
 
    vector<int> output = mergeKArrays(arr);
 
    cout << "Merged array is " << endl;
    for (auto x : output)
        cout << x << " ";
 
    return 0;
}