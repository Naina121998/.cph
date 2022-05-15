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
node* mergesortlinkedlist(node* &head1,node* &head2){
     
      node* ptr1 = head1;
      node* ptr2 = head2;
      node* dummynode = new node(-1);
      node* ptr3 = dummynode;
      while(ptr1!=NULL && ptr2!=NULL){
          if(ptr1->data<ptr2->data){
               ptr3->next= ptr1;
               ptr1=ptr1->next;
          }else{
               ptr3->next = ptr2;
               ptr2=ptr2->next;
          }
         
          ptr3=ptr3->next;
      }
    while(ptr1!=NULL){
        ptr3->next= ptr1;
        ptr1=ptr1->next;
        ptr3=ptr3->next;
    }
    while(ptr2!=NULL){
        ptr3->next= ptr2;
        ptr2=ptr2->next;
        ptr3=ptr3->next;
    }
    return dummynode->next;

}
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
    node*head1 = NULL;
    insertattail(head1,2);
    insertattail(head1,5);
    insertattail(head1,7);
    insertattail(head1,8);
    insertattail(head1,17);  
   
     node*head2 = NULL;
    insertattail(head2,6);
    insertattail(head2,9);
    insertattail(head2,11);
   
    node* newhead = mergesortlinkedlist(head1,head2);
    print(newhead);
   
   
    return 0;
}