#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* prev;
    node* next;
    node(int val){
        data = val;
        prev=NULL;
        next=NULL;
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
void insertafter(node* &prev_node,int val){
    node* n = new node(val);
    n ->next = prev_node ->next;
    prev_node->next ->prev  = n;
    n -> prev= prev_node;
    prev_node->next = n;
    if(prev_node==NULL){
        cout<<"it does not exist";
    }

}
void deletehead(node* &head){
    node* todelete = head;
    head = head->next;
    head->prev = NULL;
    delete todelete;
}
void deletion(node* &head,int val){
    if(val ==1){
        deletehead(head);
        return;
    }
    node* temp = head;
    int count = 1;
    while(temp!=NULL && count !=val){
        temp = temp ->next;
        count ++;
    }
    temp->prev->next = temp->next;
    if(temp->next!=NULL){
    temp->next->prev = temp->prev;
    }
    delete temp;
}
void insertattail(node* &head,int val){
    if(head==NULL){
        insertathead(head,val);
        return;
    }
    node* n = new node(val);
    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}
int length(node* head){
    node* n = head;
    int count = 0;
    while (n  != NULL)
    {
       
       count ++;
       n = n->next;
    }
    return count;
    
} 
int intersection(node* head1,node* head2){
    int l1 = length(head1);
    int l2 = length(head2);
    int d= 0;
    node* ptr1 ;
    node* ptr2;
    if(l1>l2){
        d = l1-l2;
        ptr1 = head1;
        ptr2= head2;
    }else{
        d = l2-l1;
        ptr1 = head2;
        ptr2 = head1;
    }
    while(d){

        ptr1 = ptr1->next;
        if(ptr1  == NULL){
            return -1;
        }
        d--;
    }
    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1==ptr2){
            return ptr1->data;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return -1;  
}
node* appendk(node* &head, int k){
    node* newtail ;
    node* newhead;
    node* tail = head;
    int count = 1;
    int l = length(head);
    while(tail->next!=NULL){
        if(count==(l-k)){
            newtail = tail;
        }
        if(count== (l-k+1)){
            newhead = tail;
        }
        tail = tail->next;
        count ++; 
    }
    newtail->next = NULL;
    tail->next = head;
    return newhead;
}
void intersect(node* &head1,node* &head2,int pos){
    node* temp1 = head1;
    pos--;
    while(pos--){
        temp1=temp1->next;
    }
    node* temp2= head2;
    while(temp2->next!=NULL){
        temp2 = temp2->next;
    }
    temp2->next = temp1;
}
void print(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    node* head1 = NULL;
    node* head2 = NULL;
    insertattail(head1,4);
    insertattail(head1,5);
    insertattail(head1,7);
    insertattail(head1,8);
    insertattail(head1,9);
    insertattail(head2,1);
    insertattail(head2,2);
    insertattail(head2,32);
   intersect(head1,head2,3);
   print(head1);
   print(head2);
   cout<<intersection(head1,head2)<<endl;

    return 0;
}