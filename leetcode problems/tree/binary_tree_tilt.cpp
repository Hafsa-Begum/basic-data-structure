// link - https://leetcode.com/problems/binary-tree-tilt/

class Solution {
public:
    int findSum(TreeNode* root, int &tilt){
        if(root == NULL) return 0;
        int l = findSum(root->left, tilt);
        int r = findSum(root->right, tilt);
        tilt += abs(l-r);
        return l + r + root->val;
    }
    int findTilt(TreeNode* root) {
        int tilt = 0;
        findSum(root, tilt);
        return tilt;
    }
};