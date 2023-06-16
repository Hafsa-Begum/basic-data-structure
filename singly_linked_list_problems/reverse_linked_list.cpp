// Problem Statement

// You need to take a singly linked list of integer value as input. Then you need to print the singly linked list in reverse order, after that print the original linked list also.

// Note: You must use singly linked list, otherwise you will not get marks.

// Input Format

// Input will contain the values of the singly linked list, and will terminate with -1.
// Constraints

// 1 <= N <= 10^6; Here N is the maximum number of nodes of the linked list.
// 0 <= V <= 10^9; Here V is the value of each node.
// Output Format

// In first line, output the linked list in reverse order.
// In second line, print the original linked list.
// Sample Input 0

// 10 20 30 40 50 -1
// Sample Output 0

// 50 40 30 20 10 
// 10 20 30 40 50 
// Sample Input 1

// 20 40 50 10 -1
// Sample Output 1

// 10 50 40 20 
// 20 40 50 10

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
void reverse_linked_list (Node* head){
    Node* tmp = head;
    if(tmp == NULL) return;
    reverse_linked_list(tmp->next);
    cout<<tmp->val<<" ";
}
void print_linked_list (Node* head){
    Node* tmp = head;
    if(tmp == NULL) return;
    cout<<tmp->val<<" ";
    print_linked_list(tmp->next);
}

int main()
{
    // Write your code here
    Node* head = NULL;
    Node* tail = NULL;
    int v;

    while(true){
        cin>>v;
        if(v == -1) break;
        insert_at_tail(head, tail, v);
    }
    reverse_linked_list(head);
    cout<<endl;
    print_linked_list(head);
    return 0;
}
