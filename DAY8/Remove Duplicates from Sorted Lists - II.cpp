/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
     ListNode* deleteDuplicates(ListNode* head) {       
        if (head == nullptr || head -> next == nullptr) 
            return head;
        ListNode dummy(0, head);
        ListNode* prev = &dummy;
        ListNode* iter = head;
		/// Keep  count if there are duplicates 
        int count = 0;

        while (iter != nullptr) {
            auto next_node = iter->next;
            while (next_node != nullptr && next_node->val == iter->val) {
                auto temp = next_node;
                next_node = next_node->next;
                delete temp;
                count++;
            }
            // as you iterate if you see the count is more than one 
			// the iterator needs to ne deleted 

            if (count > 0) {
                auto temp = iter;
                iter->next = next_node;
                iter = next_node;
                prev->next = iter;
                delete temp;
                count = 0;
            } else {
                prev = iter;
                iter->next = next_node;
                iter = next_node;
            }
        }
        return dummy.next;
    }
};
