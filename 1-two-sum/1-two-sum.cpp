class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      vector<int>target_indices;
        unordered_map<int,int>hash;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int sec_integer=target-nums[i];
            if(hash.find(sec_integer)!=hash.end()){
                target_indices.push_back(i);
                target_indices.push_back(hash.find(sec_integer)->second);
                break;
            }else{
                hash[nums[i]]=i;
            }
        }
        return target_indices;
    }
};