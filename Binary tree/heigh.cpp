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
bool isbalanced(node* root,int* height){
     int lh = 0 ; int rh = 0;int l = 0 ; int r = 0;
     if(root==NULL){
        *height = 0;
        return true;
    }
   
   l = isbalanced(root->left,&lh);
    r = isbalanced(root->right,&rh);
     *height = max(lh,rh) + 1;
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
    root->left->left->left = new node(8);
 
 
    int height = 0;
if (isbalanced(root, &height))
        cout << "Tree is balanced";
    else
        cout << "Tree is not balanced";
 

    return 0;
}