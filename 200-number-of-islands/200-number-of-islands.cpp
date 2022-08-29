class Solution {
public:
    int solve(vector<vector<char>>& grid,int x,int y){
        if(x<0 ||x>=grid.size() ||y<0 ||y>=grid[0].size()||
           grid[x][y]=='0'){
            return 0;
        }
        grid[x][y]='0';
        
        solve(grid,x+1,y);
        solve(grid,x-1,y);
        solve(grid,x,y+1);
        solve(grid,x,y-1);
        return 1;
    }
    int numIslands(vector<vector<char>>& grid) {
        if(grid.size()==0)return 0;
        int noofislands=0;
        for(int x=0;x<grid.size();x++){
            for(int y=0;y<grid[0].size();y++){
                noofislands+=solve(grid, x, y);
            }
        }
        return noofislands;
    }
};