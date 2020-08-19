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
  /*  ListNode* middleNode(ListNode* head) {
        ListNode* ptr=head;
        if(head==NULL){
            return head;
        }
        int c=0;
        while(ptr!=NULL){
            c++;
            ptr=ptr->next;
        }
        ptr=head;
        if(c%2==0){
            c=(c+1)/2;
        }
        else{
            c=c/2;
        }
        while(c!=0){
            c--;
            ptr=ptr->next;
        }
        return ptr;
    }*/
     ListNode* middleNode(ListNode* head) {
          if(head==NULL){
            return head;
        }
          if(head->next==NULL){
            return head;
        }
        ListNode* fast=head;
        ListNode* slow=head;
         while(fast->next!=NULL){
             fast=fast->next;
             if(fast->next!=NULL)
                 fast=fast->next;
             slow=slow->next;

         }
         return slow;
     
    }
};
