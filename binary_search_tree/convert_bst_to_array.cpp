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
Node* convert_bst(int a[], int l, int r){
    if(l>r) return NULL;
    int mid = (l+r)/2;
    Node* root = new Node(a[mid]);
    Node* leftNode = convert_bst(a, l, mid-1);
    Node* rightNode = convert_bst(a, mid+1, r);
    root->left = leftNode;
    root->right = rightNode;
    return root;
}
int main()
{
    // Node* root = input_tree();
    int n; cin>>n;
    int a[n];
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    Node* root = convert_bst(a, 0, n-1);
    level_order(root);

    return 0;
}