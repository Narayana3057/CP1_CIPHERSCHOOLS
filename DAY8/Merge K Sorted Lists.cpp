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
      ListNode *sortedmerge(ListNode*a,ListNode* b)
    {
        ListNode *result=NULL;
        if(a==NULL)
            return (b);
        if(b==NULL)
            return (a);
        if(a->val<=b->val)
        {
            result=a;
            result->next=sortedmerge(a->next,b);
        }
        else
        {
            result=b;
            result->next=sortedmerge(a,b->next);
        }
        return result;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0)return {};
        int n=lists.size()-1;
        while(n>0)
        {
            int i=0,j=n;
            while(i<j)
            {
                lists[i]=sortedmerge(lists[i],lists[j]);
                i++;j--;
                if(i>=j)
                    n=j;
            }
        }
        return lists[0];
    }
};
