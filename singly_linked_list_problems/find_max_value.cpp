// Question: Take a singly linked list as input, then print the maximum value of them.

// Sample Input
// 2 4 1 3 5 4 2 5 -1
// Sample Output
// 5
// Sample Input
// 5 4 1 2 5 6 8 4 1 3 -1
// Sample Output
// 8

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
    int max = INT_MIN;
    for(Node* i = head; i!=NULL; i= i->next){
        if(i->val>max){
            max = i->val;
        }
    }
    cout<<max<<endl;

    return 0;
}
