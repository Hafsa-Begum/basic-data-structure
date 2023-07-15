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
int count_leaf(Node* root){
    if(root == NULL) return 0;
    else if(root->left == NULL && root->right == NULL){
        cout<<root->val<<" ";
        return 1;
    }
    else{
        int l = count_leaf(root->left);
        int r = count_leaf(root->right);
        return l+r;
    }
}
void print_leaf_nodes(Node* root, vector<int> &v){
    if(root == NULL) return;
    if(root->left==NULL && root->right==NULL){
        v.push_back(root->val);
    }
    print_leaf_nodes(root->left, v);
    print_leaf_nodes(root->right, v);
}
void sum_of_leaf_nodes(Node* root, long long int *sum){
    if(root == NULL) return;
    if(root->left==NULL && root->right==NULL){
        *sum = *sum+root->val;
    }
    sum_of_leaf_nodes(root->left, sum);
    sum_of_leaf_nodes(root->right, sum);
}
int main()
{
    Node* root = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* e = new Node(60);
    Node* f = new Node(70);
    Node* g = new Node(80);
    Node* h = new Node(90);
    Node* i = new Node(100);

    root->left = a;
    root->right = b;
    a->left = c;
    a->right = h;
    b->right = d;
    c->right = e;
    d->left = f;
    d->right = g;
    h->right = i;

    cout<<count_leaf(root)<<endl;
    long long int sum = 0;
    sum_of_leaf_nodes(root, &sum);
    cout<<"sum "<<sum<<endl;
    vector<int> v;
    print_leaf_nodes(root, v);
    int min = INT_MAX;
    int max = INT_MIN;
    for(int x:v){
        if(min>x){
            min = x;
        }
        if(max<x){
            max = x;
        }
    }
    cout<<"min "<<min<<" max "<<max;
    return 0;
}