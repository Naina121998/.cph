#include <iostream>
using namespace std;
void printnumbers(int n){
   if(n==0){
       return;
   }
  
   printnumbers(n-1);
    cout<<n<<" ";
}
int main()
{
   int n = 5;
   printnumbers(n);
}