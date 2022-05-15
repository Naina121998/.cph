#include <iostream>
#include <stack>
using namespace std;
bool parenthesis(string s){
    stack <char> st;
       bool ans = false;
    for(int i = 0 ;i<s.size();i++){
      
        if(s[i]=='+' || s[i] == '/' || s[i]== '*' || s[i]== '-'){
            st.push(s[i]);
        } else if (s[i]=='('){
            st.push(s[i]);
        } else if (s[i]==')'){
             if(st.top() == '('){
                   ans = true;
                }

            while(st.top() == '+' || st.top() == '/' || st.top() == '-' || st.top() == '*'){
              st.pop();
            } 
            st.pop();
               
            }
        }
        if(!st.empty()){
            return true;
        }
       
        return ans;
    }

int main()
{
    string str = "(a+b)";
    cout<<parenthesis(str)<<endl;
 
    str = "(a+(b)/c)";
    cout<<parenthesis(str)<<endl;
 
    str = "((a+b)*(c-d))";
    cout<<parenthesis(str);
 
    return 0;
}