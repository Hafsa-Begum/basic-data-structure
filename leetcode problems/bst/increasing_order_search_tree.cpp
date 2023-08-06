link - https://leetcode.com/problems/increasing-order-search-tree/

class Solution {
public:
    void in_order(TreeNode* &root, vector<int> &v){
        if(root == NULL) return;
        in_order(root->left, v);
        v.push_back(root->val);
        in_order(root->right, v);
    }
    TreeNode* increasingBST(TreeNode* root) {
        if(root == NULL) return nullptr;
        vector<int> v;
        in_order(root, v);
        TreeNode* newRoot = new TreeNode(v[0]);
        TreeNode* current = newRoot;
        for(int i = 1; i<v.size(); i++){
            current->right = new TreeNode(v[i]);
            current = current->right;
        }
        return newRoot;
    }
};