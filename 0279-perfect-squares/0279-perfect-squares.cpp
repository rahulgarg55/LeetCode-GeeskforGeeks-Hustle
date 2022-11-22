class Solution {
public:
    int numSquares(int n) {
          vector<int> dp(n+1, INT_MAX);
        dp[0]=0;
        int i, j;
        i=0;
        for(i = 1; i <= n; i++){
            j = 1;
            while(j*j<=i){
                dp[i]=min(dp[i], dp[i-j*j]+1);
                j++;
            }
        }
        return dp[n];
    }
};