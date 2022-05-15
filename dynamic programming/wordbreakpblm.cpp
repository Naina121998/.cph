#include <bits/stdc++.h>
using namespace std;
unordered_map<string,bool>dp;
bool wordbreak(string s,vector<string>&dict){
      int sz = s.length();
      if(sz==0){
          return 1;
      }
       if(dp[s]!=0){
           return dp[s];
       }
       for(int i = 1;i<=sz;i++){
           string ss = s.substr(0,i);
           bool flag = 0;
           for(int j = 0;j<dict.size();j++){
               if(ss.compare(dict[j])==0){
                   flag = 1;
                   break;
               }
           }
           if(flag==1 && wordbreak(s.substr(i,sz-i),dict)){
               return dp[s]=1;
           }
       }
       return dp[s]=0;
       
}
int main(){
   string s = "ilovyou";
 vector<string> dictionary = {"i","am","thanku","u","like","love","you","papa","mummy"};
 if(wordbreak(s,dictionary)==1){
     cout<<"yes"<<endl;
 }else{
     cout<<"no"<<endl;
 }

    return 0;
}