// Question: Take a doubly linked list as input and sort it in ascending order.
// Then print the list.

// Sample Input
// 1 4 5 2 7 -1
// Sample Output
// 1 2 4 5 7
// Sample Input
// 20 40 30 10 50 60 -1
// Sample Output
// 10 20 30 40 50 60

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
void print_list(Node* head){
    Node* tmp = head;
    if(tmp == NULL) return;
    cout<<tmp->val<<" ";
    print_list(tmp->next);
}
int main()
{
    // list<int> myList;

    // int v;

    // while(true){
    //     cin>>v;
    //     if(v==-1) break;
    //     myList.push_back(v);
    // }
    // myList.sort();
    // for(int val: myList){
    //     cout<<val<<" ";
    // }
    Node* head = NULL;
    Node* tail = NULL;
    int v;
    while (true)
    {
        cin>>v;
        if(v == -1) break;
        insert_at_tail(head, tail, v);
    }
    for(Node* i = head; i->next!=NULL; i=i->next){
        for(Node* j = i->next; j!=NULL; j=j->next){
            if(i->val>j->val){
                swap(i->val, j->val);
            }
        }
    }
    print_list(head);
    return 0;
}