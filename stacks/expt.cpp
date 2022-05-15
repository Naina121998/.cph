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
     string res="";
     reverse(s.begin(),s.end());
     for(int i=0;i<s.length();i++){
         if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9')){
             res+=s[i];
         }
         else if(s[i]==')'){
            pq.push(s[i]); 
         }
         else if(s[i]=='('){
             while(!pq.empty() && pq.top()!=')'){
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
     reverse(res.begin(),res.end());
     return res;

}

int main(){
    cout<<infixtopostfix("(a-b/c)*(a/k-l)");
    return 0;
}
