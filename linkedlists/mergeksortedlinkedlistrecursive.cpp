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
node* mergeRecursive(node* &head1,node* &head2){
    if(head1==NULL){
        return head2;
    } 
    if(head2==NULL) {
        return head1;
    }
     node* result;
     if(head1->data <head2->data){
         result= head1;
         result->next = mergeRecursive(head1->next,head2);
     }
      else{
         result= head2;
         result->next = mergeRecursive(head1,head2->next);
     }
     return result;

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
   
    node* newhead = mergeRecursive(head1,head2);
    print(newhead);
   
   
    return 0;
}