#include <iostream>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }

};
void swap(int * a , int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void correctBSTUtil(node* root, node** first,node ** mid , node** last,node ** prev){
   if ( root == NULL){
       return;
   }
   correctBSTUtil(root->left,first,mid,last,prev);
   if(*prev && (*prev)->data > root->data){
         if(!*first){
             *first = *prev;
             *mid = root;
         } else {
             *last = root;
         }
   }
   *prev = root;
   correctBSTUtil(root->right,first,mid,last,prev);

}
void  correctBST(node* root){
    node* first , *mid , *last , *prev;
    first = mid = last = prev = NULL;
    correctBSTUtil(root, &first, &mid , & last,&prev);
    if(first && last){
        swap(&(first->data) , & (last->data));
    } else if(first && mid){
        swap((&first->data) , &(mid->data));
    }

}
void printinorder(node* root){
    if (root==NULL){
        return;
    }
    printinorder(root->left);
    cout<<root->data<<" ";
    printinorder(root->right);
}
int main()
{
    /*   6
        /  \
       10    2
      / \   / \
     1   3 7  12
     10 and 2 are swapped
    */
  
    struct node *root = new node(6);
    root->left        = new node(10);
    root->right       = new node(2);
    root->left->left  = new node(1);
    root->left->right = new node(3);
    root->right->right = new node(12);
    root->right->left = new node(7);
  
  
    printinorder(root);
  cout<<endl;
    correctBST(root);
  
  
    printinorder(root);
  
    return 0;
}