#include <iostream>
using namespace std;
#define n 100
class queue {
    int * arr;
    int front;
    int back;
    public:
    queue(){
    arr = new int[n];
     front = -1;
     back = -1;
    }
    void push(int m){
        if(back==n-1){
            cout<<"queue is full"<<endl;
            return;
        }
        back++;
        
        arr[back]= m;
        if(front==-1){
            front++;
        }
        }
    
    void pop(){
        if(front==-1 || front>back){
            cout<<"No more elements to pop"<<endl;
            return;
        }
            front++;
        
    }
    int peek(){
        if(front==-1 || front>back){
            cout<<"no element"<<endl;
            return -1;
        }
            return arr[front];
        
    }
    bool empty(){
        if(front==-1 || front>back){
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