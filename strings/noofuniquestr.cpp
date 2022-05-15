#include <bits/stdc++.h>
using namespace std;

void noofuniquestring(vector<string> s,int n){
     sort(s.begin(),s.end());
     int distinct=0;
     for(int i = 0 ;i<n;i++){
         if(i==0 || s[i]!=s[i-1]){
             distinct++;
         }
     }
     cout<<distinct<<endl;
}
int main(){
    vector<string> s ={"aa","a","b","aa"};
   int n = s.size();
    
 noofuniquestring(s,n); 
    return 0;
}