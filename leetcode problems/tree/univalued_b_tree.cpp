// link - https://leetcode.com/problems/univalued-binary-tree/

class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        int x = root->val;
        bool flag = true;
        queue<TreeNode*> q;
        if(root) q.push(root);
        while(!q.empty()){
            TreeNode* f = q.front();
            q.pop();
            if(f->val != x){
                flag = false;
            }
            if(f->left) q.push(f->left);
            if(f->right) q.push(f->right);
        }
        return flag;
    }
};
//sum using dfs, bfs
//leaf node er min, max
//node in diff level,
//full, perfect binary tree