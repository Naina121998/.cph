#include <iostream>
using namespace std;
int printsum(int n,int p){
    if(p==0){
        return 1;
    }
  int  sum = printsum(n,p-1);
   return sum * n;


}
int main(){
    int n = 2;int p = 3;
   cout<< printsum(n,p);
}