// link - https://leetcode.com/problems/minimum-absolute-difference-in-bst/

class Solution {
public:
    vector<int> v;
    int ans = INT_MAX;
    void in_order(TreeNode* root){
        if(root == NULL) return;
        in_order(root->left);
        v.push_back(root->val);
        in_order(root->right);
    }
    int getMinimumDifference(TreeNode* root) {
        in_order(root);
        for(int i = 1; i<v.size(); i++){
            ans = min(ans, v[i]-v[i-1]);
        }
        return ans;
    }
    
};

//big string lexicographical order a which string
//my friends rahim karim rahim karim rahim karim - karim
//my friends taj taj rokon rokon rokon - rokon
//normal vector string korle value neoya
//map, set, priority-queue, vector
//stl use