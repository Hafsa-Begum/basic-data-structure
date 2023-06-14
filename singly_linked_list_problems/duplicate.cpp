// Question: Take a singly linked list as input and check if the linked list contains any duplicate value.
//  You can assume that the maximum value will be 100.

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
    }
    tmp->next = newNode;
}
void print_linked_list(Node* head){
    int flag = 0;
    Node* tmp = head;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp= tmp->next;
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
    bool flag = false;
    for(Node* i =head; i->next!=NULL; i=i->next){
        for(Node* j =i->next; j!=NULL; j=j->next){
            if(i->val == j->val){
                flag = true;
            }
        }
    }
    if(flag == true){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    // print_linked_list(head);
    return 0;
}