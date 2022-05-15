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
bool isBST(node* root,node* min = NULL,node* max = NULL){
    if(root==NULL){
        return true;
    }
    if( min!= NULL && min->data >= root->data){
        return false;
    }
    if(max != NULL && max->data<=root->data){
        return false;
    }
   bool l = isBST(root->left,min,root);
   bool r = isBST(root->right,root,max);
   return l && r ;
}



int main()
{
    struct node *root = new node(3);
    root->left        = new node(2);
    root->right       = new node(5);
    root->left->left  = new node(1);
    root->left->right = new node(4);

 
    if (isBST(root,NULL,NULL))
        cout << "Is BST";
    else
        cout << "Not a BST";
 
    return 0;
}