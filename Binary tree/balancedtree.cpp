#include <iostream>
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
int height(node*root){
    if(root==NULL){
        return 0;
    }
    int l = height(root->left);
    int r = height(root->right);
    return max(l,r) + 1 ;
}
bool isbalanced(node* root){
    if(root==NULL){
        return true;
    }
  if(isbalanced(root->left)==false){
      return false;
  }
   if(isbalanced(root->right)==false){
      return false;
  }
  int lh = height(root->left);
  int rh = height(root->right);
  if(abs(lh-rh)<=1){
      return true;
  }
  else {
      return false;
  }



}
int main(){
   node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
   
if (isbalanced(root))
{
  cout<<"balanced tree"<<endl;
} else {
    cout<<"not balanced tree"<<endl;
}

    return 0;
}