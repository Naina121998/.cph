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
    int code = ch;
    printSubstrings(ros,ans);
    printSubstrings(ros,ans+ch);
    printSubstrings(ros,to_string(code));
     
   
}
 
// Driver Code
int main()
{
    string str = "ab";
    printSubstrings(str,"");
 
    return 0;
}