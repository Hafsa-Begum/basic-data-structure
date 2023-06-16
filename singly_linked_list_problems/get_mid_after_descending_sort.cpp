// Problem Statement

// You need to take a singly linked list of integer value as input. Then you need to sort the linked list in descending order and print the middle element of it. If there are multiple values in the middle, print both.

// Note: You must use singly linked list, otherwise you will not get marks.

// Input Format

// Input will contain the values of the singly linked list, and will terminate with -1.
// Constraints

// 1 <= N <= 1000; Here N is the maximum number of nodes of the linked list.
// 0 <= V <= 1000; Here V is the value of each node.
// Output Format

// Output the value/values of the middle element.
// Sample Input 0

// 20 10 40 30 50 -1
// Sample Output 0

// 30
// Sample Input 1

// 20 30 10 40 60 50 -1
// Sample Output 1

// 40 30
// Sample Input 2

// 726 -1
// Sample Output 2

// 726
// Sample Input 3

// 348 726 -1
// Sample Output 3

// 726 348

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
void print_middle(Node* head, int n){
    Node* tmp = head;
    int mid = (n+1)/2;
    for(int i = 1; i<mid; i++){
            tmp = tmp->next;
        }
    if(n%2 == 0){  
        cout<<tmp->val<<" "<<tmp->next->val<<endl;
    }
    else{
        cout<<tmp->val<<" "<<endl;
    }
}

int main()
{
    // Write your code here
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
    int length = size(head);
    print_middle(head, length);
    return 0;
}

