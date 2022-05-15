#include <bits/stdc++.h>
#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int n){
        data = n;
        next = NULL;
    }
};

 
Node* mergeKSortedLists(Node* arr[], int k){
    priority_queue <Node* , vector<Node*>, greater<Node*>> pq;
    for(int i = 0;i<k;i++){
        pq.push(arr[i]);
    }
    if(pq.empty()){
        return NULL;
    }
    Node* dummy = new Node(0);
    Node* last = dummy;
    
    while(!pq.empty()){
        Node* curr = pq.top();
        pq.pop();
        last->next = curr;
        last = last ->next;
        if(curr->next!=NULL){
            pq.push(curr->next);
        } 
    }
    return dummy->next;
}
void printhead(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
int main()
{
    int k = 3; 
  
 
   
    Node* arr[k];
 
    
    arr[0] = new Node(1);
    arr[0]->next = new Node(3);
    arr[0]->next->next = new Node(5);
    arr[0]->next->next->next = new Node(7);
 
    arr[1] = new Node(2);
    arr[1]->next = new Node(4);
    
    arr[2] = new Node(10);
    arr[2]->next = new Node(19);
    arr[2]->next->next = new Node(20);

 
   
     Node* head = mergeKSortedLists(arr, k);
     printhead(head);
 
    return 0;
}