class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {   
        if (head == NULL) // If the list is empty
            return head;
        
        ListNode *itr = head, *fwd, *new_head;
        int len = 0, kFront, ctr=0;
        while (itr != NULL) { // To get the length of the list
            itr = itr->next;
            len++;
        }
        
        k = k%len; // To avoid unnecessary rotations
        
        if (k == 0) // If no rotation is needed
            return head;
        
        kFront = len - (k+1);
        itr = head;
        while (ctr < kFront) { // Iterate to element before the K th rotation 
            itr = itr->next;
            ctr++;
        }
        
        new_head = itr->next; 
        itr->next = NULL; // Setting the next of node before k th rotation to NULL
        fwd = new_head;
        
        while (fwd->next) {
            fwd = fwd->next;
        }
        fwd->next = head;
        
        return new_head;        
    }
};
