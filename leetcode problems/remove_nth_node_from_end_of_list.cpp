// link - https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/
class Solution {
public:
    int size(ListNode* head){
        ListNode* tmp = head;
        int cnt = 0;
        while(tmp!=NULL){
            cnt++;
            tmp=tmp->next;
        }
        return cnt;
    }
    void delete_head(ListNode* &head){
        ListNode* deleteNode = head;
        ListNode* tmp = head;
        head = tmp->next;
        delete deleteNode;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* tmp = head;
        int pos = size(head) - n;
        if(pos == 0){
            delete_head(head);
            return head;
        }
        for(int i=1; i<=pos-1; i++){
            tmp = tmp->next;
        }
        ListNode* deleteNode = tmp->next;
        tmp->next = tmp->next->next;
        delete deleteNode;
        return head;
    }
};