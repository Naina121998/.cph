#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class node {
    public:
    int data;
    node* next;
    node(int val){
        data  = val;
        next = NULL;
    }
};
void insertathead(node* &head,int data){
    node* temp = new node(data);
    temp -> next = head;
    head = temp;
}
void insertatend(node* &head,int data){
    node* temp = new node(data);
    node* last = head;
    temp ->next = NULL;
    if(head == NULL){
        head = temp;
        return;
    }
    while(last->next != NULL){
        last = last->next;
    }
   last -> next = temp; 
   return;
}
void insertafter(node* &prev_node,int data){
    node* temp = new node(data);
    temp-> next = prev_node ->next;
    prev_node ->next= temp;
    if(prev_node == NULL){
        cout<<"It does not exist";
    }

}
bool search(node* head, int key){
    node* temp = head;
    while(temp != NULL){
      if(temp ->data == key){
          return true;
      }
      temp = temp ->next;
}
return false;
}
void deletionhead(node* &head){
    node* temp = head;
    head = head->next;
    delete temp;
}
void deletionafter(node* &head,int key){
    if(head == NULL){
        return;
    }
    if(head->next==NULL){
        deletionhead(head);
        return;
    }
    node* temp = head;
    while(temp ->next -> data != key){
        temp = temp ->next;
    }
    node* todelete = temp ->next;
    temp -> next = temp ->next -> next;
    delete todelete;
}
node* reverse (node* &head){
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;
    while(currptr!=NULL){
        nextptr = currptr ->next;
        currptr -> next = prevptr;
        prevptr = currptr;
        currptr = nextptr; 
    }
    return prevptr;
    }
node* recursive(node* &head){
    if(head ==NULL || head->next == NULL)
    {
        return head;
    }
    node* newhead = recursive(head->next);
        head ->next->next = head;
    head->next = NULL;

    return newhead;
}
node* reversek(node* &head,int key){
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;
    int count = 0;
    while(currptr!=NULL && count<key){
        nextptr = currptr ->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
        count++;
    }
    if(head != NULL){
    head ->next = reversek(nextptr,key);
    }
    return prevptr;
}
void makecycle(node* &head,int pos){
    node* temp = head;
    node* startnode;
    int count = 1;
    while(temp-> next != NULL ){
      if(count==pos){
          startnode = temp;
      }
        temp = temp->next;
        count++;
    }
    temp -> next = startnode;
}
bool detectcycle(node* &head){
    node* slow = head;
    node* fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast){
            return true;
        }
    } 
    return false;
}
void removecycle(node* &head){
    node* slow = head;
    node* fast = head;
    do
    {
      slow = slow->next;
      fast = fast ->next->next;
    } while (slow != fast);
    fast = head;
    while(slow->next != fast->next){
        slow= slow->next;
        fast = fast->next;
    }
    slow->next = NULL;
    
}
void print(node* head){
    node* temp = head;
    while(temp != NULL){
        cout << temp->data <<"->"<< " ";
        temp = temp->next;
    }
    cout<<endl;
    
}
int main(){
   node* head = NULL;
  insertatend(head,7);
  
  
   print(head);

    return 0;
}
 
 void reversesentence(string s){
    stack <string> st;
    for(int i = 0 ; i<s.length();i++){
       string word = "";
       while(s[i]!=' ' && i<s.length()){
           word += s[i];
           i++;
       }
        st.push(word);
    }


    while(!st.empty()){
        
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;
}