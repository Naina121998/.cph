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
void deleteathead(node *&head){
    node* todelete =head;
    head = head->next;
    delete todelete;
}
void deletion(node *&head,int val){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        deleteathead(head);
        return;
    }
    node* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node*todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;

}

void print(node* head){
    node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
}
void insertattail(node* &head,int val){
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
void insertathead(node* &head,int val){
     node *n = new node(val);
    n ->next = head ;
    head = n;
}
bool search(node* &head,int val){
    node* temp = head;
    while(temp!=NULL){
        if(temp->data==val){
            return true;
        }
        temp=temp->next;
    }
    return false;
}
int main(){
    node*head = NULL;
    insertattail(head,4);
    insertattail(head,2);
    insertattail(head,1);
    insertattail(head,3);
    insertathead(head,7);
   
   
  
    print(head);
    cout<<endl;
    deletion(head,2);
    
    print(head);
    return 0;
}