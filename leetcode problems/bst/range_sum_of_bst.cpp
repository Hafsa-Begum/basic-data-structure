// link - https://leetcode.com/problems/range-sum-of-bst/

class Solution {
public:
    void in_order_sum(TreeNode* root, int low, int high, int &sum){
        if(root==NULL) return;
        in_order_sum(root->left, low, high, sum);
        if(root->val>=low && root->val<=high){
            sum = sum + root->val;
        }
        in_order_sum(root->right, low, high, sum);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum =  0;
        in_order_sum(root, low, high, sum);
        return sum;
    }
};