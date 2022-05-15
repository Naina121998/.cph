#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int deno[] = { 1, 2, 5, 10, 20,
               50, 100, 500, 1000 };
int n = sizeof(deno) / sizeof(deno[0]);
void  findMin(int val )
{
    vector <int> ans;
  sort(deno,deno+n); int count = 0 ;
   for(int i = n-1 ; i>=0 ; i--){

       while(val >=deno[i]){
           val = val - deno[i];
           ans.push_back(deno[i]);
           count ++;
       }
   }
   for(int i = 0 ; i<ans.size() ; i++){
       cout<<ans[i]<<" ";
   }
   cout<<endl;
   cout<<count<<endl;
}
 
int main()
{
    int k = 33;
    cout << "Following is minimal"
         << " number of change for " << k
         << ": ";
    findMin(k);
    return 0;
}