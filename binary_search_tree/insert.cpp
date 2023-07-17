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
    if(val == -1) root=NULL;
    else root=new Node(val);
    queue<Node*> q;
    if(root) q.push(root);
    while (!q.empty())
    {
        Node* f = q.front();
        q.pop();
        Node* myLeft;
        Node* myRight;
        int l, r; cin>>l>>r;
        if(l==-1) myLeft=NULL;
        else myLeft= new Node(l);

        if(r==-1) myRight=NULL;
        else myRight= new Node(r);

        f->left = myLeft;
        f->right = myRight;

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
    
    return root;
}
void level_order(Node* root){
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
void insert(Node* &root, int x){
    if(root == NULL) {
        root  = new Node(x);
        return;
    }
    if(x < root->val){
        if(root->left == NULL){
            root->left  = new Node(x);
        }
        else{
            insert(root->left, x);
        }
    }
    else{
        if(root->right == NULL){
            root->right  = new Node(x);
        }
        else{
            insert(root->right, x);
        }
    }
}
void self_insert(Node* &root, int x){
    if(root == NULL) {
        root  = new Node(x);
        return;
    }
    if(x < root->val){
        insert(root->left, x);
    }
    else{
        insert(root->right, x);
    }
}
int main()
{
    Node* root = input_tree();
    level_order(root);
    cout<<endl;
    self_insert(root, 13);
    level_order(root);
    cout<<endl;
    self_insert(root, 27);
    level_order(root);
    cout<<endl;
    self_insert(root, 16);
    level_order(root);
    return 0;
}