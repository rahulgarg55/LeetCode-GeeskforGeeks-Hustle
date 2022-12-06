//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find distance of nearest 1 in the grid for each cell.
	vector<vector<int>>nearest(vector<vector<int>>grid)
	{
	    // Code here
	    int m=grid.size();
	    int n=grid[0].size();
	    vector<vector<int>>ans(m,vector<int>(n,0));
	    vector<vector<int>>vis(m,vector<int>(n,0));
	    queue<pair<pair<int,int>,int>>q; //i,j,dist
	    for(int i=0;i<m;i++){
	        for(int j=0;j<n;j++){
	            if(grid[i][j]==1){
	                q.push({{i,j},0});
	                vis[i][j]=1;
	            }
	        }
	    }
	    int dx[]={1,-1,0,0};
	    int dy[]={0,0,1,-1};
	    while(!q.empty()){
	        int x=q.front().first.first;
	        int y=q.front().first.second;
	        int dist=q.front().second;
	        ans[x][y]=dist;
	        q.pop();
	        for(int k=0;k<4;k++){
	            int nx=x+dx[k],ny=y+dy[k];
	            if(nx>=0 && nx<m &&ny>=0 &&ny<n &&!vis[nx][ny]){
	                q.push({{nx,ny},dist+1});
	                vis[nx][ny]=1;
	            }
	        }
	    }
	    return ans;
	    
	}
	
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		vector<vector<int>> ans = obj.nearest(grid);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends