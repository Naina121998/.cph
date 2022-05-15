
#include <bits/stdc++.h>
using namespace std;
 bool checkRedundancy(string s)
{

    stack<char> st;
    int flag = false;
    
    for (int i = 0;i<s.size();i++) {
 
       if (s[i] == '+' || s[i] == '-' ||
                    s[i]== '*' || s[i] == '/'){
                        st.push(s[i]);
                    }
       else if (s[i]=='('){
           st.push(s[i]);
       }             
      else if (s[i]==')'){
                if(st.top()=='('){
                      flag = true;
                  }
                while (st.top() == '+' || st.top() == '-' ||
                    st.top() == '*' || st.top() == '/'){
                        st.pop();
                    }
                     st.pop();
                   }
                  
              }

 
    return flag;
}
 
// Function to check redundant brackets
void findRedundant(string str)
{
    bool ans = checkRedundancy(str);
    if (ans == true)
        cout << "Yes\n";
    else
        cout << "No\n";
}
 
// Driver code
int main()
{
    string str = "((a+b))";
    findRedundant(str);
 
    str = "(a+(b)/c)";
    findRedundant(str);
 
    str = "(a+b*(c-d))";
    findRedundant(str);
 
    return 0;
}