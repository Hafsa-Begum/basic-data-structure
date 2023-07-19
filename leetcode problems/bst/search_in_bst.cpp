// link - https://leetcode.com/problems/search-in-a-binary-search-tree/

class Solution {
public:
    bool search(TreeNode* root, TreeNode* &newNode, int x){
        if(root == NULL) return false;
        if(root->val == x) {
            newNode = new TreeNode(x);
            newNode->left = root->left;
            newNode->right = root->right;
            return true;
        }
        if(x<root->val){
            return search(root->left, newNode, x);
        }
        else{
           return search(root->right, newNode, x); 
        }
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* newNode = NULL;
        if(search(root,newNode, val)){
            return newNode;
        }
        else return NULL;
    }
};