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
node* reverseknodes(node* &head,int k){
    node* currptr = head;
    node* prevptr= NULL;
    node* nextptr;
    int count =0;
    while(currptr!=NULL && count<k){
           nextptr= currptr->next;
           currptr->next = prevptr;
           prevptr = currptr;
           currptr = nextptr;
           count++;
    }

   if(nextptr!=NULL){
   head->next= reverseknodes(nextptr,k);
   }
   return prevptr;
}
void insertathead(node *&head,int val){
    node *n = new node(val);
    n ->next = head ;
    head = n;
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
    insertattail(head,6);  
    insertathead(head,7);
    int k = 2;
    print(head);
    cout<<endl;
    node* newhead = appendk(head,k);
   
    print(newhead);
    return 0;
}