#include <bits/stdc++.h>

using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};

void print_normal_list(Node* head) {
    Node* tmp = head;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
void print_reverse_list(Node* tail){
    Node* tmp = tail;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->prev;
    }
    cout<<endl;
}
void insert_at_any_position(Node* &head, int pos, int v){
    Node* newNode = new Node(v);
    Node* tmp = head;
    for(int i=1; i<=pos-1; i++){
        tmp = tmp->next;
    }
    //insert tmp er next node to the next node of newnode
    newNode->next = tmp->next;
    //insert newnode to next of tmp
    tmp->next = newNode;
    //inser newnode to the previous of tmp next node
    newNode->next->prev = newNode;
    //insert tmp to the previous node of newnode
    newNode->prev = tmp;
}
void insert_at_head(Node* &head, Node* &tail, int v){
    Node* newNode = new Node(v);
    Node* tmp = head;
    if(head==NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode; 
}
void insert_at_tail(Node* &head, Node* &tail, int v){
    Node* newNode = new Node(v);
    Node* tmp = head;
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
int size(Node* head){
    Node* tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* tail = c;

    head->next = a;
    a->next = b;
    a->prev = head;
    b->next = c;
    b->prev = a;
    c->prev = b;
    // Node* head =NULL;
    // Node* tail =NULL;
    int pos, val;
    cin>>pos>>val;
    if(pos>size(head)){
        cout<<"Invalid"<<endl;
    }
    else if(pos==0){
        insert_at_head(head, tail, val);
    }
    else if(pos == size(head)){
        insert_at_tail(head, tail, val);
    }
    else{
        insert_at_any_position(head, pos, val);
    }
    
    print_normal_list(head);
    print_reverse_list(tail);
    return 0;
}