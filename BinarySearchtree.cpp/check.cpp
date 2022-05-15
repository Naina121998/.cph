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
bool isBST(node* root,int min,int max){
    if(root==NULL){
        return true;
    }
    if( min > root->data){
        return false;
    }
    if( max<root->data){
        return false;
    }
   bool l = isBST(root->left,min,root->data-1);
   bool r = isBST(root->right,root->data+1,max);
   return l && r ;
}
bool bsttree(node* root){
    return isBST(root,INT32_MIN,INT32_MAX);
}

int main()
{
    struct node *root = new node(3);
    root->left        = new node(2);
    root->right       = new node(5);
    root->left->left  = new node(1);
    root->left->right = new node(4);

 
    if (bsttree(root))
        cout << "Is BST";
    else
        cout << "Not a BST";
 
    return 0;
}