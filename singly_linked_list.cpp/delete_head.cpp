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
    // making new node using the node to be inserted at tail
    Node* newNode = new Node(v);
    //if there is no node at first, need to insert it tail
    if(head == NULL){
        head = newNode;
        cout<<endl<<"Inserted at head!"<<endl<<endl;
        return;
    }
    //saving head in temp sothat it didn't get lost
    Node *temp = head;
    // now checking if last element next is null
    while(temp->next != NULL){
        //traversing till last node
        temp = temp->next;
    }
    //temp is now at last node
    temp->next=newNode;
    cout<<endl<<"Inserted at tail!"<<endl<<endl;
}
void insert_at_any_position(Node* head, int v, int pos){

    Node* newNode = new Node(v);
    Node* tmp = head;
    for(int i=1; i<=pos-1; i++){
        tmp = tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next = newNode;
    cout<<endl<<"Inserted at position: "<<pos<<endl<<endl;
}
void insert_at_head(Node* &head, int v){
    Node* newNode = new Node(v);
    newNode->next = head;
    head = newNode;
    cout<<endl<<"Inserted at head!"<<endl<<endl;
}
void delete_from_position(Node* head, int pos){
    Node* tmp = head;
    for(int i=1; i<=pos-1; i++){
        tmp = tmp->next;
    }
    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}
void delete_from_head(Node* &head){
    Node* deleteNode = head;
    Node* tmp = head;
    head = tmp->next;
    delete deleteNode;
}
void print_linked_list(Node* head){
    cout<<"Your linked list: ";
    Node* tmp = head;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
int main()
{
    Node* head = NULL;
    while(true){
        cout<<"Option - 1: Insert at tail: "<<endl;
        cout<<"Option - 2: Insert at any position: "<<endl;
        cout<<"Option - 3: Print linked list: "<<endl;
        cout<<"Option - 4: Insert at head: "<<endl;
        cout<<"Option - 5: Delete from any position: "<<endl;
        cout<<"Option - 6: Delete from head: "<<endl;
        cout<<"Option - 7: Terminate!"<<endl;
        int op; cin>>op;
        if(op==1){
            int v; cin>>v;
            insert_at_tail(head, v);
        }
        else if(op==2){
            int pos; 
            cout<<"Enter position: ";
            cin>>pos;
            int v; 
            cout<<"Enter value: ";
            cin>>v;
            if(pos==0){
                insert_at_head(head, v);
            }
            else{
                insert_at_any_position(head, v, pos);
            }
        }
        else if (op==3){
            print_linked_list(head);
        }
        else if (op==4){
            int v; cin>>v;
            insert_at_head(head, v);
        }
        else if (op==5){
            int pos; 
            cout<<endl<<"Enter position: ";
            cin>>pos;
            if(pos == 0){
                delete_from_head(head);
            }
            else{
                delete_from_position(head, pos);
            }
        }
        else if (op==6){
            delete_from_head(head);
        }
        else if (op==7){
            break;
        }
        
    }
    return 0;
}