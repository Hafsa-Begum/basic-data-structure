// link - https://www.hackerrank.com/challenges/insert-a-node-into-a-sorted-doubly-linked-list/problem?h_l=interview&isFullScreen=true&playlist_slugs%5B%5D%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D%5B%5D=linked-lists

DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* &head, DoublyLinkedListNode* &tail, int data) {
    DoublyLinkedListNode* newNode = new DoublyLinkedListNode(data);
    
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return head;
    }
    
    else{
        if(head->next != NULL){
            for(DoublyLinkedListNode* i = head; i->next!=NULL; i++){
                for(DoublyLinkedListNode* j = i->next; j!=NULL; j++){
                    if(i->data > j->data){
                        swap(i->data, j->data);
                    }
                }
            }
        }
        DoublyLinkedListNode* tmp = head;
        while (tmp != NULL) {
            if(tmp->data >= newNode->data && tmp->prev != NULL){
                cout<<"line-107 "<<tmp->data<<endl;
                newNode->next = tmp;
                tmp->prev->next = newNode;
                newNode->prev = tmp->prev;
                tmp->prev = newNode;
                break;
            }
            else if(tmp->data >= newNode->data && tmp->prev == NULL){
                cout<<"line-116 "<<tmp->data<<endl;
                newNode->next = tmp;
                tmp->prev = newNode;
                head = newNode;
                break;
            }
            else if(tmp->data <= newNode->data && tmp->next == NULL){
                tmp->next = newNode;
                newNode->prev = tmp;
                tail = newNode;
                break;
            }
            else{
                tmp = tmp->next;
            }
        }
    
    }
    return head;
}