#include <bits/stdc++.h>
#include <iostream>
#include <stack>
using namespace std;
struct node{
    int data;
    struct node* left;
    struct node* right;
    node(int n){
        data = n;
        left = NULL;
        right = NULL;
    }
};
int levelorder(node* root,int k){
    if(root==NULL){
        return -1;
    }
    int level = 0;
    int sum = 0;
 
    queue <node*> q;
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        while(size--){
        node* Node = q.front();
    
        q.pop();
        if(level==k){
            
            sum = sum + Node->data;
         
        }
        
       else {
           if(Node->left!=NULL){
            q.push(Node->left);
        }
        if(Node->right!=NULL){
            q.push(Node->right);
        }
       }
    }
    level++;
   
  }
  return sum;
}

    

int main(){
     node* root = new node(12);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right= new node(5);
    root->right->right = new node(6);
    root->right->left = new node(7);
    int k = 2;
    cout<<levelorder(root,k);

    return 0;
}