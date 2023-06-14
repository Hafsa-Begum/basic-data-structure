#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
void print_linked_list(Node* head){
    Node* tmp = head;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
}
int size(Node* head){
    Node* tmp = head;
    int cnt = 0;
    while(tmp != NULL){
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void insert(Node* head, int pos, int v){
    Node* newNode = new Node(v);
    Node* tmp = head;
    for(int i=0; i<pos-1; i++){
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}
void insert_head(Node* &head, int v){
    Node* newNode = new Node(v);
    newNode->next = head;
    head = newNode;
}
void insert_tail(Node* &head, Node* &tail, int v){
    Node* newNode = new Node(v);
    if(head == NULL){
        head = newNode;
        tail = newNode;
    }
    tail->next = newNode;
    tail = newNode;
}
int main()
{   
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* tail = d;
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    print_linked_list(head);
    int pos, v; cin>>pos>>v;
    if(pos>size(head)){
        cout<<endl<<"Invalid"<<endl;
    }
    else if(pos==0){
        insert_head(head, v);
    }
    else if(pos == size(head)){
        insert_tail(head, tail, v);
    }
    else{
        insert(head, pos, v);
    }
    // int pos, v; cin>>pos>>v;
    cout<<endl;
    print_linked_list(head);
    
    return 0;
}

/*
note::::
comparison when inserting into array and linked list

insert_at       Array      Linked-list
 head     -     O(N)    -      O(1)
 tail     -     O(1)    -      O(1)
 any node -     O(N)    -      O(N)

*/