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
        return 0;
    }
    if(k==0){
        return root->data;
    }
   int sum = (levelorder(root->left,k-1))+(levelorder(root->right,k-1));
   
   return sum;

}

    

int main(){
     node* root = new node(12);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right= new node(5);
    root->right->right = new node(6);
    root->right->right->right = new node(7);
    int k = 2;
    cout<<levelorder(root,k);

    return 0;
}