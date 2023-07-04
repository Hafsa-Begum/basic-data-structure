link - https://leetcode.com/problems/merge-two-sorted-lists/description/

class Solution {
public:
    void insert_at_tail(ListNode* list1, int val){
        ListNode* newNode = new ListNode(val);
        ListNode* tmp = list1;
        while(tmp->next != NULL){
            tmp = tmp->next;
        }
        tmp->next = newNode;
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL && list2 == NULL){
            return list1;
        }
        else if(list1 != NULL && list2 == NULL) {
            return list1;
        }
        else if(list1 == NULL && list2 != NULL) {
            return list2;
        }
        else{
            ListNode* tmp2 = list2;
            while(tmp2 != NULL){
                insert_at_tail(list1, tmp2->val);
                tmp2 = tmp2->next;
            }

            //sorting
            for(ListNode* i = list1; i->next != NULL; i= i->next){
                for(ListNode* j = i->next; j != NULL; j= j->next){
                    if(i->val>j->val){
                        swap(i->val, j->val);
                    }
                }
            }
            return list1;
        }       
    }
};