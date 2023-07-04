// Question: Take two stacks of size N and M as input
// and check if both of them are the same or not. 
// Don’t use STL to solve this problem.

// Sample Input

// 5
// 10 20 30 40 50
// 5
// 10 20 30 40 50

// Sample Output
// YES


// Sample Input
// 5
// 10 20 30 40 50
// 4
// 10 20 30 40

// Sample Output
// NO


// Sample Input
// 5
// 10 20 30 40 50
// 5
// 50 40 30 20 10

// Sample Output
// NO

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

class myStack{
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
        newNode->prev = tail;
        tail = newNode;
    }

    void pop(){
        sz--;
        Node* deleteNode = tail;
        if(head == tail){
            head = NULL;
            tail = NULL;
            return;
        }
        tail->prev->next = NULL;
        tail = tail->prev;
        delete deleteNode;
    }

    int top(){
        return tail->val;
    }

    int size(){
        return sz;
    }

    bool empty(){
        if(sz == 0) return true;
        else return false;
    }
};

int main()
{
    myStack st1;
    myStack st2;

    int n; cin>>n;
    while(n--){
        int x; cin>>x;
        st1.push(x);
    }
    int m; cin>>m;
    while(m--){
        int x; cin>>x;
        st2.push(x);
    }
    bool flag = true;
    if(n!=m){
        flag = false;
    }
    else{
        while(!st1.empty()){
            if(st1.top() != st2.top()){
                flag = false;
                break;
            }
            st1.pop();
            st2.pop();
        }
    }
    if(flag == true){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}
