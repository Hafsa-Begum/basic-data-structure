// Question: Take a singly linked list as input and check 
// if the linked list is sorted in ascending order.

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
bool check_if_sorted(Node* head){
    Node* tmp = head;
    while(tmp != NULL && tmp->next != NULL){
        if(tmp->val > tmp->next->val){
            return false;
        }
        tmp = tmp->next;
    }
    return true;
}
void insert_at_tail(Node* &head, int v){
    Node* newNode = new Node(v);
    if(head==NULL){
        head = newNode;
        return;
    }
    Node* tmp = head;

    while (tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = newNode;
    
}
void print_linked_list(Node* head){
    cout<<"Linked list: ";
    Node* tmp = head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    
}
int main()
{
    Node* head = NULL;
    
    while(true){
        int v; cin>>v;
        if(v==-1) break;
        insert_at_tail(head, v);
    }
    print_linked_list(head);
    bool val = check_if_sorted(head);
    if(val==true){
        cout<<endl<<"YES"<<endl;
    }
    else{
        cout<<endl<<"NO"<<endl;
    }
    return 0;
}