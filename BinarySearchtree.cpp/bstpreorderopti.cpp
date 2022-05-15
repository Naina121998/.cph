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
node* constbst(int pre[],int* preindex,int key,int min,int max,int n){
    if(*preindex>=n){
        return NULL;
    }
    node* root = NULL;
    if(key>min && key<max){
        root = new node(key);
        *preindex = *preindex + 1;
    
    if(*preindex<n){
        root->left = constbst(pre,preindex,pre[*preindex],min,key,n);
    }
    if(*preindex <n){
        root->right = constbst(pre,preindex,pre[*preindex],key,max,n);
    }
    }
    return root;
}
node* constructtree(int pre[],int n){
    int preindex = 0;
    return constbst(pre,&preindex,pre[0],INT32_MIN,INT32_MAX,n);
}
void inorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    inorder(root->left);
    
    inorder(root->right);
    
}
int main()
{
    int pre[] = { 10, 5, 1, 7, 40, 50 };
    int n = sizeof(pre) / sizeof(pre[0]);
 
    // Function call
    node* root = constructtree(pre, n);
 
    cout << "Inorder traversal of the constructed tree: \n";
   inorder(root);
 
    return 0;
}
 