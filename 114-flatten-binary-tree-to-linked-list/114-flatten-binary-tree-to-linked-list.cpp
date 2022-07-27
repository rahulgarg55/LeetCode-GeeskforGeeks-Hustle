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
    void flatten(TreeNode* root) {
        if (root == NULL || root->left == NULL && root->right == NULL)
        return;
    // if root->left exists then we have to make it
    // root->right
    if (root->left != NULL) {
        // move left recursively
        flatten(root->left);
        // store the node root->right
     TreeNode* tmpRight = root->right;
        root->right = root->left;
        root->left = NULL;
        // find the position to insert the stored value
       TreeNode* t = root->right;
        while (t->right != NULL) 
            t = t->right;
        // insert the stored value
        t->right = tmpRight;
    }
    // now call the same function for root->right
    flatten(root->right);

  

}
    
};