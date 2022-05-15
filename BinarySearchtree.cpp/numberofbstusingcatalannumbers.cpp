#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node*left;
    node*right;
    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
vector<node*> constructbst(int start ,int end){
    vector<node* >trees;
    if(start>end){
        trees.push_back(NULL);
        return trees;
    }

    for(int i=start;i<=end;i++){
        vector<node* > leftsubtrees = constructbst(start,i-1);
        vector<node*> rightsubtrees = constructbst(i+1,end);
        for(int j=0;j<leftsubtrees.size();j++){
            node* left = leftsubtrees[j];
            for(int k=0;k<rightsubtrees.size();k++){
                 node*right = rightsubtrees[k];
                 node* root = new node(i);
                 root->left = left;
                 root-> right = right;
                 trees.push_back(root);
            }
        }
    }
   return trees;
}
void printinorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    printinorder(root->left);
    
    printinorder(root->right);
}
int main(){
    vector<node*> constructtrees = constructbst(1,3);
    for(int i=0;i<constructtrees.size();i++){
        printinorder(constructtrees[i]);
        cout<<endl;
    }
    return 0;
}