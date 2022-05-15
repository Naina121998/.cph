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
int maxsumpath(node*root,int &ans){
    if(root==NULL){
        return 0;
    }
    int n1 = maxsumpath(root->left,ans);
    int n2 = maxsumpath(root->right,ans);
    int maxsingle = max(max(n1,n2) + root->data,root->data);
    int maxtop = (max(maxsingle,root->data+ n1 + n2));
    ans = max(ans,maxtop);
    return maxsingle;
}
int maxsum(node* root){
    int ans = INT16_MIN;
    maxsumpath(root,ans);
    return ans;
}
int main(){
     node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right= new node(5);
    root->right->right = new node(7);
    root->right->left= new node(6);
    root->right->left->left = new node(8);
  
  cout<< maxsum(root) <<endl;

    return 0;
}