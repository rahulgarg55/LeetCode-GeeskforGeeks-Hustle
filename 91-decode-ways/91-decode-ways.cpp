class Solution {
public:
    int solve(int i,string &s,vector<int>&dp){
        int n=s.size();
        if(dp[i]!=-1)
            return dp[i];
        if(s[i]=='0')return dp[i]=0;
        if(i==n)return 1;
        int ans=solve(i+1,s,dp);
        if(i<n-1&&(s[i]=='1' ||s[i]=='2' && s[i+1]<='6')){
            ans+=solve(i+2,s,dp);
        }
        return dp[i]=ans;
    }
    int numDecodings(string s) {
      
        vector<int>dp(s.size()+1,-1);
 
        return solve(0,s,dp);
    }
};