#include <bits/stdc++.h>
#include <iostream>
#include <stack>
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
bool getpath(node* root, int k , vector<int> &path){
    if(root==NULL){
        return false;
    }
    path.push_back(root->data);
    if(root->data==k){
        return true;
    }
    if(getpath(root->left,k,path) || getpath(root->right,k,path)){
        return true;
    }
    path.pop_back();
    return false;
}
int lca(node* root,int n1,int n2){
    vector <int> path1, path2;
    if(!getpath(root,n1,path1) || !getpath(root, n2,path2)){
        return -1;
    }
    int i;
    for( i =0 ; i<path1.size() && path2.size();i++){
        if(path1[i]!=path2[i]){
            break;
        }
       }
     return path1[i-1];
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
   int n1 = 4;
   int n2 = 5;
   int ans = lca(root,n1,n2);
   if(ans==-1){
       cout<<"It does not exist"<<endl;
   }
   else {
       cout<<ans<<endl;
   }

 

    return 0;
}