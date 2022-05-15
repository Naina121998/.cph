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
void print(node* root,int k){
    if(root==NULL || k<0){
        return;
    }
    if(k == 0){
        cout<<root->data<<" ";
        return;
    }
    print(root->left,k-1);
    print(root->right,k-1);
}
int printnodes(node* root,node* target,int k){
    if(root==NULL){
        return -1;
    }
    if(root==target){
        print(root,k);
        return 0;
    }
    int dl = printnodes(root->left,target,k);
    if(dl!= -1){
        if(dl+1==k){
            cout<<root->data<<" ";
           
        } else {
            print(root->right,k-dl-2);
        }
        return 1 + dl ;
    }
    int dr = printnodes(root->right,target,k);
    if(dr!= -1){
        if(dr+1==k){
            cout<<root->data<<" ";
           
        } else {
            print(root->left,k-dr-2);
        }
        return 1 + dr ;
    }
    return -1;
}
int main(){
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right= new node(5);
    root->right->right = new node(7);
    root->right->left= new node(6);
    root->right->left->left = new node(8);
    root->right->right->right= new node(9);
   
   printnodes(root,root->right,3);

    return 0;
}