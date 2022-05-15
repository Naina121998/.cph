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
void insertathead(node* &head,int val){
    node* temp = head;
    node* n = new node(val);
    if(head==NULL){
        n->next = n;
        head = n;
        return;
    }
    while(temp->next!=head){

        temp=temp->next;
    }
    temp->next = n;
    n ->next = head;
    head = n;

}
void insertattail(node* &head,int val){
   if(head==NULL){
       insertathead(head,val);
       return;
   }
   node* n = new node(val);
   node* temp = head;
   while(temp->next!=head){
       temp=temp->next;
   }
   temp->next = n;
   n->next = head;
}
void print(node* head){
     node* temp = head;
     do{
         cout<<temp->data<<" ";
         temp = temp->next;
     }while(temp!=head);
   }
int main(){
    node* head  = NULL;
    insertattail(head,6);
    insertattail(head,4);
    insertattail(head,9);
    insertattail(head,1);
    insertathead(head,5);
    print(head);
    return 0;
}