#include <bits/stdc++.h>
using namespace std;
int min(int x,int y,int z){
    return min(min(x,y),z);
}
int minDistance(string A, string B,int m,int n) {
 
   if(m==0){
       return n;
   }
   if(n==0){
       return m;
   }
   if(A[m-1]==B[n-1]){
       return minDistance(A,B,m-1,n-1);
   }else{
       return 1 + min(minDistance(A,B,m,n-1),minDistance(A,B,m-1,n),minDistance(A,B,m-1,n-1));
   }
}

int main(){
    string str1 = "geek";
    string str2 = "gesek";
    cout<<minDistance(str1,str2,str1.length(),str2.length());
    return 0;
}