#include <bits/stdc++.h>
using namespace std;
int ugly(int a,int b){
      while(a%b==0){
          a = a/b;
      }
      return a;
}
bool uglyfactors(int i){
    i = ugly(i,2);
   i = ugly(i,3);
   i = ugly(i,5);
    if(i==1){
        return true;
    } else{
        return false;
    }

}
int uglynumbers(int n){
    int count = 0;
    int i = 0;
    while(count<n){
        i++; 
        if(uglyfactors(i)){
            count++;
        }
         
    }
    return i;
}
int main(){
   cout<< uglynumbers(150);
    return 0;
}