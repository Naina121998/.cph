#include <bits/stdc++.h>
using namespace std;

int main()
{

     int n = 5;
    int arr[n][n];

for(int i=0;i<n;i++){
 for(int j = 0;j<n-i-1;j++){
     cout<<" ";
 }

      for(int j=0;j<=i;j++){
          if(j==0 || j==i ){
              arr[i][j]=1;
          }else{
              arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
           
          }
             cout<<arr[i][j]<<" ";
      }
     cout<<endl;
  
}
   
 
return 0;
}
  