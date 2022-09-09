class Solution {
public:
    int climbStairs(int n) {
           if(n<=1)return n;
        vector<int>ways;
        ways.push_back(1);
        ways.push_back(2);
        for(int i=2;i<n;i++){
            int num=ways[i-1]+ways[i-2];
            ways.push_back(num);
        }
        return ways.back();
    }
};