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
    int pointer=0;
    
    int getNode(vector<int>& in,int data){
        for(int i=0;i<in.size();i++){
            if(in[i]==data){
                return i;
            }
        }
        return -1;
    }
    TreeNode* tree(vector<int>& pre,vector<int>& in, int start,int end){
        if(start>end){
            return NULL;
        }
        TreeNode* root=new TreeNode(pre[pointer++]);
        if(start==end){
            return root;
        }
        int index=getNode(in,root->val);
        root->left=tree(pre,in,start,index-1);
        root->right=tree(pre,in,index+1,end);
        return root;
    }
    TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
      return  tree(pre,in,0,in.size()-1);
    }
};
