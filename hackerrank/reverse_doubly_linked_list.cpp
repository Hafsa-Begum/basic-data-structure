link - https://www.hackerrank.com/challenges/reverse-a-doubly-linked-list/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=linked-lists

DoublyLinkedListNode* reverse(DoublyLinkedListNode* &head, DoublyLinkedListNode* &tail) {
    DoublyLinkedListNode* i = head;
    DoublyLinkedListNode* j = tail;
    while (i!=j && i->next != j) {
    cout<<"79 "<<i->data<<endl;
        swap(i->data, j->data);
        i = i->next;
        j = j->prev;
    }
    swap(i->data, j->data);
    cout<<"84 "<<head->data<<endl;
    return head;
}