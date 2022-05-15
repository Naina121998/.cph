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
node* lca(node* root,int n1,int n2){
        if(root==NULL){
            return NULL;
        }
        if(root->data==n1 || root->data==n2){
            return root;
        }
        node* left = lca(root->left,n1,n2);
        node* right = lca(root->right,n1,n2);
        if(left!=NULL && right!=NULL){
            return root;
        }
        if(left==NULL && right==NULL){
            return NULL;
        }
        if(left!=NULL){
            return left;
        }
        return right;

}
int dist(node* root,int k,int level){

    if(root==NULL){
        return -1;
    }
    if(root->data==k){
        return level;
    }
    int left = dist(root->left,k,level+1);
    if(left==-1){
        return dist(root->right,k,level+1);
    }
    
}

int finddistance(node* root,int n1,int n2){
    node* lc = lca(root,n1,n2);
    int d1 = dist(lc,n1,0);
    int d2 = dist(lc,n2,0);
    return d1 + d2;
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
    int n1 = 4;
    int n2 = 6;
    cout<<finddistance(root,n1,n2)<<endl;
   

    return 0;
}