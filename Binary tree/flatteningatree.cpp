#include <iostream>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
    node(int n){
        data = n;
        left = NULL;
        right = NULL;
    }
};
void flattened(node* root){
    if(root==NULL || (root->left==NULL && root->right==NULL)){
        return;
    }
    if(root->left!=NULL){
        flattened(root->left);
        node* temp = root->right;
        root->right = root->left;
        root->left=NULL;
        node* t = root->right;
        while(t->right!=NULL){
            t = t->right;
        }
        t ->right = temp;
    }
    flattened(root->right);
}
void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right= new node(5);
    root->right->left = new node(8);
    root->right->right = new node(6);
    root->right->right->right = new node(7);
    inorder(root);
    cout<<endl;
    flattened(root);
    inorder(root);
   

    return 0;
}