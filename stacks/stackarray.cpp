#include <iostream>
using namespace std;
#define n 100
class stack{
    int arr[n];
    int top;
    public:
    stack(){
    
        top = -1;
    }
    void push(int m){
        if(top==n-1){
            cout << "Stack overflow"<<endl;
            return;
        }
        top++;
        arr[top]= m;
    }
    void pop(){
        if(top==-1){
            cout<<"no more elements can be popped out"<<endl;
            return;
        }
        top--;
    }
    int Top(){
        if(top==-1){
            return -1;
        }
        return arr[top];
    }
    bool empty(){
        return (top==-1);
    }
};
int main(){
    stack st;
    st.push(4);
    st.push(7);
    st.push(1);
    st.push(5);
    cout<<st.Top()<<" "<<endl;
    st.pop();
    cout<<st.Top()<<" "<<endl;
    st.pop();
    st.pop();
   st.pop();
    st.pop();
    cout<<st.Top()<<endl;
    cout<<st.empty()<<endl;
    return 0;
}