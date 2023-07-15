// link - https://leetcode.com/problems/leaf-similar-trees/description/

class Solution {
public:
        vector<int> v;
    void nodeVal(TreeNode* root){
        if(root == NULL) return;
        if(root->left == NULL && root->right == NULL) v.push_back(root->val);
        if(root->left) nodeVal(root->left);
        if(root->right) nodeVal(root->right);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1;
        vector<int> v2;
        v = {};
        nodeVal(root1);
        v1 = v;
        v = {};
        nodeVal(root2);
        v2 = v;
        return v1==v2;
    }
};