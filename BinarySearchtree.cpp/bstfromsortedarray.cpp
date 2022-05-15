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
node* sortedArrayToBST(int arr[],int start, int end){
    if(start>end){
        return NULL;
    }
    int mid = (start + end) / 2 ;
    node* root = new node(arr[mid]);
    root->left = sortedArrayToBST(arr,start,mid-1);
    root->right =  sortedArrayToBST(arr,mid+1,end);
    return root;

}
void preOrder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

int main() 
{ 
    int arr[] = {1, 2, 3, 4, 5, 6, 7}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
  
  
    node *root = sortedArrayToBST(arr, 0, n-1); 
    cout << "PreOrder Traversal of constructed BST \n"; 
    preOrder(root); 
  
    return 0; 
} 
  