// Question: Take a singly linked list as input and print the size of the linked list.

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
    Node* newNode = new Node(v);
    if(head == NULL){
        head = newNode;
        return;
    }
    Node* tmp = head;
    while(tmp->next != NULL){
        tmp = tmp->next;
        if(tmp == NULL){
            cout<<"Invalid index!"<<endl;
        }
    }
    tmp->next = newNode;
}
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
int main()
{
    Node* head = NULL;
    while(true){
        int v; cin>>v;
        if(v==-1) break;
        insert_at_tail(head, v);
    }
    int cnt = size(head);

    cout<<cnt<<endl;
    return 0;
}