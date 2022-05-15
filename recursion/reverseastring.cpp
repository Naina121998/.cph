#include <iostream>
using namespace std;
void reverse(string a){
   if(a.size()==0){
       return;
   }
   char ch = a[0];
   string ros = a.substr(1);
   reverse(ros);
   cout<<ch<<" ";
  
  
 
}
int main() 
{ 
    string a = "binod"; 
    reverse(a); 
    return 0; 
} 