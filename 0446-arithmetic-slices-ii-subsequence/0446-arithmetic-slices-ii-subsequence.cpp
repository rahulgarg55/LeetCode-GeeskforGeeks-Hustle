class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
       int n=nums.size();
        int ans=0;
        vector<unordered_map<long long,int>>dp(n);
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                long long diff=(long long)nums[i]-nums[j];
                int count;
                if(dp[j].count(diff)){
                    count=dp[j][diff];
                }else{
                    count=0;
                }
                dp[i][diff]+=count+1;
                ans+=count;
            }
        }
        return ans;
    }
};