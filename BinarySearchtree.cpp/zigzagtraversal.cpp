#include <iostream>
#include <stack>
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
void zigzagtraversal(node* root){
        if(root==NULL){
            return;
        }
        stack <node* > currlevel;
        stack <node* > nextlevel;
        bool lefttoright = true;
        currlevel.push(root);
       
        while(!currlevel.empty()){
            node* temp = currlevel.top();
            currlevel.pop();
       
        if(temp){
           cout <<temp->data<<" ";

        if(lefttoright){
            if(temp->left){
                nextlevel.push(temp->left);
            }
            if(temp->right){
                nextlevel.push(temp->right);
            }
        }
        else {
           if(temp->right){
                nextlevel.push(temp->right);
            }
             if(temp->left){
                nextlevel.push(temp->left);
            }
        }
        
    }
     if(currlevel.empty()){
        lefttoright = !lefttoright;
        swap(currlevel,nextlevel);
    }
    
   
  }
}
int main()
{
    // create tree
    struct node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(7);
    root->left->right = new node(6);
    root->right->left = new node(5);
    root->right->right = new node(4);
    cout << "ZigZag Order traversal of binary tree is \n";
 
    zigzagtraversal(root);
 
    return 0;
}