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
    node* n = new node(data);
     if(head==NULL){
       
        n->next = n;
         head = n;
        return; 
    }
    node* temp = head;
   
    while(temp->next!= head){
        temp= temp->next;
    }
    temp->next = n;
    n ->next = head;
    head = n;
}
void print(node* head){
    node* temp = head;
    do
    {
       
        cout<<temp->data<<" ";
        temp = temp->next;
    } while (temp!=head);
     cout<<endl;
   }
void insertattail(node* &head,int data){
    node* n = new node(data);
    if(head==NULL){
        insertathead(head,data);
        return;
    }
    node* temp = head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next = n;
    n->next = head;
}
void deleteathead(node* &head){
   
    node* temp = head;
    while(temp->next!=head){
        temp=temp->next;
    }
     node* todelete = head;
    temp->next = head->next;
    head = head->next;
    
    delete todelete;
   print(head);


}
void deletion(node* head,int pos){
    if(pos==1){
        deleteathead(head);
        return;
    }
    node* temp = head;int count = 1;
    while(count!=pos-1){
        count++;
        temp = temp->next;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}

int main(){
    node* head  = NULL;
    insertattail(head,6);
    insertattail(head,4);
    insertattail(head,9);
    insertattail(head,1);
    insertathead(head,5);
    print(head);

 
  
    cout<<endl;
    deletion(head,1);
    cout<<endl;
 
    return 0;
}