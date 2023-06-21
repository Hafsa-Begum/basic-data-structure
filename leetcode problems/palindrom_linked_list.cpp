// link- https://leetcode.com/problems/palindrome-linked-list/description/
class Solution {
public:
    void insert_at_tail(ListNode* &head, ListNode* &tail, int v){
        ListNode* newNode = new ListNode(v);
        if(head==NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }
    void reverse(ListNode* &head, ListNode* cur){
        if(cur->next==NULL){
            head = cur;
            return;
        }
        reverse(head, cur->next);
        cur->next->next = cur;
        cur->next = NULL;
    }
    bool isPalindrome(ListNode* head) {
     ListNode* newHead = NULL;   
     ListNode* newTail = NULL;
     ListNode* tmp = head;

     while(tmp != NULL){
         insert_at_tail(newHead, newTail, tmp->val);
         tmp = tmp->next;
     }
     reverse(newHead, newHead);
     tmp = head;
     ListNode* tmp2 = newHead;

     while(tmp != NULL){
         if(tmp->val!=tmp2->val){
             return false;
         }
         tmp = tmp->next;
         tmp2 = tmp2->next;
     }
     return true;
    }
};