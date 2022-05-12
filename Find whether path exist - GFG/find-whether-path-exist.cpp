// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
   bool dfs(vector<vector<int>>& grid,int x,int y){
       if(x<0 || y<0 ||x>=grid.size()||y>=grid.size() || grid[x][y]==0)
       return false;
       if(grid[x][y]==2)return true;
       grid[x][y]=0;
       return dfs(grid,x+1,y)||dfs(grid,x-1,y)||dfs(grid,x,y+1)||dfs(grid,x,y-1);
   }
    //Function to find whether a path exists from the source to destination.
    bool is_Possible(vector<vector<int>>& grid) 
    {
        //code here
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                if(grid[i][j]==1)return dfs(grid,i,j);
            }
        }
        return false;
        
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		bool ans = obj.is_Possible(grid);
		cout << ((ans) ? "1\n" : "0\n");
	}
	return 0;
}  // } Driver Code Ends