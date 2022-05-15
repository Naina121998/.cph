#include <iostream>
using namespace std;
int printsum(int n ){
    if(n==1){
        return 1;
    }
  int  sum = printsum(n-1);
   return sum * n;


}
int main(){
    int n = 5;;
   cout<< printsum(n);
}