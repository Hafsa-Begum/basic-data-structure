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

Node* input_tree(vector<int> &v){
    Node* root;
    int val; cin>>val;
    if(val == -1) root=NULL;
    else root=new Node(val);
    queue<Node*> q;
    
    if(root) {
        q.push(root);
        v.push_back(root->val);
    }
    
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

        if(f->left) {
            q.push(f->left);
            v.push_back(f->left->val);
        };
        if(f->right) {
            q.push(f->right);
            v.push_back(f->right->val);
        }
    }
    
    return root;
}

int main()
{
    vector<int> v;
    input_tree(v);
    
    priority_queue<int> pq;

    for(int num: v){
        pq.push(num);
    }

    int q;
    cin>>q;

    while (q--)
    {
        int c; cin>>c;
        if(c==1){
            int x; cin>>x;
            pq.push(x);
            
        }
        else if(c==2){
            if(!pq.empty()){
                cout<<pq.top()<<endl;
                pq.pop();
            }
        }
    
    }
    
    return 0;
}