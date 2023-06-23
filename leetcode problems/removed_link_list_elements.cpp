// link - https://leetcode.com/problems/remove-linked-list-elements/
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while(head!=NULL and head->val == val){
            head = head->next;
        }

        ListNode* tmp = head;

        while(tmp != NULL && tmp->next!=NULL){
            if(tmp->next->val == val){
                tmp->next = tmp->next->next;
            }
            else{
                tmp = tmp->next;
            }
        }
        
        return head;
    }
};