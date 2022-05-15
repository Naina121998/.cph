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
node* reverse(node* &head){
    if(head==NULL){
        return head;
    }
    if(head->next==NULL){
        return head;
    }
   node* newhead = reverse(head->next);
   head->next->next = head;
   head->next=NULL;

   return newhead;
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
    insertathead(head,7);
  
    cout<<endl;
    print(head);
    node* newhead = reverse(head);
    cout<<endl;
    print(newhead);
    return 0;
}