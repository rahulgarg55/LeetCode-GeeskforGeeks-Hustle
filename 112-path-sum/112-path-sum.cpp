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
   void solve(TreeNode*root,int targetSum,vector<int>path,int currsum,bool&ans){
        if(!root) return;
        currsum+=root->val;
        if(currsum==targetSum && root->left==NULL && root->right==NULL){
            ans=true;
        }
        solve(root->left,targetSum,path,currsum,ans);
        solve(root->right,targetSum,path,currsum,ans);
        
    }
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        bool ans=0;
        vector<int>path;
        solve(root,targetSum,path,0,ans);
        return ans;
        
    }
};