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

void insert_at_tail(Node* &head, Node* &tail, int v){
    Node* newNode = new Node(v);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void print_linked_list(Node* head){
    Node* tmp = head;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp= tmp->next;
    }
}
Node* removeDuplicate(Node* head){
    Node* tmp = head;
    
    while(tmp != NULL && tmp->next != NULL){
        if(tmp->val == tmp->next->val){
            tmp->next = tmp->next->next;
        }
        else{
            tmp = tmp->next;
        }
    }
    return head;
}
int main()
{
    // Write your code here
    Node* head = NULL;
    Node* tail = NULL;
    while(true){
        int v; cin>>v;
        if(v==-1) break;
        insert_at_tail(head,tail, v);
    }
    for (Node* i = head; i->next!=NULL; i=i->next)
    {
        for (Node* j = i->next; j!=NULL; j=j->next){
            if(i->val>j->val){
                swap(i->val, j->val);
            }
        }
    }
    Node* uniqueListHead = removeDuplicate(head);
    print_linked_list(uniqueListHead);
    return 0;
}
