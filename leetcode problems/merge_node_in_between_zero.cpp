// link - https://leetcode.com/problems/merge-nodes-in-between-zeros/description/
class Solution {
public:
    void insert_at_tail(ListNode* &head, ListNode* &tail, int val){
        ListNode* newNode = new ListNode(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }
    ListNode* mergeNodes(ListNode* head) {
        ListNode* tmp = head->next;
        ListNode* head1 = NULL;
        ListNode* tail = NULL;

            int sum = 0;
        while(tmp != NULL ){
            sum = sum + tmp->val;
            if(tmp->val == 0) {
                insert_at_tail(head1, tail, sum);
                sum = 0;
            }
            tmp = tmp->next;
        }
        return head1;
    }
};