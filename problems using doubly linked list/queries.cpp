// Question: You have a doubly linked list which is empty initially. 
// You need to take a value Q which refers to queries. For each query
// you will be given X and V. You will insert the value V to the Xth
// index of the doubly linked list and print the list in both left to
// right and right to left. If the index is invalid then print “Invalid”.

// Sample Input
// 6
// 0 10
// 1 20
// 4 30
// 0 30
// 1 40
// 5 50
// Sample Output
// 10
// 10
// 10 20
// 20 10
// Invalid
// 30 10 20
// 20 10 30
// 30 40 10 20
// 20 10 40 30
// Invalid

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
void insert_at_head(Node* &head, Node* &tail, int v){
    Node* newNode = new Node(v);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
void insert_at_any_position(Node* &head, int pos, int v){
    Node* newNode = new Node(v);
    Node* tmp = head;
    for(int i=1; i<=pos-1; i++){
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = tmp;
}
int size(Node* head){
    Node* tmp = head;
    int cnt = 0;
    while (tmp!=NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void print_normal_list(Node* head){
    Node* tmp = head;
    while(tmp!=NULL){
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
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int q; cin>> q;
    while (q--)
    {
        int pos, v; cin>>pos>>v;
        if(pos == size(head)){
            insert_at_tail(head, tail, v);
            print_normal_list(head);
            print_reverse_list(tail);
        }
        else if(pos>size(head)){
            cout<<"Invalid"<<endl;
        }
        else if(pos == 0){
            insert_at_head(head, tail, v);
            print_normal_list(head);
            print_reverse_list(tail);
        }
        else{
            insert_at_any_position(head, pos, v);
            print_normal_list(head);
            print_reverse_list(tail);
        }
        
    }
    

    
    return 0;
}

