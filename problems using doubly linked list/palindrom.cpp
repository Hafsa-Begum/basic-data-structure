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
void check_palindrom(Node* &head, Node* &tail){
    Node* i = head;
    Node* j = tail;
    bool flag = true;
    while(i != j && i->next != j){
        if(i->val != j->val){
            flag = false;
        }
        i = i->next;
        j = j->prev;
    }
    if(i->val != j->val){
        flag = false;
    }
    if(flag == true){
        cout<<"YES"<<endl;
        return;
    }
    else{
        cout<<"NO"<<endl;
        return;
    }
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
    check_palindrom(head, tail);
    return 0;
}