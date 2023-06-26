// link - https://www.hackerrank.com/challenges/find-the-merge-point-of-two-joined-linked-lists/problem?isFullScreen=true

int findMergeNode(SinglyLinkedListNode* &head1, SinglyLinkedListNode* &head2) {
    SinglyLinkedListNode* tmp = head1;
    SinglyLinkedListNode* tmp2 = head2;
    
    while(tmp != tmp2){
        if(tmp == NULL){
            tmp = head2;
        }
        else if(tmp2 == NULL){
            tmp2 = head1;
        }
        else{
            tmp = tmp->next;
            tmp2 = tmp2->next;
        }
    }
    
    return tmp->data;
}