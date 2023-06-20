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
int size(Node* head){
    Node* tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void check_if_same(Node* head1, Node* head2){
    Node* tmp1 = head1;
    Node* tmp2 = head2;
    if(size(head1) != size(head2)){
        cout<<"NO"<<endl;
        return;
    }
    bool flag = true;
    while (tmp1 != NULL && tmp2 != NULL)
    {
        if(tmp1->val != tmp2->val){
            flag = false;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
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

void print_list(Node* head){
    Node* tmp = head;
    if(tmp == NULL) return;
    cout<<tmp->val<<" ";
    print_list(tmp->next);
}
int main()
{
    Node* head1 = NULL;
    Node* tail1 = NULL;
    Node* head2 = NULL;
    Node* tail2 = NULL;
    int v1, v2;

    while (true)
    {
        cin>>v1;
        if(v1==-1) break;
        insert_at_tail(head1, tail1, v1);
    }

    while (true)
    {
        cin>>v2;
        if(v2==-1) break;
        insert_at_tail(head2, tail2, v2);
    }
    check_if_same(head1, head2);
    // print_list(head1);
    // cout<<endl;
    // print_list(head2);
    return 0;
}