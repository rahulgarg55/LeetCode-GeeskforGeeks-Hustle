// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
    private:
       int t[102][102];
    int solve(int curr,int i, int j, int m, int n,vector<vector<int>>& matrix,vector<vector<bool>>&visited){
        if(i>=m || j>=n || i<0 || j<0 || visited[i][j] == false || matrix[i][j]<=curr)return 0;
        if(t[i][j]!=-1)return t[i][j];
        
        curr = matrix[i][j];
        visited[i][j] = false;
        
        int down =solve(curr,i+1,j,m,n,matrix,visited);
        int up = solve(curr,i-1,j,m,n,matrix,visited);
        int left = solve(curr,i,j-1,m,n,matrix,visited);
        int right = solve(curr,i,j+1,m,n,matrix,visited);
        
        visited[i][j] = true;
        return t[i][j]=1+max(max(left,right),max(up,down));
        
    }
public:
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        // Code here
         int m = matrix.size(), n = matrix[0].size();
        vector<vector<bool>>visited(m,vector<bool>(n,true));
        int ans = 0, curr =0;
        memset(t,-1,sizeof(t));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                t[i][j] = -1;
                ans = max(ans,solve(0,i,j,m,n,matrix,visited));
            }
        }
        return ans;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>matrix(n, vector<int>(m, 0));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)cin >> matrix[i][j];
		Solution obj;
		int ans = obj.longestIncreasingPath(matrix);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends