#include <iostream>
using namespace std;
int countpath(int s , int e)
{
    if (s==e){
    return 1;
}
    if(s>e){
        return 0;
    }
    int ans = 0;
    for(int i = 1 ; i<= 6;i++){
        ans += countpath(s+i,e);
    }
    return ans;
    

}
 
// Driver Code
int main()
{
    
  cout<< countpath(0,2);
 
    return 0;
}