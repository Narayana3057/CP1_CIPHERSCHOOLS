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
    int preorder(TreeNode *root,int &mx)
    {
       if(root==NULL)
           return 0;
        int left,right;
       left= preorder(root->left,mx);
        right=preorder(root->right,mx);
        mx=max(mx,(left+right));
        return (max(left,right)+1);
    }
    int diameterOfBinaryTree(TreeNode* root) 
    {
        if(root==NULL)
            return 0;
        int ld,mx=0;
        ld=preorder(root,mx);
        return mx;
    }
};
