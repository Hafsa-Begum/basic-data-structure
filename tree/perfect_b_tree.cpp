#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;

    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* input_tree(){
    Node* root;
    int val; cin>>val;
    if(val == -1) root = NULL;
    else root = new Node(val);
    queue<Node*> q;
    if(root) q.push(root);
    while (!q.empty())
    {
        Node* f = q.front();
        q.pop();

        Node* myLeft;
        Node* myRight;
        int l,r; cin>>l>>r;

        if(l==-1) myLeft = NULL;
        else myLeft = new Node(l);
        if(r==-1) myRight = NULL;
        else myRight = new Node(r);

        f->left = myLeft;
        f->right = myRight;

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
    
    return root;
}
void print_tree(Node* root){
    queue<Node*> q;
    if(root) q.push(root);
    while (!q.empty())
    {
        Node* f = q.front();
        q.pop();

        cout<<f->val<<" ";
        
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
}
int maxHeight(Node* root){
    if(root==NULL) return 0;
    int l = maxHeight(root->left);
    int r = maxHeight(root->right);
    return max(l,r) + 1;
}
bool isPerfectTree(Node* root, int d, int level = 1){
    if(root == NULL) return true;
    if(root->left==NULL && root->right==NULL) return d==level;
    if(root->left==NULL || root->right==NULL) return false;
    bool l = isPerfectTree(root->left, d, level+1);
    bool r = isPerfectTree(root->right, d, level+1);
    return l && r;
}
int main()
{
    Node* root = input_tree();
    print_tree(root);
    int d = maxHeight(root);
    cout<<endl;
    cout<<d<<endl;
    bool flag = isPerfectTree(root, d);
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}