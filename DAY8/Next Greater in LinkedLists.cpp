/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };*/
 class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        struct ListNode* temp=head;
       struct ListNode* s=head->next;
      vector<int> answer;
    
      while(temp->next!=NULL){
         
         if(temp->val < s->val){
           answer.push_back(s->val);
           temp=temp->next;
           s=temp->next;
           continue;
         }
        if(temp->val >= s->val){
            if(s!=NULL){
              s=s->next;
            }
          if(s==NULL){
            answer.push_back(0);
            s=temp->next->next;
            temp=temp->next;
          }
          continue;
        }
        
      }
	  
      answer.push_back(0);
     return answer;
    }
};
