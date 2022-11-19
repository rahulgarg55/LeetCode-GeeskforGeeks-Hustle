class Solution {
public:
    vector<vector<int>> outerTrees(vector<vector<int>>& trees) {

        if(trees.size()<4){ // If three or less point then every point must be included
            return trees;
        }
        sort(trees.begin(),trees.end());
        vector<vector<int>> res;
        // upward points
        for(vector<int> tree : trees){
            if(res.size()<2){
                res.push_back(tree);
                continue;
            }
            while(res.size()>1){
                int x1 = res[res.size()-2][0];
                int y1 = res[res.size()-2][1];
                int x2 = tree[0], y2 = tree[1];
                int x = res[res.size()-1][0];
                int y = res[res.size()-1][1];
                int a = y1-y2;
                int b = x2-x1;
                int c = x1*y2-y1*x2;
                if((x1==x && x==x2) || (y1==y && y==y2)){// x or y cordinate of three points are same.
                    break;
                }
                
                if((a*x+b*y+c<0 && b>0) || (a*x+b*y+c>0 && b<0)){// the last point is below the new line
                    res.pop_back();
                }else{
                    break;
                }
            }
            res.push_back(tree);
        }
        if(res.size()==trees.size()){
            return res;
        }
        // downward points
        vector<vector<int>> downWard;
        for(auto i = trees.rbegin();i!=trees.rend();i++){
            vector<int> tree;
            for(auto j = i->begin() ; j<i->end() ; j++){
                tree.push_back(*j);
            }
            if(downWard.size()<2){
                downWard.push_back(tree);
                continue;
            }
            
            while(downWard.size()>1){
                int x1 = downWard[downWard.size()-2][0];
                int y1 = downWard[downWard.size()-2][1];
                int x2 = tree[0], y2 = tree[1];
                int x = downWard[downWard.size()-1][0];
                int y = downWard[downWard.size()-1][1];
                int a = y1-y2;
                int b = x2-x1;
                int c = x1*y2-y1*x2;
                if((x1==x && x==x2) || (y1==y && y==y2)){
                    break;
                }
                
                if((a*x+b*y+c<0 && b<0) || (a*x+b*y+c>0 && b>0)){
                    downWard.pop_back();
                }else{
                    break;
                }
            }
            downWard.push_back(tree);
        }
        for(int i=1;i<downWard.size()-1;i++){
            res.push_back(downWard[i]);
        }
        return res;
    }
};