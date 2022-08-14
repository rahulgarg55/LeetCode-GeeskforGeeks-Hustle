class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
      int n=grid.size();
        vector<vector<int>>ans(n-2,vector<int>(n-2));
       
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i<n-2 && j<n-2){
                    int mx=INT_MIN;
                   
                    for(int m=i;m<i+3;m++){
                        for(int n=j;n<j+3;n++){
                            mx=max(mx,grid[m][n]);
                        }
                    }
                    ans[i][j]=mx;
                }
            }
        }
     return ans;
    }
};