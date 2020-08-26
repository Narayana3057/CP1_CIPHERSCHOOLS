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
    pair<int,int> getData(TreeNode* root,int val,int level,int parent){
        if(root==NULL){
            return {0,0};
        }
        if(root->val==val){
            return {level,parent};
        }
        pair<int,int> d1=getData(root->left,val,level+1,root->val);
        if(d1.first!=0){
            return d1;
        }
        d1=getData(root->right,val,level+1,root->val);
        return d1;
        
    }
    bool isCousins(TreeNode* root, int x, int y) {
        pair<int,int> node1=getData(root,x,1,-1);
        pair<int,int> node2=getData(root,y,1,-1);
        if(node1.first==node2.first && node1.second!=node2.second){
            return true;
        }
        return false;
        
    }
};
