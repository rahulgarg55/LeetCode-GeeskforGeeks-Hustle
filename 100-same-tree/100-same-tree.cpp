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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == NULL && q == NULL)
        return true;
    // If any one of the tree is non-empty
    // and other is empty, return false
    else if (p == NULL || q == NULL)
        return false;
    else { // Check if current data of both trees equal
        // and recursively check for left and right subtrees
        if (p->val == q->val && isSameTree(p->left, q->left)
            && isSameTree(p->right, q->right))
            return true;
    else
            return false;
        
    }
    }
};