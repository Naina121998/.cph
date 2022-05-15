#include <iostream>
using namespace std;
void printSubstrings(string str,string ans)
{
    if(str.length()==0){
        cout<<ans<<endl;
        return;
    }
     
    char ch = str[0];
    string ros = str.substr(1);
    printSubstrings(ros,ans+ch);
    printSubstrings(ros,ans);
     
   
}
 
// Driver Code
int main()
{
    string str = "abc";
    printSubstrings(str,"");
 
    return 0;
}