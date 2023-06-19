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
void print_normal_list(Node* head){
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
void delete_from_any_position(Node* head, int pos){
    Node* tmp = head;
    for(int i=1; i<=pos-1; i++){
        tmp = tmp->next;
    }
    tmp->next = tmp->next->next;
    tmp->next->prev = tmp;
}
void delete_head(Node* &head, Node* &tail){
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
    if(head == NULL){
        tail = NULL;
        return;
    }
    head->prev = NULL;
}
void delete_tail(Node* &head, Node* &tail){
    Node* deleteNode = tail;
    tail = tail->prev;
    if(tail == NULL){
        head = NULL;
        return;
    }
    tail->next = NULL;
}
int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* tail = b;

    head->next = a;  //   null-10-a   head-20-b    a-30-null
    a->next = b;     //      head          a           b
    a->prev = head;
    b->prev = a;

    int pos; cin>>pos;
    if(pos == 0){
        delete_head(head, tail);
    }
    else if(pos >=size(head)){
        cout<<"Invalid"<<endl;
    }
    else if(pos==size(head)-1){
        delete_tail(head,tail);
    }
    else{
        delete_from_any_position(head, pos);
    }
    print_normal_list(head);
    print_reverse_list(tail);
    return 0;
}