#include <bits/stdc++.h>
using namespace std;
unordered_map<string,int> ans;
int noofuniquestring(string s[],int n){
 
    for(int i = 0 ;i<n;i++){
          ans[s[i]]= ans[s[i]] + 1;
    }
    int res = ans.size();
    return res;
}
int main(){
    string s[] ={"aa","ab","ab","a","aa","c","ab"};
    int n = sizeof(s)/sizeof(s[0]);
    
    cout<<noofuniquestring(s,n); 
    return 0;
}