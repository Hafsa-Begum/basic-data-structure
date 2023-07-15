// link - https://www.codingninjas.com/studio/problems/code-find-a-node_5682

/************************************************************

    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode
    {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    // Write your code here
    queue<BinaryTreeNode<int> *> q;
    if(root) q.push(root);
    bool flag = false;
    while(!q.empty()){
        BinaryTreeNode<int> *f = q.front();
        q.pop();
        if(f->data == x){
            flag = true;
            break;
        }
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);    
    }
    return flag;
}