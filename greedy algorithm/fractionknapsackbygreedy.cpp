#include <bits/stdc++.h>
using namespace std;
bool compare(pair<int,int> &p1,pair<int,int> &p2){
        double v1 = (double)p1.first/(double)p1.second;
        double v2 = (double)p2.first/(double)p2.second;
        return v1 > v2;
}
void fractionknapsack(vector <pair<int,int>> arr,int n,int W){
    sort(arr.begin(),arr.end(),compare);
   int finalvalue=0; int curWeight = 0 ;

   for (int i = 0; i < n; i++) {
        // If adding Item won't overflow, add it completely
        if (curWeight + arr[i].second <= W) {
            curWeight += arr[i].second;
            finalvalue += arr[i].first;
            continue;
        }
 
        // If we can't add current Item, add fractional part
        // of it
        else {
            int remain = W - curWeight;
            finalvalue += arr[i].first
                          * ((double)remain
                             / (double)arr[i].second);
            break;
        }
    }
    cout<< finalvalue<<endl;
           
}
int main(){
     int W = 50; 
    vector <pair<int,int>> arr={ { 60, 10 }, { 100, 20 }, { 120, 30 } };;
    int n = arr.size();
  
    fractionknapsack(arr,n,W);

    return 0;
}