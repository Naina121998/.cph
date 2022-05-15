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
struct info{
    int size;
    int max;
    int min;
    int ans;
    bool isbst;
};
info largestbst(node*root){
   if(root==NULL){
       return{0,INT32_MIN,INT32_MAX,0,true};
   }
   if(root->left==NULL && root->right==NULL){
       return{1,root->data,root->data,1,true};
   }
   info l = largestbst(root->left);
   info r = largestbst(root->right);

   info curr;
   curr.size = (1 + l.size + r.size);
   
   if(l.isbst && r.isbst && l.max < root->data && r.min > root->data){
       curr.min = min(l.min , min(r.min,root->data));
       curr.max = max(r.max , max(l.max,root->data));
       curr.ans = curr.size;
       curr.isbst = true;
       return curr;
   }
    
       curr.ans = max(l.ans , r.ans);
       curr.isbst = false;
       return curr;
   


}

int main()
{
    /* Let us construct the following Tree
        60
       /  \
      65  70
     /
    50 */
 
    struct node *root = new node(5);
    root->left = new node(2);
    root->right = new node(4);
    root->left->left = new node(1);
    root->left->right=new node(3);
    cout<<largestbst(root).ans<<endl;
    return 0;
}