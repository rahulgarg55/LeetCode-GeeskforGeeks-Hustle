class Solution {
public:
    int thirdMax(vector<int>& nums) {
  set<int>s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        nums.clear();
        for(auto i:s){
            nums.push_back(i);
        }
        if(nums.size()<3){
            return nums[nums.size()-1];
        }
        return nums[nums.size()-3];
    
        }
    
};