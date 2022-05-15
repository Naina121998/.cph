#include <iostream>
using namespace std;
void printSubstrings(string str,string ans)
{
    if(str.length()==0){
        cout<<ans<<endl;
        return;
    }
    for(int i = 0 ;i<str.length();i++){
    char ch = str[i];
    string ros = str.substr(0,i) + str.substr(i+1);
   
 
    printSubstrings(ros,ans+ch);

     
     }
}
 
// Driver Code
int main()
{ 
    string str = "abc";
    printSubstrings(str,"");
 
    return 0;
}