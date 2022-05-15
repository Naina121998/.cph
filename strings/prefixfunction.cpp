#include <bits/stdc++.h>
using namespace std;
vector<int> prefixfunction(string s,int m){
    vector<int>pi(m);
      for(int i = 0 ;i<m;i++){
          for(int j = 0 ;j<=i;j++){
              if(s.substr(0,j)==s.substr(i-j+1,j)){
                 pi[i]= j;
              }

          }
      }
      return pi;
      //time complexity = o(n3);
}
int kmpalgo(vector<int>prefix,string t ,string s,int m, int n){
       int pos= -1;
       int i  =0 ;int j = 0;
       while(i<m){
          if(t[i]==s[j]){
              i++;
              j++;
          }else{
              if(j!=0){
                  j = prefix[j-1];
              }else{
                  i++;
              }
          }
          if(j==n){
              pos = i - n ;
              break;
          }
       }
       return pos;

}
int main(){
    string txt = "abcabcd";
    string  pat = "c";
    int m = txt.length();
    int n = pat.length();
    vector<int> prefix=prefixfunction(txt,m); 
    for(int i = 0 ;i<prefix.size();i++){
        cout<<prefix[i]<<" ";
    }
    cout<<endl;
    //kmp algorithm
    cout<<kmpalgo(prefix,txt,pat,m,n);
    return 0;
}