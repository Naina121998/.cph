#include <bits/stdc++.h>
#include <iostream>
#include <stack>
using namespace std;
class que {
    stack<int> s1;
    stack<int> s2;
   public:
   void enqueue (int x){
      
       while(!s1.empty()){
           s2.push(s1.top());
           s1.pop();
       }
        s1.push(x);
       while (!s2.empty())
       {
           s1.push(s2.top());
           s2.pop();
       }
       
   }
   int dequeue(){
        if(s1.empty()){
            cout<<"No element to pop"<<endl;
            return -1;
        } 
                int val = s1.top();
                s1.pop();
                return val;
        
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
    st.enqueue(1);
    st.enqueue(2);
    st.enqueue(3);
    st.enqueue(4);
    
    cout<<st.dequeue()<<endl;
    cout<<st.dequeue()<<endl;
    cout<<st.dequeue()<<endl;
    cout<<st.empty()<<endl;
    cout<<st.dequeue()<<endl;
    cout<<st.dequeue()<<endl;
    cout<<st.empty()<<endl;
    
    
    return 0;
}