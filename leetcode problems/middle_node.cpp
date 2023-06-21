// https://leetcode.com/problems/middle-of-the-linked-list/description/

// one way
class Solution {
public:
    int size(ListNode* head){
        ListNode* tmp = head;
        int cnt = 0;
        while(tmp != NULL){
            cnt++;
            tmp = tmp->next;
        }
        return cnt;
    }
    ListNode* middleNode(ListNode* head) {
        ListNode* tmp = head;
        int sz = size(head);
        for(int i=1; i<=sz/2; i++){
            tmp = tmp->next;
        }
        return tmp;
    }
};

// another way
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};