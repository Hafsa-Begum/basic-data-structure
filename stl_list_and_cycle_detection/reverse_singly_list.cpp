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
void print_list(Node* head){
    Node* tmp = head;
    while (tmp != NULL)
    {
       cout<<tmp->val<<" ";
       tmp = tmp->next;
    }
    cout<<endl;
}
void reverse_list(Node* &head, Node* current){
    if(current->next == NULL){
        head = current;
        return;
    }
    reverse_list(head, current->next);
    current->next->next = current;
    current->next = NULL;
}
int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);

    head->next = a;
    a->next = b;

    reverse_list(head, head);
    print_list(head);
    return 0;
}