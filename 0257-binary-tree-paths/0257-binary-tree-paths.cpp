class Solution {
public:
    void path(TreeNode* node,string curpath,vector<string>&res){
        if(node==NULL)return;
        if(node->left==NULL && node->right==NULL){
            res.push_back(curpath+to_string(node->val));
            return;
        }
        path(node->left,curpath+to_string(node->val)+"->",res);
        path(node->right,curpath+to_string(node->val)+"->",res);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>res;
        path(root,"",res);
        return res;
        
    }
};