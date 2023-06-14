// Question: Take two singly linked lists as input and check if their sizes are same or not.

// Sample Input
// Sample Output
// 2 1 5 3 4 9 -1
// 1 2 3 4 5 6 -1
// YES
// 5 1 4 5 -1
// 5 1 4 -1
// NO

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
int size(Node* head){
    Node* tmp = head;
    int cnt = 0;
    while(tmp != NULL){
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void insert_at_tail(Node* &head, Node* &tail, int v){
    Node* newNode = new Node(v);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
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
        if(v1 == -1) break;
        insert_at_tail(head1, tail1, v1);
    }
    while (true)
    {
        cin>>v2;
        if(v2==-1) break;
        insert_at_tail(head2, tail2, v2);
    }
    int size_of_list_1 = size(head1);
    int size_of_list_2 = size(head2);
    if(size_of_list_1 == size_of_list_2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    return 0;
}