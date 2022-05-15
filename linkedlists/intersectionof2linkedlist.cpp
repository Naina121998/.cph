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
    while(d--){

        ptr1 = ptr1->next;
        if(ptr1  == NULL){
            return -1;
        }
        
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
     node*head1 = NULL;
    insertattail(head1,8);
    insertattail(head1,7);
    insertattail(head1,6);
    intersect(head,head1,4);
    cout<<intersection(head,head1);
   
   
    return 0;
}