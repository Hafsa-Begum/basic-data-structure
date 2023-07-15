link - https://www.codingninjas.com/studio/problems/reverse-level-order-traversal_764339;
/************************************************************

    Following is the TreeNode class structure:

    template <typename T>

    class TreeNode {
    public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;
        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
#include <stack>
vector<int> reverseLevelOrder(TreeNode<int> *root){
    // Write your code here.
    queue<TreeNode<int>*> q;
    stack<int> s;
    vector<int> v;
    if(root) q.push(root);
    while(!q.empty()){
        TreeNode<int> * f = q.front();
        q.pop();

        s.push(f->val);

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
    while(!s.empty()){
        int val = s.top();
        v.push_back(val);
        s.pop();
    }
    return v;
}