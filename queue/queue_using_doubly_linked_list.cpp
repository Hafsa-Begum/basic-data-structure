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

class myQueue{
    public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;

    void push(int v){
        sz++;
        Node* newNode = new Node(v);
        if(head==NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    void pop(){
        sz--;
        Node* deleteNode = head;
        head = head->next;
        if(head == NULL){
            tail = NULL;
            delete deleteNode;
            return;
        }
        head->prev = NULL;
        delete deleteNode;
    }

    int front(){
        return head->val;
    }

    int size(){
        return sz;
    }

    bool isEmpty(){
        if(sz == 0) return true;
        else return false;
    }

};

int main()
{
    myQueue q;
    q.push(100);
    q.pop();
    q.push(200);
    cout<<q.front()<<endl;
    return 0;
}