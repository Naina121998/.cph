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
void print(node* head){
    node* temp = head;
    do
    {
       
        cout<<temp->data<<" ";
        temp = temp->next;
    } while (temp!=head);
     cout<<endl;
   }
int main(){
    node* head  = NULL;
    insertattail(head,6);
    insertattail(head,4);
    insertattail(head,9);
    insertattail(head,1);
    print(head);
    return 0;
}