class Solution {
public:
    vector<vector<bool>> dp;
    bool solve(int i, int j, int k, string t, string s1, string s2, string s3)
    {
        if (i > s1.size() || j > s2.size() || k > s3.size())
            return false;
        if (i + j > k)
            return false;
        if (i + j == k)
        {
            if (t == s3)
                return true;
        }
        dp[i][j] = true;
        int c1 = false, c2 = false;
        if (i < s1.size() && !dp[i + 1][j] && s1[i] == s3[k])
        {
            c1 = solve(i + 1, j, k + 1, t + s1[i], s1, s2, s3);
        }
        if (j < s2.size() && !dp[i][j + 1] && s2[j] == s3[k])
        {
            c2 = solve(i, j + 1, k + 1, t + s2[j], s1, s2, s3);
        }
        return c1 || c2;
    }
    bool isInterleave(string s1, string s2, string s3)
    {
        int n = s1.size(), m = s2.size(), o = s3.size();
        if (n + m != o)
            return false;
        if (s1 == s3)
            return true;
        if (s2 == s3)
            return true;
        dp.resize(n + 1, vector<bool>(m + 1, false));
        bool res = solve(0, 0, 0, "", s1, s2, s3);
        return res;
        
    }
};