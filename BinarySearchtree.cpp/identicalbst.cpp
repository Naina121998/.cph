#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* left; Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
bool isIdentical(Node* root1,Node* root2){
    if(root1==NULL && root2==NULL){
        return true;
    }
    else if(root1==NULL || root2==NULL){
        return false;
    } else {
        if(root1->data == root2->data && isIdentical(root1->left,root2->left) && isIdentical(root1->right,root2->right))
        {
            return true;
        }
        return false;
    }
}
int main()
{
    struct Node* root1 = new Node(5);
    struct Node* root2 = new Node(5);
    root1->left = new Node(3);
    root1->right = new Node(8);
    root1->left->left = new Node(2);
    root1->left->right = new Node(4);
  
    root2->left = new Node(3);
    root2->right = new Node(8);
    root2->left->left = new Node(8);
    root2->left->right = new Node(4);
  
    if (isIdentical(root1, root2))
        cout << "Both BSTs are identical";
    else
        cout << "BSTs are not identical";
  
    return 0;
}