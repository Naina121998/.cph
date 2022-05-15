#include <iostream>
using namespace std;
string moveAtEnd(string s){
  if(s.length() == 0){
      return "";
  }
  char ch = s[0];
  string ans = moveAtEnd(s.substr(1));
  if(ch == 'x'){
      return ans+ch;
  }
  return ch +ans;
}
int main()
{
    string s = "geekxsforgexxeksxx";
  
    int l = s.length();
  
    cout<<moveAtEnd(s);
  
    return 0;
}