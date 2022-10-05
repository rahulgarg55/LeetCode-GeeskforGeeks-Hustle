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
       void addRow(TreeNode* parent, int v, int dep){
        // If node is NULL the do nothing
        if(!parent)
            return;

        // If we have reached depth d-1 i.e. dep=1
        if(dep==1){
            TreeNode *temp;

            // Store left ptr
            temp = parent->left; 
            // Replace left ptr with new node with value v
            parent->left = new TreeNode(v);
            // Set stored left pointer as new node's left ptr
            parent->left->left = temp;

            // Store right ptr
            temp = parent->right;
            // Replace right ptr with new node with value v
            parent->right = new TreeNode(v);
            // Set stored right pointer as new node's right ptr
            parent->right->right = temp;
        }
        // Else go deeper
        else{
            addRow(parent->left, v, dep-1);
            addRow(parent->right, v, dep-1);
        }
       }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
         // If need to add the row on root
        if(depth==1){
            // Just create a new node with value v 
            // and current root as left child
            TreeNode *ptr = new TreeNode(val, root, nullptr);
            return ptr;
        }

        // Traverse down to the parent node at depth d-1
        // to add row at depth d(>1)
        addRow(root, val, depth-1);

        // Return same pointer root with modified tree
        return root;
        
    }
};