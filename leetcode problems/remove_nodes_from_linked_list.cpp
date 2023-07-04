// link - https://leetcode.com/problems/remove-nodes-from-linked-list/

class Solution {
public:
    void insert_at_tail(ListNode* &head, ListNode* &tail, int v){
        ListNode* newNode = new ListNode(v);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }
    ListNode* removeNodes(ListNode* &head) {
        ListNode* cur = head;
        ListNode* tmp = head;
        ListNode* newHead = NULL;
        ListNode* newTail = NULL;

        while(tmp != NULL){
            if(tmp->val < cur->val){
                if(tmp->next == NULL) 
                {
                    head= NULL;
                    break;
                }
                else{
                    head = tmp->next;
                }
            }
            else if(tmp->val > cur->val){
                    insert_at_tail(newHead, newTail, tmp->val); 
            }
            tmp = tmp->next;
        }
        return newHead;
    }
};