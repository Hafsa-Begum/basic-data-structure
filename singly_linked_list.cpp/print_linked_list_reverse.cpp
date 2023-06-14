#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
void reverse_print_linked_list(Node* head){
    Node* tmp = head;
    if(tmp == NULL) return;
    reverse_print_linked_list(tmp->next);
    cout<<tmp->val<<" ";
}
void print_linked_list(Node* head){
    Node* tmp = head;
    if(tmp == NULL) return;
    cout<<tmp->val<<" ";
    print_linked_list(tmp->next);
}
void insert_at_tail(Node* &head, Node* &tail, int v){
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
    Node* head = NULL;
    Node* tail = NULL;
    int v;
    while(true){
        cin>>v;
        if(v==-1) break;
        insert_at_tail(head, tail, v);
    }
        cout<<"Your linekd list: ";
        print_linked_list(head);
        cout<<endl<<"Reverse linked list: ";
        reverse_print_linked_list(head);
    
    return 0;
}