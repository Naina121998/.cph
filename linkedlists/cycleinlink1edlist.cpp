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
void makecycle(node* &head,int pos){
    node* temp = head;
    int count = 1;
    node* startnode;
    while(temp->next!=NULL){
        if(count==pos){
            startnode = temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next = startnode;
}
bool detectcycle(node* &head){
    node* slowptr = head;
    node* fastptr = head;
   bool flag = false;
    while(fastptr!=NULL && fastptr->next!=NULL){
        slowptr = slowptr->next;
        fastptr = fastptr->next->next;
        if(fastptr==slowptr){
            return true;
        }
    }
   return false;
}
void removecycle(node* &head){
    node* slow = head;
    node* fast = head;
    do{
        slow= slow->next;
        fast = fast->next->next;
    }while(slow!=fast);
    fast = head;
    while(fast->next != slow->next){
        slow= slow->next;
        fast = fast->next;
    }
    slow->next = NULL;
}
int cyclestart(node*&head){
    node* slow = head;
    node* fast = head;
    do{
        slow= slow->next;
        fast = fast->next->next;
    }while(slow!=fast);
    fast = head;
    while(fast->next != slow->next){
        slow= slow->next;
        fast = fast->next;
    }
   return slow->next->data;
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
    node*head = NULL;
    insertattail(head,4);
    insertattail(head,2);
    insertattail(head,1);
    insertattail(head,3);
    insertattail(head,6);  
    insertathead(head,7);
    insertattail(head,8);
    insertattail(head,9);
    insertattail(head,1);
    insertattail(head,5);
    cout<<endl;
    print(head);
    cout<<endl;
    cout<<detectcycle(head);
    int pos = 6;
    makecycle(head,pos);
    cout<<endl;
   
    cout<<detectcycle(head);
    cout<<endl;
    cout<<cyclestart(head);
    cout<<endl;
    removecycle(head);
    cout<<detectcycle(head);
  
    return 0;
}