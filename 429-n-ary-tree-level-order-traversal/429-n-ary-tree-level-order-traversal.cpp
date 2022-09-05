/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(root==NULL)return {};
        vector<vector<int>>ans;
        queue<Node *>q{{root}};
        int level=0;
        while(!q.empty()){
            vector<int>currlevel;
            for(int i=q.size();i>0;i--){
                Node *node=q.front();
                q.pop();
                currlevel.push_back(node->val);
                for(Node * child:node->children)
                    q.push(child);
                
            }
            ans.push_back(currlevel);
        }
        return ans;
    }
};