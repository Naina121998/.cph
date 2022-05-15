#include <bits/stdc++.h>
using namespace std;
int kadane(vector<int>&arr){
   int sum =0;int maxsum =INT16_MIN;
   for(int i=0;i<arr.size();i++){
       sum += arr[i];
       maxsum = max(maxsum,sum);
       if(sum<0){
           sum = 0;
       }
   }
   return maxsum;
}
int maxSubarraySumCircular(vector<int>&arr){
      int nonwrapsum = kadane(arr);
      int maxval=INT16_MIN;int n = arr.size();

      for(int i=0;i<n;i++){
         maxval = max(maxval,arr[i]);
      }
      if(maxval<0){
          return nonwrapsum;
      }
      int totalsum = 0;
      for(int i=0;i<n;i++){
          totalsum += arr[i];
          arr[i]=-arr[i];
      }
   
      int wrapsum = totalsum + kadane(arr);
     
      return max(nonwrapsum,wrapsum);
}
int main()
{
   vector<int>a = {9,-4,-7,9};

  cout<< maxSubarraySumCircular(a);
    return 0;
}