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
    int cnt = 0;

    void push(int val){
        cnt++;
        Node* newNode = new Node(val);
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
        cnt--;
        if(head == tail){
            head = NULL;
            tail = NULL;
            return;
        }
        tail->prev->next = NULL;
        tail = tail->prev;
    }
    int top(){
        return tail->val;
    }
    int size(){
        return cnt;
    }
    bool isEmpty(){
        if(cnt == 0) return true;
        else return false;
    }
};

int main()
{
    myStack st;
    int i=0, n;
    cin>>n;
    while (i<n)
    {
        int x; cin>>x;
        st.push(x);
        i++;
    }
    
    while (!st.isEmpty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    
    return 0;
}

// time-complexity- O(1) for all operations like push, pop, top, size, isEmpty 