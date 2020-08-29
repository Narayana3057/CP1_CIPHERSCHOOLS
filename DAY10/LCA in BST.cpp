/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL){
            return NULL;
        }
        TreeNode* node=root;
        int p_val=p->val;
        int q_val=q->val;
        while(node!=NULL){
            if(p_val < node->val && q_val < node->val){
                node=node->left;
            }
            else if(p_val > node->val && q_val > node->val){
                node=node->right;
            }
            else{
                return node;
            }
        }
        return node;
    }
};
