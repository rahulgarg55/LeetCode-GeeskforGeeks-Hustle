class Solution {
public:
    vector<vector<int>>dp;
    int m,n;
    int dfs(vector<int>&nums,vector<int>&mult,int i,int j){
        if(j==m)return 0;
        if(dp[i][j]!=INT_MIN)return dp[i][j];
   return dp[i][j]=max(mult[j]*nums[i]+dfs(nums,mult,i+1,j+1),mult[j]*nums[n-1-j+i]+dfs(nums,mult,i,j+1));
    }
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
         n=(int)nums.size(),m=(int)multipliers.size();
     dp.resize(m+1,vector<int>(m+1,INT_MIN));
        return dfs(nums,multipliers, 0, 0);
    }
};