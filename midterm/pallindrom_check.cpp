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
Node* insert_at_tail(Node* &head, Node* &tail, int v){
    Node* newNode = new Node(v);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return head;
    }
    tail->next = newNode;
    tail = newNode;
    return head;
}
void reverse(Node* &head, Node* cur){
    if(cur->next == NULL){
        head = cur;
        return;
    }
    reverse(head, cur->next);
    cur->next->next = cur;
    cur->next = NULL;
    }
bool isPalindrome(Node* head) {
    Node* newHead = NULL;   
    Node* newTail = NULL;
    Node* tmp = head;

    while(tmp != NULL){
        insert_at_tail(newHead, newTail, tmp->val);
        tmp = tmp->next;
    }
    reverse(newHead, newHead);
    tmp = head;
    Node* tmp2 = newHead;

    while(tmp != NULL){
        if(tmp->val!=tmp2->val){
            return false;
        }
        tmp = tmp->next;
        tmp2 = tmp2->next;
     }
     return true;
    }
int main()
{
    // Write your code here
    Node* head = NULL;
    Node* tail = NULL;

    while(true){
        int v; cin>>v;
        if(v==-1) break;
        head = insert_at_tail(head,tail, v);
    }
    
    bool flag = isPalindrome(head);
    if(flag==true){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
