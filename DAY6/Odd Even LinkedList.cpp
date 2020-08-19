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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL)
            return NULL;
        
        ListNode* t1,*t2,*h1,*h2;
        
        h1 = head;
        h2 = head->next;
        
        if(h2 == NULL)
            return h1;
        
        t1 = h1;
        t2 = h2;
        
        ListNode* last = NULL;
        
        while(t1 && t2){
            t1->next = t2->next; 
            if(t1->next == NULL)
                last = t1;
            
            t1 = t1->next;
            if(t1){
                
                t2->next = t1->next;
                t2 = t2->next;
            }
        }
        
        
        if(last == NULL)
            t1->next = h2;
        else
            last->next = h2;
        
        return h1;
    }
};
