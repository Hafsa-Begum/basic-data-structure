// link - https://leetcode.com/problems/binary-tree-inorder-traversal/


class Solution {
public:
    void in_order(TreeNode* root, vector<int> &v){
        if(root == NULL) return;
        in_order(root->left, v);
        v.push_back(root->val);
        in_order(root->right, v);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        in_order(root, v);
        return v;
    }
};