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
    vector<int> inhelp(TreeNode* root,vector<int>& ans){
      
     if(root){
        inhelp(root->left,ans);
        ans.push_back(root->val);
        inhelp(root->right,ans);
       } 
        return ans;
    } 
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        inhelp(root,ans);
        return ans;
        
    }
};
