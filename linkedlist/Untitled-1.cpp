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


node* merge(node* &head1,node* &head2){
    node* pt1= head1 ;
    node* pt2 = head2;
    node* dummynode= new node(-1);
    node* pt3 = dummynode;
    while(pt1 != NULL && pt2 != NULL){
        if(pt1->data<pt2->data){
            pt3->next = pt1;
             pt1 = pt1 ->next;
        }
       else {
           pt3->next = pt2;
           pt2 = pt2 ->next;
       }
        pt3 = pt3->next;
    }
    while(pt1!=NULL){
         pt3->next = pt1;
             pt1 = pt1 ->next;
              pt3 = pt3->next;
    }
    while(pt2!=NULL){
         pt3->next = pt2;
             pt2 = pt2 ->next;
              pt3 = pt3->next;
    }
    return dummynode->next;
}
node* mergerecursive(node* &head1,node* &head2){
    if(head1==NULL){
        return head2;
    } 
    if(head2==NULL) {
        return head1;
    }
    node* result;
    if(head1->data <head2->data){
        result = head1;
        result->next = mergerecursive(head1->next,head2);
    } else{
        result = head2;
        result->next = mergerecursive(head1,head2->next);
    }
    return result;
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
   node* head1 = NULL;
   node* head2 = NULL;
  int a[] = {3,4,6,8,9};
  int b[] = {1,5,8};
  for(int i= 0 ;i<5;i++)
  {
      insertatend(head1,a[i]);
  }
   for(int i= 0 ;i<3;i++){
      insertatend(head2,b[i]);
  }
   print(head1);
   print(head2);
  node* newhead = mergerecursive(head1,head2);
  print(newhead);
    return 0;
}


