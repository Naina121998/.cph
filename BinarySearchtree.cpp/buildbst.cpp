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
node* buildbst(node* root,int val){
    if(root==NULL){
       return new node(val);
    }
    if(val<root->data){
        root->left = buildbst(root->left,val);
       
    } else {
        root ->right= buildbst(root->right,val);
     }
     
 return root;
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
    node* root = NULL;
    root = buildbst(root,4);
    buildbst(root,7);
    buildbst(root,1);
    buildbst(root,3);
   
    inorder(root);

    return 0;
}