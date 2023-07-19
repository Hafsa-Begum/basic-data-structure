// link - https://www.codingninjas.com/studio/problems/insert-into-a-binary-search-tree_1279913

void insert_bst(TreeNode<int>* &root, int x){
    if(root == NULL){
        root = new TreeNode<int>(x);
        return;
    }
    if(x<root->val){ 
        insert_bst(root->left, x); 
    }
    else{
        insert_bst(root->right, x);
    }
}
TreeNode<int>* insertionInBST(TreeNode<int>* root, int val)
{
    // Write your code here.
    insert_bst(root, val);
    return root;
}