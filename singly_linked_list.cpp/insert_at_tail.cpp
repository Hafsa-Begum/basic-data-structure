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
void insert_at_tail(Node* &head, int v){
    // making new node using the node to be inserted at tail
    Node* newNode = new Node(v);
    //if there is no node at first, need to insert it tail
    if(head == NULL){
        head = newNode;
        return;
    }
    //saving head in temp sothat it didn't get lost
    Node *temp = head;
    // now checking if last element next is null
    while(temp->next != NULL){
        //traversing till last node
        temp = temp->next;
    }
    //temp is now at last node
    temp->next=newNode;
}
void print_singly_linked_list(Node *head){
    Node * temp = head;
    while(temp != NULL){
        cout<<"Your linked list: "<<endl;
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}
int main()
{
    cout<<"Enter your value: "<<endl;
    Node* head = NULL;
    cout<<"Option - 1: Insert at tail: "<<endl;
    int op;
    cin>>op;
    if(op==1){
        int v; cin>>v;
        insert_at_tail(head, v);
    }
    print_singly_linked_list(head);
    return 0;
}