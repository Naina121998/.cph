#include <bits/stdc++.h>
using namespace std;

int decimaltobinary(int n ){
    string s ="";
    while(n>0){
       int m = n%2;
       s = s + to_string(m);
       n = n/2;

    }
    string str="";
    for(int i=s.size()-1;i>=0;i--){
       str = str + s[i];
    }
      return stoi(str);
}
int main(){
   int n = 11;
    cout<<decimaltobinary(n);
    return 0;
}