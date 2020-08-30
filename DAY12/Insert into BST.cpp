/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* insertHelper(TreeNode* root,TreeNode* cur){
        if(root->val > cur->val && root->left) insertHelper(root->left,cur);
         if(root->val < cur->val && root->right) insertHelper(root->right,cur);
         if(root->val > cur->val && !root->left) root->left=cur;
        if(root->val < cur->val && !root->right) root->right=cur;
        return root;
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* cur_node=new TreeNode(val);
        if(root==NULL){
            return cur_node;
        }
        return insertHelper(root,cur_node);
    }
};
