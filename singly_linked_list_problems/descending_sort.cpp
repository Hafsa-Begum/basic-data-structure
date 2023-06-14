// Question: Take a singly linked list as input and sort it in descending order.
// Then print the list.

// Sample Input
// 1 4 5 2 7 -1
// Sample Output
// 7 5 4 2 1
// Sample Input
// 20 40 30 10 50 60 -1
// Sample Output
// 60 50 40 30 20 10

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
    if(tmp == NULL) return;
    cout<<tmp->val<<" ";
    print_linked_list(tmp->next);
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int v;
    while (true)
    {
        cin>>v;
        if(v == -1) break;
        insert_at_tail(head, tail, v);
    }
    for(Node* i = head; i->next!=NULL; i = i->next){
        for(Node* j = i->next; j!=NULL; j = j->next){
            if(i->val<j->val){
                swap(i->val, j->val);
            }
        }
    }
    print_linked_list(head);
    return 0;
}

