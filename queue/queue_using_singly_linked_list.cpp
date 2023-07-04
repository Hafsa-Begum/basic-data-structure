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

class myQueue{
    public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;

    void push(int v){
        sz++;
        Node* newNode = new Node(v);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void pop(){
        sz--;
        Node* deleteNode = head;
        head = head->next;
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
    q.push(20);
    q.push(10);
    q.pop();
    q.pop();
    q.push(30);
    cout<<q.front()<<endl;
    return 0;
}