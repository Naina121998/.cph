#include<bits/stdc++.h>
using namespace std;
 
// A binary tree node
struct Node
{
    int data;
    struct Node* left, *right;
};
 
// A utility function to allocate a new node
struct Node* newNode(int data)
{
    struct Node* newNode = new Node;
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return (newNode);
}
 
// This function returns overall maximum path sum in 'res'
// And returns max path sum going through root.
int findMaxUtil(Node* root, int &res)
{
    //Base Case
    if (root == NULL)
        return 0;
 
    // l and r store maximum path sum going through left and
    // right child of root respectively
    int l = findMaxUtil(root->left,res);
    int r = findMaxUtil(root->right,res);
 
    // Max path for parent call of root. This path must
    // include at-most one child of root
    int max_single = max(max(l, r) + root->data, root->data);
 
    // Max Top represents the sum when the Node under
    // consideration is the root of the maxsum path and no
    // ancestors of root are there in max sum path
    int max_top = max(max_single, l + r + root->data);
 
    res = max(res, max_top); // Store the Maximum Result.
 
    return max_single;
}
 
// Returns maximum path sum in tree with given root
int findMaxSum(Node *root)
{
    // Initialize result
    int res = INT_MIN;
 
    // Compute and return result
    findMaxUtil(root, res);
    return res;
}
 
// Driver program
int main()
{
     Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right= newNode(5);
    root->right->right = newNode(7);
    root->right->left= newNode(6);
    root->right->left->left = newNode(8);
  
    cout << "Max path sum is " << findMaxSum(root);
    return 0;
}