#include <iostream>
using namespace std;
int countpath(int n )
{
  if(n==0){
      return 0;
  }
  if(n==1){
      return 1;
  }
  if(n==2){
      return 2;
  }
  
   return countpath(n-1) + (n-1)* countpath(n-2);
}
 
// Driver Code
int main()
{
    
  cout<< countpath(4);
 
    return 0;
}