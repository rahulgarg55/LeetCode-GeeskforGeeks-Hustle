class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
     vector<int>ans;
        ans.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
           nums[i]+=nums[i-1];
    }
        return nums;
    }
};