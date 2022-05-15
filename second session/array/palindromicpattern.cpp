#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin>>n;

for(int i=n-1;i>=0;i--){

   for(int j=0;j<i;j++){
       cout<<" ";
   }
for(int j = n-i ;j>0; j--){
    cout<<j;
}
for(int j=0;j<n-i-1;j++){
    cout<<j+2;
}

    cout<<endl;
}
   
 
return 0;
}
  