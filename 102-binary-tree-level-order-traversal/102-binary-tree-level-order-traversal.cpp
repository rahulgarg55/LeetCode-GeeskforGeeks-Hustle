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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (!root) return ans;
        deque<TreeNode*> queue;
        queue.push_back(root);
        while (!queue.empty()) {
            int qlen = queue.size();
            vector<int> row;
            for (int i = 0; i < qlen; i++) {
                TreeNode* curr = queue.front();
                queue.pop_front();
                row.push_back(curr->val);
                if (curr->left) queue.push_back(curr->left);
                if (curr->right) queue.push_back(curr->right);
            }
            ans.push_back(row);
        }
        return ans;
    }
};