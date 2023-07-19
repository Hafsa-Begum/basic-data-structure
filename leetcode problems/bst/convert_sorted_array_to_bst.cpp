// link - https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/

class Solution {
public:
    TreeNode* convert_to_bst(vector<int>& nums, int l, int r){
        if(l>r) return NULL;
        int mid = (l+r)/2;
        TreeNode* root = new TreeNode(nums[mid]);
        TreeNode* leftNode = convert_to_bst(nums, l, mid-1);
        TreeNode* rightNode = convert_to_bst(nums, mid+1, r);
        root->left = leftNode;
        root->right = rightNode;
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int l = 0;
        int r = nums.size()-1;
        TreeNode* root = convert_to_bst(nums, l, r);
        return root;
    }
};