#include <bits/stdc++.h>
using namespace std;

int main()
{

for(int i=4;i>=0;i--){

   for(int j=0;j<i;j++){
       cout<<" ";
   }
   int count = 1; int j=0;
  while(j<=(5-i-1)){
       cout<<count<<" ";
       count++;
       j++;
   }


    cout<<endl;
}
   
 
return 0;
}
  