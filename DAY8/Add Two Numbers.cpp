class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *sentinel = new ListNode(0);
        ListNode *dummyHead = sentinel;
        int carry = 0;
        
        while (l1 or l2 or carry) {
            int val1 = l1 ? l1->val : 0;
            int val2 = l2 ? l2->val : 0; 
            int sum = val1 + val2 + carry;
            carry = sum / 10;
            
            sentinel->next = new ListNode(sum % 10);
            
            sentinel = sentinel->next;
            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;
        }
        
        auto head = dummyHead->next;
        delete dummyHead; dummyHead = NULL;
        
        return head;
    }
};
