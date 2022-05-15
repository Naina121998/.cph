#include <iostream>
using namespace std;
struct node{
    int data;
    struct node* left;
    struct node* right;
     node(int n){
        data = n ;
        left = NULL;
        right = NULL;
    }
};
int search(int inorder[],int start,int end,int curr){
    for(int i = start;i<=end;i++){
        if(inorder[i]==curr){
            return i;
        }
    }
    return -1;

}
node* buildingtree(int preorder[],int inorder[],int start,int end){
    if(start>end){
        return NULL;
    }
   static int idx =0;
    int curr = preorder[idx];
    idx++;
   
    node* Node = new node(curr);
     if(start==end){
        return Node;
    }
    int pos = search(inorder,start,end,curr);
    Node->left = buildingtree(preorder,inorder,start,pos-1);
    Node->right = buildingtree(preorder,inorder,pos+1,end);
    return Node;

}
void printdisplay(node* root){
    if(root==NULL){
        return;
     }
    printdisplay(root->left);
    cout<<root->data<<" ";
    printdisplay(root->right);
}
int main(){
    int preorder[]= {1,2,4,3,5};
    int inorder[]={4,2,1,5,3};
    node* root = buildingtree(preorder,inorder,0,4);
    printdisplay(root);
    return 0;
}