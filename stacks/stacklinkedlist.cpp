#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};
class stack{
    
    node* top;
    public:
    stack(){
      
        top = NULL;
    }
    void push(int x){
        node* n = new node(x);
        if(top==NULL){
            top = n;
            return;
        }
        n ->next = top;
        top = n;
    }
    void pop(){
        if(top==NULL){
            cout<<"No element to pop"<<endl;
            return;
        }
        node* temp = top;
        top = top ->next ;
        delete temp; 
        
    }
    int peek(){
        if(top==NULL){
            cout<<"No data to show"<<endl;
            
        }
        return top -> data;
    }
   bool empty(){
        if(top==NULL){
            return true;
        } else {
            return false;
        }
    }
};
int main(){
  stack st;
    st.push(4);
    st.push(7);
    st.push(1);
    st.push(5);
    cout<<st.peek()<<" "<<endl;
    st.pop();
    cout<<st.peek()<<" "<<endl;
    st.pop();
   cout<<st.empty()<<endl;
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.empty()<<endl;
    return 0;
}