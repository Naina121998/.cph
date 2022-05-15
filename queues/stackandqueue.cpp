#include <bits/stdc++.h>
using namespace std;
class que {
    stack<int> s1;
    stack<int> s2;
    public:
    void push(int x){
        s1.push(x);
    }
    int pop(){
        if(s1.empty() and s2.empty()){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        if(s2.empty()){

         while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
       }
       int topval = s2.top();
       s2.pop();
       return topval;
    }
    bool empty(){
        if(s1.empty()&& s2.empty()){
            return true;
        }
        return false;
    }
};
int main(){
    que st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.pop()<<endl;
     cout<<st.pop()<<endl;
     cout<<st.empty()<<endl;
      cout<<st.pop()<<endl;
      cout<<st.pop()<<endl;
     cout<<st.pop()<<endl;
     cout<<st.empty()<<endl;
      cout<<st.pop()<<endl;
      
    
    
    return 0;
}