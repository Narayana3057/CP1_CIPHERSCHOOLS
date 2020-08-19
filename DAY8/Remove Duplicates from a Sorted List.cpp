class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* cur = head;
        while(cur) {
            while(cur->next && cur->next->val == cur->val)
                cur->next = cur->next->next;
            cur = cur->next;
        }
        return head;
    }
};
