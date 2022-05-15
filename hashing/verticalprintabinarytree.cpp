#include <bits/stdc++.h>
#include <iostream>
using namespace std;
struct node{
    int data;
    node*left ; 
     node * right;
     node(int val){
         data = val;
         left = NULL;
         right = NULL;
     }
};
void getverticalorder(node*root,int hd,map<int,vector<int>> &mp){
    if(root==NULL){
        return;
    }
    mp[hd].push_back(root->data);
    getverticalorder(root->left,hd-1,mp);
    getverticalorder(root->right,hd+1,mp);

}
void printVerticalOrder(node* root){
    map <int , vector<int>> mp;
    int hd = 0;
    getverticalorder(root,hd,mp);
  map<int,vector<int>> :: iterator it;
    for(auto it = mp.begin();it!=mp.end();it++){
        for(int  i = 0 ; i< it->second.size();i++){
            cout<<it->second[i]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    root->right->left->right = new node(8);
    root->right->right->right = new node(9);
    cout << "Vertical order traversal is n";
    cout<<endl;
    printVerticalOrder(root);
    return 0;
}