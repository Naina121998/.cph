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
node* buildingtree(int postorder[],int inorder[],int start,int end){
    if(start>end){
        return NULL;
    }
   static int idx =4;
    int curr = postorder[idx];
    idx--;
   
    node* Node = new node(curr);
     if(start==end){
        return Node;
    }
    int pos = search(inorder,start,end,curr);
   
    Node->right = buildingtree(postorder,inorder,pos+1,end);
     Node->left = buildingtree(postorder,inorder,start,pos-1);
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
    int postorder[]= {4,2,5,3,1};
    int inorder[]={4,2,1,5,3};
    node* root = buildingtree(postorder,inorder,0,4);
    printdisplay(root);
    return 0;
}