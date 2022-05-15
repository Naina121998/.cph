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
    cout<<root->data<<" ";
    inorder(root->left);
    
    inorder(root->right);
    
}
int main(){
    node* root = NULL;
   int a[6] ={ 10, 5, 1, 7, 40, 50 };
   int n = 6;
   for(int i = 0;i<n;i++){
       root = buildbst(root,a[i]);
   }
   
    cout<<endl;
    inorder(root);
   
    return 0;
}