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
    int val; cin>>val;
    Node* root;
    queue<Node*> q;
    if(val == -1) {
        root=NULL;
    }
    else{
        root = new Node(val);
    }
    if(root) q.push(root);
    while (!q.empty())
    {
        Node* p = q.front();
        q.pop();

        Node* myLeft;
        Node* myRight;

        int l, r; cin>>l>>r;

        //taking left node
        if(l == -1) {
            myLeft = NULL;
        }
        else{
            myLeft = new Node(l);
        }
        //taking right node
        if(r == -1) {
            myRight = NULL;
        }
        else{
            myRight = new Node(r);
        }
        //children assign
        p->left = myLeft;
        p->right = myRight;

        //children push

        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}
void sum_level_order(Node *root, long long int *sum){
    queue<Node*> q;
    if(root == NULL){
        cout<<"Tree empty"<<endl;
        return;
    }
    q.push(root);
    while (!q.empty())
    {
        Node* f = q.front();
        q.pop();
        *sum=*sum+f->val;
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
    
}
int main()
{
    Node* root = input_tree();
    long long int sum = 0;
    sum_level_order(root, &sum)
    cout<<sum<<endl;
    return 0;
}