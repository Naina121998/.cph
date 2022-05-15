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


int diameter(node* root,int *height){
    int l= 0 ; int m=0; 
    if(root==NULL){
        *height = 0;
        return 0;
    }
  
    

    int  dl = diameter(root->left,&l);
  int  dr = diameter(root->right,&m);
   *height = max(l,m) + 1;
    return max(l+m+1,max(dl,dr));
}
    

int main(){
      node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right= new node(5);
    root->right->right = new node(6);
    root->right->right->right = new node(7);


   int height = 0;
    cout<<diameter(root,&height);

    return 0;
}