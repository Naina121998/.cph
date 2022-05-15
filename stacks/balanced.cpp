#include <iostream>
#include <stack>
using namespace std;
bool balanced(string s){
    stack <char> st;
   
    bool ans = true;
    for(int i =0 ; i<s.length() ;i++){
        if( s[i]=='(' or s[i]=='[' or s[i]== '{'){
            st.push(s[i]);

        } else if (s[i]==')'){
            if(!st.empty() && st.top()=='('){
                st.pop();
            } else {
                ans = false;
                break;
            }
        }
        else if (s[i]==']'){
            if(!st.empty() && st.top()=='['){
                st.pop();
            }
            else {
                ans = false;
                break;
            }
        }
        else if (s[i]=='}'){
            if(!st.empty() && st.top()=='{'){
                st.pop();
            }
            else {
                ans = false;
                break;
            }
        }
    
     }  
     if(!st.empty())
     return false;
         
    return ans;
    }
    
    

int main(){
    string s = "[(])" ;
    if(balanced(s)){
        cout<<"It is balanced"<<endl;
    } else {
        cout<<"not balanced"<<endl;
    }
    return 0;
}