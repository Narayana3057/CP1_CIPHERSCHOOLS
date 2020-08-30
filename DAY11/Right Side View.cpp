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
    int max_level=-1;
     vector<int> v;
    void rightSide(TreeNode* root,int level){
        if(root==NULL){
            return;
        }
        if(max_level<level){
            v.push_back(root->val);
            max_level=level;
        }
        rightSide(root->right,level+1);
        rightSide(root->left,level+1);
    
    }
    vector<int> rightSideView(TreeNode* root) {
        
        rightSide(root,0);
        return v;
    }
};
