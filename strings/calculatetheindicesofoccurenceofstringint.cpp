#include <bits/stdc++.h>
using namespace std;
 void printIndex(string str1,string str2){
    int k = str2.length();int n = str1.length();
    for(int i = 0 ;i<n-k+1;i++){
         if(str1.substr(i,k)==str2){
             cout<<i<<" ";
         }
    }
 }
int main(){
     string str1 = "GeeksforGeeks";
    string str2 = "Geeks";
    printIndex(str1, str2);
    return 0;
}
//time complexity = o(n*k);