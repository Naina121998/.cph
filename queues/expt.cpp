#include <bits/stdc++.h>
using namespace std;
class que {
    stack<int> s1;
   
    public:
    void push(int x){
        s1.push(x);
    }
    int pop(){
       if(s1.empty()){
           return -1;
       }
       int x = s1.top();
       s1.pop();
       if(s1.empty()){
           return x;
       }
       int item = pop();
       s1.push(x);
       return item;
    }
    bool empty(){
        if(s1.empty()){
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
    
    
    return 0;
}