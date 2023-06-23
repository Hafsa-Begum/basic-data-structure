// link - https://leetcode.com/problems/swapping-nodes-in-a-linked-list/description/
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
    ListNode* swapNodes(ListNode* head, int k) {
        int pos1 = k;
        int pos2 = size(head) - k + 1;
        ListNode* tmp = head;
        for(int i = 1; i<=pos1-1; i++){
            tmp = tmp->next;
        }
        ListNode* tmp_at_pos_1 = tmp;
        cout<<tmp_at_pos_1->val<<endl;
        tmp = head;
        for(int i = 1; i<=pos2-1; i++){
            tmp = tmp->next;
        }
        ListNode* tmp_at_pos_2 = tmp;
        cout<<tmp_at_pos_2->val<<endl;
        swap(tmp_at_pos_1->val, tmp_at_pos_2->val);
        return head;
    }
};