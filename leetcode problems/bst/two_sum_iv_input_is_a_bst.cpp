link - https://leetcode.com/problems/two-sum-iv-input-is-a-bst/

class Solution {
public:
    
    bool find(TreeNode* root, int k, set<int> &nums){
        if(root == NULL) return false;
        if(nums.count(k- root->val)){
            return true;
        }
        nums.insert(root->val);
        return find(root->left, k, nums) || find(root->right, k, nums);
    }
    bool findTarget(TreeNode* root, int k) {
        set<int> nums;
        return find(root, k, nums);   
    }
};