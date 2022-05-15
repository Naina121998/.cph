#include <bits/stdc++.h>
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
void insertattail(node *&head,int val){
     node* n = new node(val);
    if(head==NULL){
        head = n;
        return;
    }
   
    node* temp = head;
    while(temp->next!=NULL){
          temp = temp->next;
    }
    temp->next = n;
}
void evenafterodd(node* &head){
    node* odd =head;
    node* even =head->next;
    node* evenstart = even;
    if(head==NULL){
        return;
    }
    while(even!=NULL && even->next!=NULL){
         odd->next = even->next;
         odd = odd->next;
         even->next = odd->next;
         even=even->next;

    }
     odd->next = evenstart;
   
}
void insertathead(node *&head,int val){
    node *n = new node(val);
    n ->next = head ;
    head = n;
}
void print(node* head){
    node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
}

int main(){
    node*head = NULL;
    insertattail(head,4);
    insertattail(head,2);
    insertattail(head,1);
    insertattail(head,3);
    insertattail(head,7);
    insertattail(head,8);
    insertattail(head,6);
   
   
  
    evenafterodd(head);
    print(head);
   
    return 0;
}