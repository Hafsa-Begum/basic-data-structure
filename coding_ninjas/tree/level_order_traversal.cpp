// link - https://www.codingninjas.com/studio/problems/level-order-traversal_796002

#include <bits/stdc++.h> 
/************************************************************

    Following is the BinaryTreeNode class structure

    template <typename T>
    class BinaryTreeNode {
       public:
        T val;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    //  Write your code here.
    vector<int> v;
    queue<BinaryTreeNode<int> *> q;
    if(root) q.push(root);
    while(!q.empty()){
        BinaryTreeNode<int>* f = q.front();
        q.pop();
        v.push_back(f->val);
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
    return v;
}