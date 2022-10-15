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
    int minDepth(TreeNode* root) {
        if(root==NULL)return 0;
        if(root->left==NULL and root->right==NULL)return 1; //only deptth is root node whem it is only presemt there
        if(root->left==NULL)return 1+minDepth(root->right);//1 bcz of root node
                if(root->right==NULL)return 1+minDepth(root->left);
        return 1+min(minDepth(root->left),minDepth(root->right));

    }
};