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
void levelorder(node* root){
    if(root==NULL){
        return;
    }
    queue <node*> q;
    q.push(root);
    while(!q.empty()){
        node* Node = q.front();
        cout<<Node->data<<" ";
        q.pop();
        if(Node->left!=NULL){
            q.push(Node->left);
        }
        if(Node->right!=NULL){
            q.push(Node->right);
        }
    }
}

    

int main(){
     node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right= new node(5);
    root->right->right = new node(6);
    root->right->right->right = new node(7);
    levelorder(root);

    return 0;
}