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
    void check_path(TreeNode *root,vector<int>&v,int& count){
        if(!root)return;
        v[root->val]++; //no of occurences
        check_path(root->left,v,count);
        check_path(root->right,v,count);
        if(!root->left &&!root->right){ //reached leaf node
            int flag=0; 
            for(int i=1;i<10;i++){ //traversing freq array
                if(v[i]%2!=0)flag++;
            }
            if(flag==1 || flag==0)count++;
        }
        v[root->val]--;
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        int count=0;
        vector<int>v(10,0);
      check_path(root,v,count);
        
        return count;
    }
    
    
};