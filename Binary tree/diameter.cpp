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

int levelorder(node* root){
    if(root==NULL){
        return 0;
    }
   int l = levelorder(root->left);
   int m = levelorder(root->right);
  
  return max(l , m ) + 1;
}
int diameter(node* root){
    if(root==NULL){
        return 0;
    }
    int lheight = levelorder(root-> left);
    int rheight = levelorder(root->right);
    int sum = rheight + lheight;

    int ldiameter = diameter(root->left);
    int rdiameter = diameter(root->right);

    return max(sum,max(ldiameter,rdiameter));
}
    

int main(){
     node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right= new node(5);
    root->right->right = new node(6);
    root->right->right->right = new node(7);

   
    cout<<diameter(root);

    return 0;
}