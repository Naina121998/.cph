#include <iostream>
using namespace std;
 
int LongestWordLength(string str)
{
     int n =str.length();int maxlen=0;int len=0;
     for(int i=0;i<n;i++){
      if(str[i]!=' '){
         len++;
       }else{
         if(maxlen<len){
          maxlen = len ;
         }
          len = 0;
      }
       }

    
     
     return max(maxlen,len);
    

}
 
// Driver function
int main()
{
    string s =
    "I am an intern at geeksforgeeks";
                     
    cout << LongestWordLength(s);
    return 0;
}
 