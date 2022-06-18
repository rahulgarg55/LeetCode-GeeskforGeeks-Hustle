class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
     int n=nums.size();
        int j=0;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0)
                swap(nums[j++],nums[i]);
        }
        return nums;
    }
};