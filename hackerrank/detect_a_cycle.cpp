// link - https://www.hackerrank.com/challenges/ctci-linked-list-cycle/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=linked-lists

bool has_cycle(Node* head) {
    // Complete this function
    // Do not write the main method
    Node* slow = head;
    Node* fast = head;
    
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            return true;
        }
    }
    return false;
}