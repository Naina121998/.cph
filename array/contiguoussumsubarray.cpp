#include <bits/stdc++.h>
using namespace std;

void subArraySum(int arr[],int n,int sum){
       int start = 0 ; int currsum = 0;int count =0;
       for(int i = 0 ;i<n;i++){
        currsum = currsum + arr[i];
           while(currsum>sum && start<i){
               currsum = currsum - arr[start];
               start++;
           }
           if(currsum==sum){
               cout<<start<<" "<<i<<endl;
               count++;
           }
          
        
             
       } 
       cout<<count<<endl;
      
} 
int main(){
    int arr[] = { 2,3,8,4,1,10,1,12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 12;
    subArraySum(arr, n, sum);
    return 0;
   
}