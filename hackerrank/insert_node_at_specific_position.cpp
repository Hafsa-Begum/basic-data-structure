link - https://www.hackerrank.com/challenges/insert-a-node-at-a-specific-position-in-a-linked-list/problem?h_l=interview&isFullScreen=true&playlist_slugs%5B%5D%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D%5B%5D=linked-lists

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* &head, int data, int position) {
    SinglyLinkedListNode* newNode = new SinglyLinkedListNode(data);
    if(head == NULL){
        head = newNode;
    }
    else{
        SinglyLinkedListNode* tmp = head;
        for(int i = 1; i<=position-1; i++){
            tmp = tmp->next;
        }
        if(tmp->next != NULL){
            newNode->next = tmp->next;
            tmp->next = newNode;
        }else{
            tmp->next = newNode;
        }
    }

    return head;
}