class Solution {
public:
   int dir[4][2]={{0,-1},{-1,0},{0,1},{1,0}};
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int m=maze.size(),n=maze[0].size();
        int moves=1;
        queue<pair<int,int>>q;
        q.push({entrance[0],entrance[1]});
        while(!q.empty()){
            int sz=q.size();
            while(sz--){
                auto curr=q.front();
                q.pop();
                for(auto it:dir){
                    int x=curr.first+it[0],y=curr.second+it[1];
                    if(x>=0 &&x<m &&y>=0 &&y<n && maze[x][y]!='+'){
                        if(x==0||x==m-1||y==0||y==n-1)
                        {
                            if(!(x==entrance[0]&& y==entrance[1]))
                            return moves;
                        }
                        q.push({x,y});
                        maze[x][y]='+';
                    }
                }
                
            }
            moves++;
        }
        return -1;
    }
};