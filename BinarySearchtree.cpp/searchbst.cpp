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
node* searchinbst(node* root,int key){
    if(root==NULL){
        return NULL;
    }
    if(root->data==key){
        return root;
    }
    if(root->data>key){
         searchinbst(root->left,key);
    }
     searchinbst(root->right,key);
}

int main(){
    node* root = NULL;
    root = buildbst(root,4);
    buildbst(root,7);
    buildbst(root,1);
    buildbst(root,3);
   
   if(searchinbst(root,7)==NULL){
       cout<<"It doesn't exist"<<endl;
   } else{
       cout<<"It exist"<<endl;
   }

    return 0;
}