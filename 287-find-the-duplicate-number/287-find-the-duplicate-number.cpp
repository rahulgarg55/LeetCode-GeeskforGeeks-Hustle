class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto x:m){
            if(x.second>=2){
                return x.first;
            }
        }
        return -1;
    }
};