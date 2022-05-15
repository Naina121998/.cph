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
class queue {
    node* front;
    node* back;
    public:
    queue() {
        front = NULL;
        back = NULL;
    }
    void push(int x){
        node* n = new node(x);
        if(front==NULL){
            back = n;
            front = n;
            return;
        }
        back->next = n;
        back =n;

    }
    void pop(){
        if(front==NULL){
            cout<<"There is no element to pop"<<endl;
            return;
        }
        node* todelete = front ;
        front = front->next ;
        delete todelete;
    }
    int peek(){
        if(front==NULL){
            cout<<"No data to show"<<endl;
       return -1;
        }

        return front->data;
    }
    bool empty(){
        if(front==NULL){
            return true;
        } else {
            return false;
        }
    }
};
int main(){
    queue st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.empty()<<endl;
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.empty()<<endl;
   
    return 0;
}