#include <bits/stdc++.h>
using namespace std;
int longestPalSubstr(string s){
    int n = s.length();
   bool table[n][n];
   memset(table,0,sizeof(table));
    for(int i= 0 ;i<n;i++){
        table[i][i]= true;
    }
    int maxlen = 1;
    int start = 0;
    for(int i = 0 ;i<n;i++){
        if(s[i]==s[i+1]){
           table[i][i+1]=true;
           maxlen=2;
           start = i;
        }
    }
  
    for(int k= 3;k<=n;k++){
        for(int i=0;i<n-k+1;i++){
            int j = i + k - 1;
            if(s[i]==s[j] && table[i+1][j-1]){
                table[i][j]=true;
                if(k>maxlen){
                start = i;
                maxlen= k;
                }
            }
        }
    }
    return maxlen;
}
int main(){
    string str = "forrogeeksskeegfor";
    cout << "\nLength is: "
         << longestPalSubstr(str);
    return 0;
}
//time complexity= o(n2);