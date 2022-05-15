#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
int prec(char c){
    if(c=='^'){
        return 3;
    }
    else if(c=='*' || c=='/'){
        return 2;
    }
    else if(c=='+' || c=='-'){
        return 1;
    }
    else {
        return -1;
    }
}
string infixtopostfix(string s){
    stack<char> pq;
     string res;
     for(int i=0;i<s.length();i++){
         if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9')){
             res+=s[i];
         }
         else if(s[i]=='('){
            pq.push(s[i]); 
         }
         else if(s[i]==')'){
             while(!pq.empty() && pq.top()!='('){
                  res+=pq.top();
                  pq.pop();
             }
             if(!pq.empty()){
             pq.pop();
             }
         }
         else{
            while(!pq.empty() && prec(pq.top())>=prec(s[i])){
                res+=pq.top();
                pq.pop();
            }
              pq.push(s[i]);
            
            }
            
    }
     while(!pq.empty()){
         res+=pq.top();
         pq.pop();
     }
     return res;

}

int main(){
    cout<<infixtopostfix("((4*3)+2)-6");
    return 0;
}
