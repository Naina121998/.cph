/* C++ Program to check whether valid
 expression is redundant or not*/
#include <bits/stdc++.h>
using namespace std;
 

bool parenthesis(string str)
{
  
    stack<char> st;
 
  
    for (int i = 0;i<str.size();i++) {
 
        if (str[i] == ')') {
            char top = st.top();
            st.pop();
 
            bool flag = true;
 
            while (!st.empty() and top != '(') {
 
            
                if (top == '+' || top == '-' ||
                    top == '*' || top == '/')
                    flag = false;
 
           
                top = st.top();
                st.pop();
            }
 

            if (flag == true)
                return true;
        }
 
        else
            st.push(str[i]);
               
    }
    return false;
}
 
int main()
{
    string str = "((a+b))";
    cout<<parenthesis(str)<<endl;
 
    str = "(a+(b)/c)";
    cout<<parenthesis(str)<<endl;
 
    str = "(a+b*(c-d))";
    cout<<parenthesis(str);
 
    return 0;
}