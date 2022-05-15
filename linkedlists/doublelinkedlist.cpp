#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* prev;
    node* next;
    node(int val){
        data = val;
        prev = NULL;
        next = NULL;
    }
};
void insertathead(node* &head,int val){
    node* n = new node(val);
    n->next = head;
    if(head!=NULL){
        head->prev = n;
    }
   
    head = n;
}
void insertattail(node* &head,int val){
    if(head==NULL){
        insertathead(head,val);
        return;
    }
     node* n = new node(val);
     node* temp = head;
     while(temp->next!=NULL){
         temp=temp->next;
     }
     temp->next = n;
     n->prev = temp;
     
     
}
void deleteathead(node* &head){
    node* todelete = head;
    head=head->next;
    head->prev = NULL;
    delete todelete;
}
void deletion(node* &head,int val){
    if(head==NULL){
        return;
    }
    if(head->data==val){
        deleteathead(head);
        return;
    }
    node* temp = head;
    while(temp->data!=val){
        temp=temp->next;
    }
    if(temp->next!=NULL){
         temp->next->prev = temp->prev;
    }
   
    temp->prev->next = temp->next;
    delete temp;
}
void print(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main(){
    node* head = NULL;
    insertathead(head,8);
    insertattail(head,4);
    insertattail(head,7);
    
    insertathead(head,6);
    deletion(head,7);
    deletion(head,6);
    print(head);
    return 0;
}