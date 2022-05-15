#include <iostream>
using namespace std;
 
int LongestWordLength(string str)
{
     
    int n = str.length();
    int res = 0, curr_len = 0, i;
     int end = 0 ;
    for (int i = 0; i < n; i++) {
         
    
        if (str[i] != ' ')
            curr_len++;
 
   
        else {
           if(res<curr_len){
                 res = curr_len;
                 end = i;
           }
            curr_len = 0;
        }
    }
    
   if(res<curr_len){
                 res = curr_len;
                 end = n-1;
           }
 int start = end - res+1;
   for(int i=start;i<=end;i++){
       cout<<str[i];
   }
   cout<<endl;
    return res;
}
 
// Driver function
int main()
{
    string s =
    "I am an intern at geeksforgeeks";
                     
    cout << LongestWordLength(s);
    return 0;
}