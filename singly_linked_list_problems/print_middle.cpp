// Question: Take a singly linked list as input and print the middle element.
//  If there are multiple values in the middle print both.

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
void print_middle(Node* head, int length){
    Node* tmp = head;
    int mid, mid1, mid2;
    if(length%2==0){
        mid1 = length/2;
        mid2=length/2+1;
        for(int i=1; i<=mid1; i++){
            tmp= tmp->next;
        }
        cout<<tmp->val<<" "<<tmp->next->val<<endl;
    }
    else{
        mid=length/2;
        for(int i=1; i<=mid; i++){
            tmp= tmp->next;
        }
        cout<<tmp->val<<endl;
    }
}
int main()
{
    Node* head = NULL;
    int length = 0;
    while(true){
        int v; cin>>v;
        if(v==-1) break;
        length++;
        insert_at_tail(head, v);
    }
    print_middle(head, length);
    // print_linked_list(head);
    return 0;
}