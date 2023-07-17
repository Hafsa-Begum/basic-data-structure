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
bool search(Node* root, int x){
    if(root==NULL) return false;
    if(root->val == x) return true;
    if(x<root->val){
        return search(root->left, x);
    }
    else{
        return search(root->right, x);
    }
}
int main()
{
    Node* root = input_tree();
    level_order(root);
    cout<<endl;
    if(search(root, 6)) cout<<"Yes, Found"<<endl;
    else cout<<"No, Not Found"<<endl;
    return 0;
}
//bst = binary tree + binary search
//left-node < node
//right-node > node
//if there is same value in tree for bst,
//need to use frequency array to keep count of duplicate value/number